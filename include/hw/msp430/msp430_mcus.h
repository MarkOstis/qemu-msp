
#ifndef HW_MSP430_MCUS_H
#define HW_MSP430_MCUS_H

#include "hw/sysbus.h"

#define TYPE_MSP430FR5739_MCU "msp430fr5739_mcu"
#define MSP430FR5739_MCU(obj) OBJECT_CHECK(MSP430Mcu, (obj), TYPE_MSP430FR5739_MCU)

typedef struct 
{
    // Public Fields
    SysBusDevice parent_obj;

    // Private Fields
    MemoryRegion region;
    char *kernel_filename;

    DeviceState *flash_mem;
    int         flash_mem_size;
    int         flash_mem_addr;

    MemoryRegion *sram_mem;
    int          sram_mem_size;
    int          sram_mem_addr;
    
} MSP430Mcu;

#endif