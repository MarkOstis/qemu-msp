// Peripheral name: SYS__System_Module

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_SYS__SYSTEM_MODULE "msp430fr5739_sys__system_module"
#define SIZE 32
#define MSP430FR5739_SYS__SYSTEM_MODULE(obj) OBJECT_CHECK(MSP430_SYS__System_Module_State, (obj), TYPE_MSP430FR5739_SYS__SYSTEM_MODULE)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x0180

#define SYSCTL 0
#define SYSBSLC 2
#define SYSJMBC 6
#define SYSJMBI0 8
#define SYSJMBI1 10
#define SYSJMBO0 12
#define SYSJMBO1 14
#define SYSBERRIV 24
#define SYSUNIV 26
#define SYSSNIV 28
#define SYSRSTIV 30

// REGISTERS RESET VALUE
#define REG_SYSCTL_RESET_VALUE 0x0
#define REG_SYSBSLC_RESET_VALUE 0x0
#define REG_SYSJMBC_RESET_VALUE 0x0
#define REG_SYSJMBI0_RESET_VALUE 0
#define REG_SYSJMBI1_RESET_VALUE 0
#define REG_SYSJMBO0_RESET_VALUE 0
#define REG_SYSJMBO1_RESET_VALUE 0
#define REG_SYSBERRIV_RESET_VALUE 0
#define REG_SYSUNIV_RESET_VALUE 0
#define REG_SYSSNIV_RESET_VALUE 0
#define REG_SYSRSTIV_RESET_VALUE 0

// REGISTERS BITS MASKS
#define REG_SYSCTL_BITS_MASK 0x35
#define REG_SYSBSLC_BITS_MASK 0xc007
#define REG_SYSJMBC_BITS_MASK 0xdf
#define REG_SYSJMBI0_BITS_MASK 0xffff
#define REG_SYSJMBI1_BITS_MASK 0xffff
#define REG_SYSJMBO0_BITS_MASK 0xffff
#define REG_SYSJMBO1_BITS_MASK 0xffff
#define REG_SYSBERRIV_BITS_MASK 0xffff
#define REG_SYSUNIV_BITS_MASK 0xffff
#define REG_SYSSNIV_BITS_MASK 0xffff
#define REG_SYSRSTIV_BITS_MASK 0xffff

// FIELDS FOR REGISTER : SYSCTL
#define REG_SYSCTL_SYSRIVECT_BITS_MASK (1 << 0)
#define REG_SYSCTL_SYSPMMPE_BITS_MASK (1 << 2)
#define REG_SYSCTL_SYSBSLIND_BITS_MASK (1 << 4)
#define REG_SYSCTL_SYSJTAGPIN_BITS_MASK (1 << 5)

// FIELDS FOR REGISTER : SYSBSLC
#define REG_SYSBSLC_SYSBSLSIZE0_BITS_MASK (1 << 0)
#define REG_SYSBSLC_SYSBSLSIZE1_BITS_MASK (1 << 1)
#define REG_SYSBSLC_SYSBSLR_BITS_MASK (1 << 2)
#define REG_SYSBSLC_SYSBSLOFF_BITS_MASK (1 << 14)
#define REG_SYSBSLC_SYSBSLPE_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : SYSJMBC
#define REG_SYSJMBC_JMBIN0FG_BITS_MASK (1 << 0)
#define REG_SYSJMBC_JMBIN1FG_BITS_MASK (1 << 1)
#define REG_SYSJMBC_JMBOUT0FG_BITS_MASK (1 << 2)
#define REG_SYSJMBC_JMBOUT1FG_BITS_MASK (1 << 3)
#define REG_SYSJMBC_JMBMODE_BITS_MASK (1 << 4)
#define REG_SYSJMBC_JMBCLR0OFF_BITS_MASK (1 << 6)
#define REG_SYSJMBC_JMBCLR1OFF_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : SYSJMBI0

// FIELDS FOR REGISTER : SYSJMBI1

// FIELDS FOR REGISTER : SYSJMBO0

// FIELDS FOR REGISTER : SYSJMBO1

// FIELDS FOR REGISTER : SYSBERRIV

// FIELDS FOR REGISTER : SYSUNIV

// FIELDS FOR REGISTER : SYSSNIV

// FIELDS FOR REGISTER : SYSRSTIV




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t sysctl;
   uint32_t sysbslc;
   uint32_t sysjmbc;
   uint32_t sysjmbi0;
   uint32_t sysjmbi1;
   uint32_t sysjmbo0;
   uint32_t sysjmbo1;
   uint32_t sysberriv;
   uint32_t sysuniv;
   uint32_t syssniv;
   uint32_t sysrstiv;
} MSP430_SYS__System_Module_State;




 // Local functions definitions
// REG: SYSCTL
static uint64_t reg_sysctl_read(MSP430_SYS__System_Module_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_SYSCTL_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_sysctl_write(MSP430_SYS__System_Module_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_SYSCTL_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_SYSCTL_SYSRIVECT_BITS_MASK) != ((*reg) & REG_SYSCTL_SYSRIVECT_BITS_MASK)) {
        }

        if ((new_value & REG_SYSCTL_SYSPMMPE_BITS_MASK) != ((*reg) & REG_SYSCTL_SYSPMMPE_BITS_MASK)) {
        }

        if ((new_value & REG_SYSCTL_SYSBSLIND_BITS_MASK) != ((*reg) & REG_SYSCTL_SYSBSLIND_BITS_MASK)) {
        }

        if ((new_value & REG_SYSCTL_SYSJTAGPIN_BITS_MASK) != ((*reg) & REG_SYSCTL_SYSJTAGPIN_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: SYSBSLC
static uint64_t reg_sysbslc_read(MSP430_SYS__System_Module_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_SYSBSLC_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_sysbslc_write(MSP430_SYS__System_Module_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_SYSBSLC_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_SYSBSLC_SYSBSLSIZE0_BITS_MASK) != ((*reg) & REG_SYSBSLC_SYSBSLSIZE0_BITS_MASK)) {
        }

        if ((new_value & REG_SYSBSLC_SYSBSLSIZE1_BITS_MASK) != ((*reg) & REG_SYSBSLC_SYSBSLSIZE1_BITS_MASK)) {
        }

        if ((new_value & REG_SYSBSLC_SYSBSLR_BITS_MASK) != ((*reg) & REG_SYSBSLC_SYSBSLR_BITS_MASK)) {
        }

        if ((new_value & REG_SYSBSLC_SYSBSLOFF_BITS_MASK) != ((*reg) & REG_SYSBSLC_SYSBSLOFF_BITS_MASK)) {
        }

        if ((new_value & REG_SYSBSLC_SYSBSLPE_BITS_MASK) != ((*reg) & REG_SYSBSLC_SYSBSLPE_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: SYSJMBC
static uint64_t reg_sysjmbc_read(MSP430_SYS__System_Module_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_SYSJMBC_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_sysjmbc_write(MSP430_SYS__System_Module_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_SYSJMBC_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_SYSJMBC_JMBIN0FG_BITS_MASK) != ((*reg) & REG_SYSJMBC_JMBIN0FG_BITS_MASK)) {
        }

        if ((new_value & REG_SYSJMBC_JMBIN1FG_BITS_MASK) != ((*reg) & REG_SYSJMBC_JMBIN1FG_BITS_MASK)) {
        }

        if ((new_value & REG_SYSJMBC_JMBOUT0FG_BITS_MASK) != ((*reg) & REG_SYSJMBC_JMBOUT0FG_BITS_MASK)) {
        }

        if ((new_value & REG_SYSJMBC_JMBOUT1FG_BITS_MASK) != ((*reg) & REG_SYSJMBC_JMBOUT1FG_BITS_MASK)) {
        }

        if ((new_value & REG_SYSJMBC_JMBMODE_BITS_MASK) != ((*reg) & REG_SYSJMBC_JMBMODE_BITS_MASK)) {
        }

        if ((new_value & REG_SYSJMBC_JMBCLR0OFF_BITS_MASK) != ((*reg) & REG_SYSJMBC_JMBCLR0OFF_BITS_MASK)) {
        }

        if ((new_value & REG_SYSJMBC_JMBCLR1OFF_BITS_MASK) != ((*reg) & REG_SYSJMBC_JMBCLR1OFF_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: SYSJMBI0
static uint64_t reg_sysjmbi0_read(MSP430_SYS__System_Module_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_SYSJMBI0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_sysjmbi0_write(MSP430_SYS__System_Module_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_SYSJMBI0_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: SYSJMBI1
static uint64_t reg_sysjmbi1_read(MSP430_SYS__System_Module_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_SYSJMBI1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_sysjmbi1_write(MSP430_SYS__System_Module_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_SYSJMBI1_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: SYSJMBO0
static uint64_t reg_sysjmbo0_read(MSP430_SYS__System_Module_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_SYSJMBO0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_sysjmbo0_write(MSP430_SYS__System_Module_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_SYSJMBO0_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: SYSJMBO1
static uint64_t reg_sysjmbo1_read(MSP430_SYS__System_Module_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_SYSJMBO1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_sysjmbo1_write(MSP430_SYS__System_Module_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_SYSJMBO1_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: SYSBERRIV
static uint64_t reg_sysberriv_read(MSP430_SYS__System_Module_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_SYSBERRIV_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_sysberriv_write(MSP430_SYS__System_Module_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_SYSBERRIV_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: SYSUNIV
static uint64_t reg_sysuniv_read(MSP430_SYS__System_Module_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_SYSUNIV_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_sysuniv_write(MSP430_SYS__System_Module_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_SYSUNIV_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: SYSSNIV
static uint64_t reg_syssniv_read(MSP430_SYS__System_Module_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_SYSSNIV_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_syssniv_write(MSP430_SYS__System_Module_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_SYSSNIV_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: SYSRSTIV
static uint64_t reg_sysrstiv_read(MSP430_SYS__System_Module_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_SYSRSTIV_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_sysrstiv_write(MSP430_SYS__System_Module_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_SYSRSTIV_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_SYS__System_Module_State *s = MSP430FR5739_SYS__SYSTEM_MODULE(opaque);
    uint64_t retvalue = 0;

    if ((addr >= SYSCTL) && ((addr + size) <= (SYSCTL + 2))) {
        retvalue = reg_sysctl_read(s, &s->sysctl, (addr - SYSCTL));
    } else if ((addr >= SYSBSLC) && ((addr + size) <= (SYSBSLC + 2))) {
        retvalue = reg_sysbslc_read(s, &s->sysbslc, (addr - SYSBSLC));
    } else if ((addr >= SYSJMBC) && ((addr + size) <= (SYSJMBC + 2))) {
        retvalue = reg_sysjmbc_read(s, &s->sysjmbc, (addr - SYSJMBC));
    } else if ((addr >= SYSJMBI0) && ((addr + size) <= (SYSJMBI0 + 2))) {
        retvalue = reg_sysjmbi0_read(s, &s->sysjmbi0, (addr - SYSJMBI0));
    } else if ((addr >= SYSJMBI1) && ((addr + size) <= (SYSJMBI1 + 2))) {
        retvalue = reg_sysjmbi1_read(s, &s->sysjmbi1, (addr - SYSJMBI1));
    } else if ((addr >= SYSJMBO0) && ((addr + size) <= (SYSJMBO0 + 2))) {
        retvalue = reg_sysjmbo0_read(s, &s->sysjmbo0, (addr - SYSJMBO0));
    } else if ((addr >= SYSJMBO1) && ((addr + size) <= (SYSJMBO1 + 2))) {
        retvalue = reg_sysjmbo1_read(s, &s->sysjmbo1, (addr - SYSJMBO1));
    } else if ((addr >= SYSBERRIV) && ((addr + size) <= (SYSBERRIV + 2))) {
        retvalue = reg_sysberriv_read(s, &s->sysberriv, (addr - SYSBERRIV));
    } else if ((addr >= SYSUNIV) && ((addr + size) <= (SYSUNIV + 2))) {
        retvalue = reg_sysuniv_read(s, &s->sysuniv, (addr - SYSUNIV));
    } else if ((addr >= SYSSNIV) && ((addr + size) <= (SYSSNIV + 2))) {
        retvalue = reg_syssniv_read(s, &s->syssniv, (addr - SYSSNIV));
    } else if ((addr >= SYSRSTIV) && ((addr + size) <= (SYSRSTIV + 2))) {
        retvalue = reg_sysrstiv_read(s, &s->sysrstiv, (addr - SYSRSTIV));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_SYS__System_Module_State *s = MSP430FR5739_SYS__SYSTEM_MODULE(opaque);

    if ((addr >= SYSCTL) && ((addr + size) <= (SYSCTL + 2))) {
        reg_sysctl_write(s, &s->sysctl, (addr - SYSCTL), value, size);
    } else if ((addr >= SYSBSLC) && ((addr + size) <= (SYSBSLC + 2))) {
        reg_sysbslc_write(s, &s->sysbslc, (addr - SYSBSLC), value, size);
    } else if ((addr >= SYSJMBC) && ((addr + size) <= (SYSJMBC + 2))) {
        reg_sysjmbc_write(s, &s->sysjmbc, (addr - SYSJMBC), value, size);
    } else if ((addr >= SYSJMBI0) && ((addr + size) <= (SYSJMBI0 + 2))) {
        reg_sysjmbi0_write(s, &s->sysjmbi0, (addr - SYSJMBI0), value, size);
    } else if ((addr >= SYSJMBI1) && ((addr + size) <= (SYSJMBI1 + 2))) {
        reg_sysjmbi1_write(s, &s->sysjmbi1, (addr - SYSJMBI1), value, size);
    } else if ((addr >= SYSJMBO0) && ((addr + size) <= (SYSJMBO0 + 2))) {
        reg_sysjmbo0_write(s, &s->sysjmbo0, (addr - SYSJMBO0), value, size);
    } else if ((addr >= SYSJMBO1) && ((addr + size) <= (SYSJMBO1 + 2))) {
        reg_sysjmbo1_write(s, &s->sysjmbo1, (addr - SYSJMBO1), value, size);
    } else if ((addr >= SYSBERRIV) && ((addr + size) <= (SYSBERRIV + 2))) {
        reg_sysberriv_write(s, &s->sysberriv, (addr - SYSBERRIV), value, size);
    } else if ((addr >= SYSUNIV) && ((addr + size) <= (SYSUNIV + 2))) {
        reg_sysuniv_write(s, &s->sysuniv, (addr - SYSUNIV), value, size);
    } else if ((addr >= SYSSNIV) && ((addr + size) <= (SYSSNIV + 2))) {
        reg_syssniv_write(s, &s->syssniv, (addr - SYSSNIV), value, size);
    } else if ((addr >= SYSRSTIV) && ((addr + size) <= (SYSRSTIV + 2))) {
        reg_sysrstiv_write(s, &s->sysrstiv, (addr - SYSRSTIV), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_SYS__System_Module_State *device = MSP430FR5739_SYS__SYSTEM_MODULE(dev);

   device->sysctl = 0x0;
   device->sysbslc = 0x0;
   device->sysjmbc = 0x0;
   device->sysjmbi0 = 0;
   device->sysjmbi1 = 0;
   device->sysjmbo0 = 0;
   device->sysjmbo1 = 0;
   device->sysberriv = 0;
   device->sysuniv = 0;
   device->syssniv = 0;
   device->sysrstiv = 0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_SYS__System_Module_State *s = MSP430FR5739_SYS__SYSTEM_MODULE(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_SYS__SYSTEM_MODULE, SIZE);
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
    .name          = TYPE_MSP430FR5739_SYS__SYSTEM_MODULE,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_SYS__System_Module_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_sys__system_module_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_sys__system_module_register_types)
