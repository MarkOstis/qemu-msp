// Peripheral name: PMM__Power_Management_System

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_PMM__POWER_MANAGEMENT_SYSTEM "msp430fr5739_pmm__power_management_system"
#define SIZE 18
#define MSP430FR5739_PMM__POWER_MANAGEMENT_SYSTEM(obj) OBJECT_CHECK(MSP430_PMM__Power_Management_System_State, (obj), TYPE_MSP430FR5739_PMM__POWER_MANAGEMENT_SYSTEM)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x0120

#define PMMCTL0 0
#define PMMIFG 10
#define PM5CTL0 16

// REGISTERS RESET VALUE
#define REG_PMMCTL0_RESET_VALUE 0x0
#define REG_PMMIFG_RESET_VALUE 0x0
#define REG_PM5CTL0_RESET_VALUE 0x0

// REGISTERS BITS MASKS
#define REG_PMMCTL0_BITS_MASK 0x7c
#define REG_PMMIFG_BITS_MASK 0xb700
#define REG_PM5CTL0_BITS_MASK 0x1

// FIELDS FOR REGISTER : PMMCTL0
#define REG_PMMCTL0_PMMSWBOR_BITS_MASK (1 << 2)
#define REG_PMMCTL0_PMMSWPOR_BITS_MASK (1 << 3)
#define REG_PMMCTL0_PMMREGOFF_BITS_MASK (1 << 4)
#define REG_PMMCTL0_SVSLE_BITS_MASK (1 << 5)
#define REG_PMMCTL0_SVSHE_BITS_MASK (1 << 6)

// FIELDS FOR REGISTER : PMMIFG
#define REG_PMMIFG_PMMBORIFG_BITS_MASK (1 << 8)
#define REG_PMMIFG_PMMRSTIFG_BITS_MASK (1 << 9)
#define REG_PMMIFG_PMMPORIFG_BITS_MASK (1 << 10)
#define REG_PMMIFG_SVSLIFG_BITS_MASK (1 << 12)
#define REG_PMMIFG_SVSHIFG_BITS_MASK (1 << 13)
#define REG_PMMIFG_PMMLPM5IFG_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PM5CTL0
#define REG_PM5CTL0_LOCKLPM5_BITS_MASK (1 << 0)




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t pmmctl0;
   uint32_t pmmifg;
   uint32_t pm5ctl0;
} MSP430_PMM__Power_Management_System_State;




 // Local functions definitions
// REG: PMMCTL0
static uint64_t reg_pmmctl0_read(MSP430_PMM__Power_Management_System_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PMMCTL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pmmctl0_write(MSP430_PMM__Power_Management_System_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PMMCTL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PMMCTL0_PMMSWBOR_BITS_MASK) != ((*reg) & REG_PMMCTL0_PMMSWBOR_BITS_MASK)) {
        }

        if ((new_value & REG_PMMCTL0_PMMSWPOR_BITS_MASK) != ((*reg) & REG_PMMCTL0_PMMSWPOR_BITS_MASK)) {
        }

        if ((new_value & REG_PMMCTL0_PMMREGOFF_BITS_MASK) != ((*reg) & REG_PMMCTL0_PMMREGOFF_BITS_MASK)) {
        }

        if ((new_value & REG_PMMCTL0_SVSLE_BITS_MASK) != ((*reg) & REG_PMMCTL0_SVSLE_BITS_MASK)) {
        }

        if ((new_value & REG_PMMCTL0_SVSHE_BITS_MASK) != ((*reg) & REG_PMMCTL0_SVSHE_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PMMIFG
static uint64_t reg_pmmifg_read(MSP430_PMM__Power_Management_System_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PMMIFG_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pmmifg_write(MSP430_PMM__Power_Management_System_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PMMIFG_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PMMIFG_PMMBORIFG_BITS_MASK) != ((*reg) & REG_PMMIFG_PMMBORIFG_BITS_MASK)) {
        }

        if ((new_value & REG_PMMIFG_PMMRSTIFG_BITS_MASK) != ((*reg) & REG_PMMIFG_PMMRSTIFG_BITS_MASK)) {
        }

        if ((new_value & REG_PMMIFG_PMMPORIFG_BITS_MASK) != ((*reg) & REG_PMMIFG_PMMPORIFG_BITS_MASK)) {
        }

        if ((new_value & REG_PMMIFG_SVSLIFG_BITS_MASK) != ((*reg) & REG_PMMIFG_SVSLIFG_BITS_MASK)) {
        }

        if ((new_value & REG_PMMIFG_SVSHIFG_BITS_MASK) != ((*reg) & REG_PMMIFG_SVSHIFG_BITS_MASK)) {
        }

        if ((new_value & REG_PMMIFG_PMMLPM5IFG_BITS_MASK) != ((*reg) & REG_PMMIFG_PMMLPM5IFG_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PM5CTL0
static uint64_t reg_pm5ctl0_read(MSP430_PMM__Power_Management_System_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PM5CTL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pm5ctl0_write(MSP430_PMM__Power_Management_System_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PM5CTL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PM5CTL0_LOCKLPM5_BITS_MASK) != ((*reg) & REG_PM5CTL0_LOCKLPM5_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_PMM__Power_Management_System_State *s = MSP430FR5739_PMM__POWER_MANAGEMENT_SYSTEM(opaque);
    uint64_t retvalue = 0;

    if ((addr >= PMMCTL0) && ((addr + size) <= (PMMCTL0 + 2))) {
        retvalue = reg_pmmctl0_read(s, &s->pmmctl0, (addr - PMMCTL0));
    } else if ((addr >= PMMIFG) && ((addr + size) <= (PMMIFG + 2))) {
        retvalue = reg_pmmifg_read(s, &s->pmmifg, (addr - PMMIFG));
    } else if ((addr >= PM5CTL0) && ((addr + size) <= (PM5CTL0 + 2))) {
        retvalue = reg_pm5ctl0_read(s, &s->pm5ctl0, (addr - PM5CTL0));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_PMM__Power_Management_System_State *s = MSP430FR5739_PMM__POWER_MANAGEMENT_SYSTEM(opaque);

    if ((addr >= PMMCTL0) && ((addr + size) <= (PMMCTL0 + 2))) {
        reg_pmmctl0_write(s, &s->pmmctl0, (addr - PMMCTL0), value, size);
    } else if ((addr >= PMMIFG) && ((addr + size) <= (PMMIFG + 2))) {
        reg_pmmifg_write(s, &s->pmmifg, (addr - PMMIFG), value, size);
    } else if ((addr >= PM5CTL0) && ((addr + size) <= (PM5CTL0 + 2))) {
        reg_pm5ctl0_write(s, &s->pm5ctl0, (addr - PM5CTL0), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_PMM__Power_Management_System_State *device = MSP430FR5739_PMM__POWER_MANAGEMENT_SYSTEM(dev);

   device->pmmctl0 = 0x0;
   device->pmmifg = 0x0;
   device->pm5ctl0 = 0x0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_PMM__Power_Management_System_State *s = MSP430FR5739_PMM__POWER_MANAGEMENT_SYSTEM(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_PMM__POWER_MANAGEMENT_SYSTEM, SIZE);
    sysbus_init_mmio(SYS_BUS_DEVICE(obj), &s->region);
}

static void device_release_callback(DeviceState *dev, Error **errp) {
}

static void class_init(ObjectClass *klass, void *data) {
        DeviceClass *dc = DEVICE_CLASS(klass);

        dc->reset = device_reset_callback;
        dc->realize = device_release_callback;
}

static const TypeInfo info = {
    .name          = TYPE_MSP430FR5739_PMM__POWER_MANAGEMENT_SYSTEM,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_PMM__Power_Management_System_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_pmm__power_management_system_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_pmm__power_management_system_register_types)
