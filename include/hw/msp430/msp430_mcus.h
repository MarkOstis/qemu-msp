
#ifndef HW_MSP430_MCUS_H
#define HW_MSP430_MCUS_H

#include "hw/sysbus.h"

#define TYPE_MSP430FR5739_MCU "msp430fr5739_mcu"
#define MSP430FR5739_MCU(obj) OBJECT_CHECK(msp430_mcu_device, (obj), TYPE_MSP430FR5739_MCU)

typedef struct 
{
    // Public Fields
    SysBusDevice parent_obj;

    // Private Fields
    MemoryRegion region;
    char *kernel_filename;
} msp430_mcu_device;

#endif