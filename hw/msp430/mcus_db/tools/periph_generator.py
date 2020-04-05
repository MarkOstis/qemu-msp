import json
import sys
import io
import argparse
import os
from periph_gen_class import periph_gen

MCU_NAME="MSP430FR5739"


def create_peripheral_files(out_dir_name, mcu_name, peripheral_json):
    for p in peripheral_json:
    #    if ((p['name'] == "Port_A") or (p['name'] == "Port_B") or (p['name'] == "Port_J")):
        include_data = ""
        defines_data = ""
        types_data = ""
        decl_data = ""
        def_data = ""

        regs = None
        regs_from_p = p['registers']['register']

        try:
            r = regs_from_p[0]
            regs = regs_from_p
        except:
            regs = []
            regs.append(regs_from_p)

        reg_offset_addr=regs[0]['addressOffset']


        _DEV_STATE_NAME = "MSP430_" + p['name'] + "_State"
        _TYPE_MCU_PERIPH = "TYPE_" + MCU_NAME.upper() + "_" + p['name'].upper()
        _MCU_PERIPH = MCU_NAME.upper() + "_" + p['name'].upper()   
        _MCU_PERIPH_STR = "\"" + MCU_NAME.lower() + "_" + p['name'].lower() + "\""
        _PERIPH_OFFSET = reg_offset_addr
        _PERIPHERAL_SIZE = str(get_peripheral_memory_size(p))
        p_gen = periph_gen(_DEV_STATE_NAME,
                           _TYPE_MCU_PERIPH,
                           _MCU_PERIPH,
                           _MCU_PERIPH_STR,
                           _PERIPH_OFFSET)



        include_data =  "// Peripheral name: " + p['name'] + "\n\n" \
                        "#include \"qemu/osdep.h\"\n" \
                        "#include \"qemu/log.h\"\n" \
                        "#include \"hw/sysbus.h\"\n\n\n"
                        
        # Add registers offsets

        defines_data = p_gen.add_define_value(_TYPE_MCU_PERIPH, _MCU_PERIPH_STR)
        defines_data += p_gen.add_define_value("SIZE", _PERIPHERAL_SIZE)
        defines_data += p_gen.add_define_value(_MCU_PERIPH + "(obj)", "OBJECT_CHECK(" + _DEV_STATE_NAME + ", (obj), " + _TYPE_MCU_PERIPH + ")")

        defines_data += "// REGISTERS:\n" + p_gen.add_define_value("PERIPHERAL_OFFSET", reg_offset_addr) + "\n"
        for r in regs:
            if (r['name'] == "UCA0IE"):
                print("UCA0IE")
            if (p_gen.check_reg(regs, r) == 1):
                reg_offset = int(r['addressOffset'], 16) - int(reg_offset_addr, 16)
                defines_data += p_gen.add_define_value(r['name'], reg_offset)

        defines_data += "\n"
        defines_data += p_gen.add_define_regs_reset_value(regs) + "\n"
        defines_data += p_gen.add_define_reg_bits_mask(regs)
        defines_data += p_gen.add_define_reg_bit_field(regs)


        # types
        types_data = "\n\n\n // Type definition\n" + p_gen.add_type_dev_state(regs)

        # Add functions
        # decl_data += "\n\n\n // Local functions declarations\n"

        def_data += "\n\n\n // Local functions definitions\n"
        def_data += p_gen.add_func_def_reg_read_write(regs)
        def_data += p_gen.add_func_def_periph_regs_read(regs)
        def_data += p_gen.add_func_def_periph_regs_write(regs)
        def_data += p_gen.add_func_def_reset_callback(regs)
        def_data += p_gen.add_const_mmio_ops()
        def_data += p_gen.add_func_def_init_callback()
        def_data += p_gen.add_func_def_release_callback()

        def_data += p_gen.add_func_def_class_init_callback()
        def_data += p_gen.add_const_type_info()
        def_data += p_gen.add_func_def_register_types()
        def_data += p_gen.add_type_init()
        
        file_data = include_data + defines_data + types_data + decl_data + def_data
        out_file_name=out_dir_name + "/" + mcu_name + "_" + p['name'] + ".c"
        with open(out_file_name, 'w') as out_file:
            out_file.write(file_data)

def get_peripheral_regs(p):
    regs = None
    regs_from_p = p['registers']['register']

    try:
        r = regs_from_p[0]
        regs = regs_from_p
    except:
        regs = []
        regs.append(regs_from_p)

    return regs

def get_peripheral_memory_offset(p):
    regs = get_peripheral_regs(p)
    
    if (len(regs) > 0):
        return regs[0]['addressOffset']
    else:
        print("Error: peripheral does not have registers")
        exit(-1)
    return 0

def get_reg_with_biggest_offset(regs):
    reg = None
    offset = 0
    for r in regs:
        r_offset = int(r['addressOffset'], 16)
        if (r_offset > offset):
            offset = r_offset
            reg = r
    return reg


def get_peripheral_memory_size(p):
    regs = get_peripheral_regs(p)
    if (len(regs) > 0):
        reg = get_reg_with_biggest_offset(regs)
        base_offset = int(get_peripheral_memory_offset(p), 16)
        p_size = (int(reg['addressOffset'], 16) - base_offset) + int(reg['size'])//8
    return p_size


def create_mcu_periph_file(out_dir_name, mcu_name, peripheral_json):
    def_data =  "typedef struct {\n" \
                "    const char *device_name;\n" \
                "    const char *device_name_to_create;\n" \
                "    uint32_t device_base_addr;\n" \
                "}" + mcu_name.lower() + "_peripheral_t;\n\n"

    def_data += "static " + mcu_name.lower() +  "_peripheral_t periphs[] = {\n"
    for p in peripheral_json:
        p_device_name = "\"" + MCU_NAME.lower() + "_" + p['name'].lower() + "\""
        p_offset = get_peripheral_memory_offset(p)

        def_data +=                 "    {" + p_device_name + ", " + p_device_name + ", " + p_offset + "},\n"

    def_data +=                     "};\n"

    out_file_name=out_dir_name + "/" + mcu_name + ".c"
    with open(out_file_name, 'w') as out_file:
        out_file.write(def_data)

def create_mcu_make_file_data(out_dir_name, mcu_name, peripheral_json):
    data = ""
    for p in peripheral_json:
        data += MCU_NAME.upper() + "_" + p['name'] + ".o\n"

    out_file_name=out_dir_name + "/" + mcu_name + "_MakeFile.txt"
    with open(out_file_name, 'w') as out_file:
        out_file.write(data)


# MAIN
parser = argparse.ArgumentParser(description='Process input arguments.')

with open('/home/marktwis/workspace/QEMU/qemu-msp/hw/msp430/mcus_db/json/MSP430FR5739.json') as json_file:
    all_json = json.load(json_file)

# Create output folder
out_dir_name="./../peripheral/" + MCU_NAME
if not os.path.exists(out_dir_name):
    os.makedirs(out_dir_name)

peripheral_json = all_json['device']['peripherals']['peripheral']

create_peripheral_files(out_dir_name, MCU_NAME, peripheral_json)
create_mcu_periph_file(out_dir_name, MCU_NAME, peripheral_json)
create_mcu_make_file_data(out_dir_name, MCU_NAME, peripheral_json)
