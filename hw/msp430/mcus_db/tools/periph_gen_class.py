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

    def func_get_field_bit_mask_name(self, field):
        return "REG_" + field['name'].upper() + "_BITS_MASK"


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
            buff += self.add_define_value("REG_" + r['name'].upper() + "_RESET_VALUE", r['resetValue'])
        return buff

    def add_define_reg_bit_field(self, regs):
        buff = ""
        for r in regs:
            buff += "// FIELDS FOR REGISTER : " + r['name'].upper() + "\n"
            field = None
            try:
                fields = r['fields']['field']
                for f in fields:
                    bit_width = f['bitWidth']
                    bit_mask = str(self.number_to_bit_mask(int(bit_width)))
                    buff += self.add_define_value(self.func_get_field_bit_mask_name(f), "(" + bit_mask + " << " + f['bitOffset'] +")")
            except:
                fields = None

            buff += "\n"
        return buff

    def add_define_reg_bits_mask(self, regs):
        buff = "// REGISTERS BITS MASKS\n"
        for r in regs:
            bits_mask = 0
            off_set = 0
            try:
                fields = r['fields']['field']
                for f in fields:
                    bit_width = f['bitWidth']
                    bits_mask |= (self.number_to_bit_mask(int(bit_width)) << int(f['bitOffset']))
            except:
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
            buff += "   uint32_t " + r['name'].lower() + ";\n"

        buff += "} " + self.DEV_STATE_NAME + ";\n\n"
        return buff


    # FUNCTION DECLARATION

    # FUNCTION DEFINITION

    def add_func_def_reg_read(self, reg):
        buff =  "static uint64_t " + self.func_get_reg_read_name(reg) + "(" + self.DEV_STATE_NAME + " *dev, uint32_t *reg) {\n" \
                "    return ((*reg) & " + self.func_get_reg_bits_mask_name(reg) +");\n" \
                "}\n\n"
        return buff

    def add_func_def_reg_write(self, reg):
        buff =  "static void " + self.func_get_reg_write_name(reg) + "(" + self.DEV_STATE_NAME + " *dev, uint32_t *reg, uint64_t val, unsigned int size) {\n" \
                "    uint32_t new_value = val & " + self.func_get_reg_bits_mask_name(reg) + ";\n" \
                "    if ((*reg) != new_value) {\n"
        
        try:
            fields = reg['fields']['field']
            for f in fields:
                buff += "        if ((new_value & " + self.func_get_field_bit_mask_name(f) + ") != ((*reg) & " + self.func_get_field_bit_mask_name(f) + ")) {\n"\
                        "        }\n"
        except:
            pass
        buff += "        (*reg) = new_value;\n"
        buff += "    }\n" \
                "}\n\n"
        return buff

    def add_func_def_reg_read_write(self, regs):
        buff = ""
        for r in regs:
            buff += "// REG: " + r['name'].upper() + "\n"
            buff += self.add_func_def_reg_read(r) + self.add_func_def_reg_write(r)
        return buff


    def add_func_def_periph_regs_read(self, regs):
        buff = FUNC_PERIPH_REGS_READ + " {\n" \
                "    " + self.DEV_STATE_NAME + " *s = " + self.MCU_PERIPH + "(opaque);\n" \
                "    uint64_t retvalue = 0;\n\n" \
                "    switch (addr) {\n"

        for r in regs:
            buff += "        case " + r['name'] + ":\t\t\t{ retvalue = " + self.func_get_reg_read_name(r) + "(s, &s->" + r['name'].lower() + ");\t\t} break;\n"

        buff += "        default: {\n" \
                "            qemu_log_mask(LOG_GUEST_ERROR, \"%s: Bad offset 0x%\"HWADDR_PRIx\"\\n\", __func__, addr);" \
                "        }\n" \
                "        break;\n" \
                "    }\n"
        # end of function
        buff += "    return retvalue;\n}\n\n"

        return buff

    def add_func_def_periph_regs_write(self, regs):
        buff = FUNC_PERIPH_REGS_WRITE + " {\n" \
                "    " + self.DEV_STATE_NAME + " *s = " + self.MCU_PERIPH + "(opaque);\n\n" \
                "    switch (addr) {\n"

        for r in regs:
            buff += "        case " + r['name'].upper() + ":\t\t\t{ " + self.func_get_reg_write_name(r) + "(s, &s->" + r['name'].lower() + ", value, size);\t\t} break;\n"

        buff += "        default: {\n" \
                "            qemu_log_mask(LOG_GUEST_ERROR, \"%s: Bad offset 0x%\"HWADDR_PRIx\"\\n\", __func__, addr);" \
                "        }\n" \
                "        break;\n" \
                "    }\n"
        # end of function
        buff += "\n}\n\n"

        return buff

    def add_func_def_reset_callback(self, regs):
        buff = FUNC_PERIPH_DEVICE_RESET + " {\n" \
                "    " + self.DEV_STATE_NAME + " *device = " + self.MCU_PERIPH + "(dev);\n\n"

        for r in regs:
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
                "    memory_region_init_io(&s->region, obj, &mmio_ops, s, " + self.TYPE_MCU_PERIPH + ", PERIPHERAL_OFFSET);\n" \
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

