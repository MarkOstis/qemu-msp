#include "qemu/osdep.h"
#include "cpu.h"
#include "hw/hw.h"
#include "hw/boards.h"
#include "sysemu/sysemu.h"
#include "exec/address-spaces.h"
#include "hw/loader.h"
#include "hw/sysbus.h"
#include "hw/msp430/msp430_mcus.h"
#include "qom/object.h"
#include "qemu/error-report.h"
#include "qapi/error.h"

#define MSP430_RAM_SIZE (16*0x1000)
#define MSP430_FRAM_SIZE (16*1024)
#define FLASH_BASE_ADDRESS 0x8000


static void msp430_mcu_boot(DeviceState *dev)
{
    msp430_mcu_device *mcu = MSP430FR5739_MCU(dev);
    int kernel_size;

    // Check to see if we have a kernel file specified. If we don't, then
    // exit out saying we don't have a kernel file. One is needed to execute.
    if (!mcu->kernel_filename)
    {
        fprintf(stderr, "Bare-metal application not specified by the user. Exiting.\n");
        exit(1);
    }

    // Attempt to load kernel file in the appropriate location. This will
    // load the memory at the flash address.
    kernel_size = load_image_targphys(mcu->kernel_filename, FLASH_BASE_ADDRESS, MSP430_FRAM_SIZE);
    if (kernel_size < 0)
    {
        fprintf(stderr, "Unable to load firmware to MSP430. Exiting.\n");
        exit(1);
    }
}

/*******************************************************************
 * Object Callback Functions
 ******************************************************************/
/**
 * @brief Resets the MSP430 device.
 * @details Resets the MSP430 device. Handles resetting the MSP430
 * peripheral into a known good initial state, such as power up.
 * 
 * @param dev MSP430 Device object.
 */
static void msp430_mcu_reset(DeviceState *dev)
{
    printf("MSP430 MCU Reset!\n");
}

/**
 * @brief Initialization Function for the MSP430 device.
 * @details Initialization Function for the MSP430 device.
 * This function is responsible for initializing the object device that 
 * is instantiated as a MSP430 device.
 * 
 * @param dev SysBusDevice that will be initialized as a MSP430 device.
 * @return If initialization was successful or not (0 for success)
 */
static void msp430_mcu_instance_init(Object *obj)
{
    MSP430Cpu *cpu;
    const char *cpu_model = "msp430";
    MemoryRegion *toplevel = get_system_memory();
    MemoryRegion *sram = g_new(MemoryRegion, 1);
    
    cpu = cpu_msp430_init(cpu_model);
    if (!cpu) {
        fprintf(stderr, "Unable to find CPU definition\n");
        exit(1);
    }

    memory_region_init_ram(sram, NULL, "msp430.ram", MSP430_RAM_SIZE, NULL);
    vmstate_register_ram_global(sram);
    memory_region_add_subregion(toplevel, 0x400, sram);

    return;
}

static void msp430_mcu_realize_callback(DeviceState *dev, Error **errp)
{
    msp430_mcu_boot(dev);
}

/*******************************************************************
 * Registration and Initialization Functions (Class and Object)
 ******************************************************************/
/**
 * @brief Initializes class object for MSP430 device.
 * @details Initializes class object for MSP430 device. Specifies the
 * required interface functions for an object to be created.
 * 
 * @param klass Class Object being instantiated
 * @param data Data?
 */
static void msp430_mcu_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);
    // SysBusDeviceClass *sdc = SYS_BUS_DEVICE_CLASS(klass);
    // sdc->init = msp430_mcu_init;
    dc->reset = msp430_mcu_reset;
    dc->realize = msp430_mcu_realize_callback;
}

/**
 * @brief Type registration for MSP430 hardware for family 1.
 * @details Type registration for MSP430 hardware for family 1.
 */
static const TypeInfo msp430_mcu_info = {
    .name          = TYPE_MSP430FR5739_MCU,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(msp430_mcu_device),
    .instance_init = msp430_mcu_instance_init,
    .class_init    = msp430_mcu_class_init,
};

/**
 * @brief Registers types declared within this hardware device.
 * @details Register types declared within this hardware device file.
 */
static void msp430_mcu_register_types(void)
{
    type_register_static(&msp430_mcu_info);
}

// Define the function that will register new types into 
// QEMU with the hardware declarations within this file.
type_init(msp430_mcu_register_types)