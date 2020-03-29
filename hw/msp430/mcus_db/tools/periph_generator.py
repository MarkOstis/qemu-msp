import json
import sys
import io
import argparse
import os
from periph_gen_class import periph_gen

# MAIN
parser = argparse.ArgumentParser(description='Process input arguments.')

MCU_NAME="MSP430FR5739"

with open('/home/marktwis/workspace/QEMU/qemu-msp/hw/msp430/mcus_db/json/MSP430FR5739.json') as json_file:
    all_json = json.load(json_file)

peripheral_json = all_json['device']['peripherals']['peripheral']


# Create output folder
out_dir_name="./../peripheral/" + MCU_NAME
if not os.path.exists(out_dir_name):
    os.makedirs(out_dir_name)

for p in peripheral_json:
    if ((p['name'] == "Port_A") or (p['name'] == "Port_B") or (p['name'] == "Port_J")):
        include_data = ""
        defines_data = ""
        types_data = ""
        decl_data = ""
        def_data = ""


        regs = p['registers']['register']
        reg_offset_addr=regs[0]['addressOffset']


        _DEV_STATE_NAME = "MSP430_" + p['name'] + "_State"
        _TYPE_MCU_PERIPH = "TYPE_" + MCU_NAME.upper() + "_" + p['name'].upper()
        _MCU_PERIPH = MCU_NAME.upper() + "_" + p['name'].upper()   
        _MCU_PERIPH_STR = "\"" + MCU_NAME.lower() + "_" + p['name'].lower() + "\""
        _PERIPH_OFFSET = reg_offset_addr
        p_gen = periph_gen(_DEV_STATE_NAME, _TYPE_MCU_PERIPH, _MCU_PERIPH, _MCU_PERIPH_STR, _PERIPH_OFFSET)



        include_data =  "// Peripheral name: " + p['name'] + "\n\n" \
                        "#include \"qemu/osdep.h\"\n" \
                        "#include \"qemu/log.h\"\n" \
                        "#include \"hw/sysbus.h\"\n\n\n"
                        
        # Add registers offsets

        defines_data = p_gen.add_define_value(_TYPE_MCU_PERIPH, _MCU_PERIPH_STR)
        defines_data += p_gen.add_define_value("SIZE", len(regs))
        defines_data += p_gen.add_define_value(_MCU_PERIPH + "(obj)", "OBJECT_CHECK(" + _DEV_STATE_NAME + ", (obj), " + _TYPE_MCU_PERIPH + ")")

        defines_data += "// REGISTERS:\n" + p_gen.add_define_value("PERIPHERAL_OFFSET", reg_offset_addr) + "\n"
        for r in regs:
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
        # decl_data += p_gen.add_func_decl_reg_read_write(regs)
        # decl_data += p_gen.add_func_decl_periph_regs_read()
        # decl_data += p_gen.add_func_decl_periph_regs_write()
        # decl_data += p_gen.add_func_decl_reset_callback()
        # decl_data += p_gen.add_func_decl_init_callback()

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
        out_file_name=out_dir_name + "/" + MCU_NAME + "_" + p['name'] + ".c"
        with open(out_file_name, 'w') as out_file:
            out_file.write(file_data)
