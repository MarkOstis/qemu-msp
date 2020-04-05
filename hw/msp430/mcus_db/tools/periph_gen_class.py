import json
import sys
import io
import os

FUNC_PERIPH_REGS_READ="static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size)"
FUNC_PERIPH_REGS_WRITE="static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size)"
FUNC_PERIPH_DEVICE_RESET="static void device_reset_callback(DeviceState *dev)"
FUNC_PERIPH_DEVICE_INIT="static void device_init_callback(Object *obj)"
FUNC_PERIPH_DEVICE_RELEASE="static void device_release_callback(DeviceState *dev, Error **errp)"
FUNC_PERIPH_DEVICE_CLASS_INIT="static void class_init(ObjectClass *klass, void *data)"

CONST_MMIO_OPS="static const MemoryRegionOps mmio_ops"

class periph_gen:
    def __init__(self, dev_state_name, type_mcu_periph, mcu_periph, mcu_periph_str, periph_offset):
        self.DEV_STATE_NAME = dev_state_name
        self.TYPE_MCU_PERIPH = type_mcu_periph
        self.MCU_PERIPH = mcu_periph
        self.MCU_PERIPH_STR = mcu_periph_str
        self.PERIPH_OFFSET = periph_offset

        print("Periph generator init")

    # HELPERS
    def func_get_reg_read_name(self, reg):
        return "reg_" + reg['name'].lower() + "_read"

    def func_get_reg_write_name(self, reg):
        return "reg_" + reg['name'].lower() + "_write"

    def func_get_reg_bits_mask_name(self, reg):
        return "REG_" + reg['name'].upper() + "_BITS_MASK"

    def func_get_field_bit_mask_name(self, reg, field):
        return "REG_" + reg['name'].upper() + "_" + field['name'].upper() + "_BITS_MASK"

    def is_reg_equal(self, reg1, reg2):
        is_equal = 0

        reg1_offset = int(reg1['addressOffset'], 16)
        reg1_size = int(reg1['size'])//8

        reg2_offset = int(reg2['addressOffset'], 16)
        reg2_size = int(reg2['size'])//8

        if ((reg1_offset == reg2_offset) and (reg1_size == reg2_size)):
            is_equal = 1
        return is_equal

    def is_reg_duplicated(self, regs, reg):
        is_dup = 0

        for r in regs:
            if (r['name'] != reg['name']):
                if (self.is_reg_equal(reg, r)):
                    is_dup = 1
        return is_dup

    def get_reg_fields(self, reg):
        fields = []
        try:
            f = reg['fields']['field']
            try:
                f1 = f[0]
                fields = f
            except:
                fields.append(f)
        except:
            pass
        return fields

    def is_child_of_specific_reg(self, parent_reg, child_reg):
        is_child = 0

        p_reg_offset = int(parent_reg['addressOffset'], 16)
        p_reg_size = int(parent_reg['size'])//8

        c_reg_offset = int(child_reg['addressOffset'], 16)
        c_reg_size = int(child_reg['size'])//8

        if ((c_reg_offset >= p_reg_offset) and (c_reg_offset < p_reg_offset + p_reg_size) and (c_reg_size < p_reg_size)):
            is_child = 1
        return is_child

    def is_child_reg(self, regs, reg):
        is_child = 0
        for r in regs:
            if (r['name'] != reg['name']):
                if (self.is_child_of_specific_reg(r, reg) == 1):
                    is_child = 1
        return is_child

    def is_first_of_duplicated(self, regs, reg):
        is_first = 0
        for r in regs:
            if (r['name'] == reg['name']):
                is_first = 1
                break
            elif (self.is_reg_equal(r, reg) == 1):
                break
        return is_first

    def is_duplicated_regs_has_fields(self, regs, reg):
        is_has = 0
        dup_regs = []
        dup_regs.append(reg)
        for r in regs:
            if (r['name'] != reg['name']):
                if (self.is_reg_equal(reg, r)):
                    dup_regs.append(r)
        for r in dup_regs:
            fields = self.get_reg_fields(r)
            if (len(fields) != 0):
                is_has = 1
                break
        return is_has

    def find_all_childs(self, regs, parent_reg):
        childs = []
        for r in regs:
            if (self.is_child_of_specific_reg(parent_reg, r) == 1):
                childs.append(r)
        return childs

    def get_parrent_reg(self, regs, child_reg):
        p_reg = None
        for r in regs:
            if (r['name'] != child_reg['name']):
                if (self.is_child_of_specific_reg(r, child_reg) == 1):
                    p_reg = r
        return p_reg

    def check_reg(self, regs, reg):
        valid = 0
        if (self.is_child_reg(regs, reg) == 0):
            if (self.is_reg_duplicated(regs, reg) == 0):
                valid = 1
            else:
                fields = self.get_reg_fields(reg)
                if (len(fields) > 0):
                    valid = 1
                elif (self.is_duplicated_regs_has_fields(regs, reg) == 0):
                    if (self.is_first_of_duplicated(regs, reg) == 1):
                        valid = 1

        return valid


    def number_to_bit_mask(self, number):
        bit_mask = 0
        for x in range(number):
            bit_mask |= (1 << x)
        return bit_mask

    # DEFINES GENERATOR
    def add_define_value(self, name, val):
        buff = "#define " + name + " " + str(val) + "\n"
        return buff

    def add_define_regs_reset_value(self, regs):
        buff = "// REGISTERS RESET VALUE\n"
        for r in regs:
            if (self.check_reg(regs, r) == 1):
                buff += self.add_define_value("REG_" + r['name'].upper() + "_RESET_VALUE", r['resetValue'])
        return buff

    def add_define_reg_bit_field(self, regs):
        buff = ""
        for r in regs:
            buff += "// FIELDS FOR REGISTER : " + r['name'].upper() + "\n"
            fields = self.get_reg_fields(r)
            if (len(fields) > 0):
                p_reg = self.get_parrent_reg(regs, r)
                bit_offset = 0
                if (p_reg != None):
                    bit_offset = (int(r['addressOffset'], 16) - int(p_reg['addressOffset'], 16)) * 8
                for f in fields:
                    bit_width = f['bitWidth']
                    bit_mask = str(self.number_to_bit_mask(int(bit_width)))
                    f_bit_offset = bit_offset + int(f['bitOffset'])

                    buff += self.add_define_value(self.func_get_field_bit_mask_name(r, f), "(" + bit_mask + " << " + str(f_bit_offset) +")")

            buff += "\n"
        return buff

    def add_define_reg_bits_mask(self, regs):
        buff = "// REGISTERS BITS MASKS\n"
        for r in regs:
            if (self.check_reg(regs, r) == 1):
                bits_mask = 0
                off_set = 0
                fields = self.get_reg_fields(r)
                if (fields != []):
                    for f in fields:
                        bit_width = f['bitWidth']
                        bits_mask |= (self.number_to_bit_mask(int(bit_width)) << int(f['bitOffset']))
                else:
                    reg_size = int(r['size'])
                    for bit in range(reg_size):
                        bits_mask |= (1 << bit)
                buff += self.add_define_value(self.func_get_reg_bits_mask_name(r), str(hex(bits_mask)))
        buff += "\n"
        return buff

    # TYPES GENERATOR
    def add_type_dev_state(self, regs):
        buff  = "typedef struct {\n" \
                "   SysBusDevice parent_obj;\n\n"\
                "   MemoryRegion region;\n\n"

        for r in regs:
            if (self.check_reg(regs, r) == 1):
                buff += "   uint32_t " + r['name'].lower() + ";\n"

        buff += "} " + self.DEV_STATE_NAME + ";\n\n"
        return buff


    # FUNCTION DECLARATION

    # FUNCTION DEFINITION

    def add_func_def_reg_read(self, regs, reg):
        buff =  "static uint64_t " + self.func_get_reg_read_name(reg) + "(" + self.DEV_STATE_NAME + " *dev, uint32_t *reg, uint32_t offset) {\n" \
                "    uint32_t value = ((*reg) & " + self.func_get_reg_bits_mask_name(reg) + ") >> (offset * 8);\n" \
                "    return value;\n" \
                "}\n\n"
        return buff

    def add_func_def_reg_write(self, regs, reg):
        buff =  "static void " + self.func_get_reg_write_name(reg) + "(" + self.DEV_STATE_NAME + " *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {\n" \
                "    uint32_t new_value = (val << (offset * 8))  & " + self.func_get_reg_bits_mask_name(reg) + ";\n" \
                "    if ((*reg) != new_value) {\n"

        if (reg['name'] == "RTCADOWDAY"):
            print("RTCADOWDAY")

        fields = self.get_reg_fields(reg)
        if (len(fields) > 0):
            for f in fields:
                buff += "        if ((new_value & " + self.func_get_field_bit_mask_name(reg, f) + ") != ((*reg) & " + self.func_get_field_bit_mask_name(reg, f) + ")) {\n"\
                        "        }\n\n"
        else:
            # Check if there are child regs:
            childs_regs = self.find_all_childs(regs, reg)
            if (len(childs_regs) > 0):
                for ch_r in childs_regs:
                    fields = self.get_reg_fields(ch_r)
                    if (len(fields) > 0):
                        for f in fields:
                            buff += "        if ((new_value & " + self.func_get_field_bit_mask_name(ch_r, f) + ") != ((*reg) & " + self.func_get_field_bit_mask_name(ch_r, f) + ")) {\n"\
                                    "        }\n\n"

        buff += "        (*reg) = new_value;\n"
        buff += "    }\n" \
                "}\n\n"
        return buff

    def add_func_def_reg_read_write(self, regs):
        buff = ""
        for r in regs:
            if (self.check_reg(regs, r) == 1):
                buff += "// REG: " + r['name'].upper() + "\n"
                buff += self.add_func_def_reg_read(regs, r) + self.add_func_def_reg_write(regs, r)
        return buff


    def add_func_def_periph_regs_read(self, regs):

        buff = FUNC_PERIPH_REGS_READ + " {\n" \
                "    " + self.DEV_STATE_NAME + " *s = " + self.MCU_PERIPH + "(opaque);\n" \
                "    uint64_t retvalue = 0;\n\n"
        is_first = 0
        for r in regs:
            if (self.check_reg(regs, r) == 1):
                if (is_first == 0):
                    is_first = 1
                    buff += "    if "
                else:
                    buff += " else if "
                buff += "((addr >= " + r['name'] + ") && ((addr + size) <= ("  + r['name'] + " + " + str(int(r['size'])//8) + "))) {\n" \
                        "        retvalue = " + self.func_get_reg_read_name(r) + "(s, &s->" + r['name'].lower() + ", (addr - " + r['name'] + "));\n" \
                        "    }"

        buff += " else {\n" \
                "        qemu_log_mask(LOG_GUEST_ERROR, \"%s: Bad offset 0x%\"HWADDR_PRIx\", size = %u\\n\", __func__, addr, size);\n" \
                "    }\n"
        # end of function
        buff += "    return retvalue;\n}\n\n"
        return buff

    def add_func_def_periph_regs_write(self, regs):
        buff = FUNC_PERIPH_REGS_WRITE + " {\n" \
                "    " + self.DEV_STATE_NAME + " *s = " + self.MCU_PERIPH + "(opaque);\n\n"

        is_first = 0
        for r in regs:
            if (self.check_reg(regs, r) == 1):
                if (is_first == 0):
                    is_first = 1
                    buff += "    if "
                else:
                    buff += " else if "
                buff += "((addr >= " + r['name'] + ") && ((addr + size) <= ("  + r['name'] + " + " + str(int(r['size'])//8) + "))) {\n" \
                        "        " + self.func_get_reg_write_name(r) + "(s, &s->" + r['name'].lower() + ", (addr - " + r['name'] + "), value, size);\n" \
                        "    }"

        buff += " else {\n" \
                "        qemu_log_mask(LOG_GUEST_ERROR, \"%s: Bad offset 0x%\"HWADDR_PRIx\", size = %u\\n\", __func__, addr, size);\n" \
                "    }\n"
        # end of function
        buff += "\n}\n\n"
        return buff

    def add_func_def_reset_callback(self, regs):
        buff = FUNC_PERIPH_DEVICE_RESET + " {\n" \
                "    " + self.DEV_STATE_NAME + " *device = " + self.MCU_PERIPH + "(dev);\n\n"

        for r in regs:
            if (self.check_reg(regs, r) == 1):
                buff += "   device->" + r['name'].lower() + " = " + r['resetValue'] + ";\n"

        # end of function
        buff += "\n}\n\n"

        return buff

    def add_const_mmio_ops(self):
        buff = CONST_MMIO_OPS + "= {\n" \
                "    .read  = regs_read,\n" \
                "    .write = regs_write,\n" \
                "    .endianness = DEVICE_NATIVE_ENDIAN,\n" \
                "};\n\n"
        return buff

    def add_func_def_init_callback(self):
        buff = FUNC_PERIPH_DEVICE_INIT + " {\n" \
                "    " + self.DEV_STATE_NAME + " *s = " + self.MCU_PERIPH + "(obj);\n\n" \
                "    memory_region_init_io(&s->region, obj, &mmio_ops, s, " + self.TYPE_MCU_PERIPH + ", SIZE);\n" \
                "    sysbus_init_mmio(SYS_BUS_DEVICE(obj), &s->region);\n" \
                "}\n\n"
        return buff

    def add_func_def_release_callback(self):
        buff = FUNC_PERIPH_DEVICE_RELEASE + " {\n" \
                "}\n\n"
        return buff

    def add_func_def_class_init_callback(self):
        buff = FUNC_PERIPH_DEVICE_CLASS_INIT + " {\n" \
                "        DeviceClass *dc = DEVICE_CLASS(klass);\n\n" \
                "        dc->reset = device_reset_callback;\n" \
                "        dc->realize = device_release_callback;\n" \
                "}\n\n"
        return buff

    def add_const_type_info(self):
        buff = "static const TypeInfo info = {\n" \
                "    .name          = " + self.TYPE_MCU_PERIPH + ",\n" \
                "    .parent        = TYPE_SYS_BUS_DEVICE,\n" \
                "    .instance_size = sizeof(" + self.DEV_STATE_NAME + "),\n" \
                "    .instance_init = device_init_callback,\n" \
                "    .class_init    = class_init,\n" \
                "};\n\n"
        return buff
        
    def add_func_def_register_types(self):
        buff =  "static void " + self.MCU_PERIPH.lower() + "_register_types(void) {\n" \
                "    type_register_static(&info);\n" \
                "}\n\n"
        return buff

    def add_type_init(self):
        return "type_init(" + self.MCU_PERIPH.lower() + "_register_types)\n"

