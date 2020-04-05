// Peripheral name: CS__Clock_System

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_CS__CLOCK_SYSTEM "msp430fr5739_cs__clock_system"
#define SIZE 14
#define MSP430FR5739_CS__CLOCK_SYSTEM(obj) OBJECT_CHECK(MSP430_CS__Clock_System_State, (obj), TYPE_MSP430FR5739_CS__CLOCK_SYSTEM)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x0160

#define CSCTL0 0
#define CSCTL1 2
#define CSCTL2 4
#define CSCTL3 6
#define CSCTL4 8
#define CSCTL5 10
#define CSCTL6 12

// REGISTERS RESET VALUE
#define REG_CSCTL0_RESET_VALUE 0
#define REG_CSCTL1_RESET_VALUE 0x0
#define REG_CSCTL2_RESET_VALUE 0x0
#define REG_CSCTL3_RESET_VALUE 0x0
#define REG_CSCTL4_RESET_VALUE 0x0
#define REG_CSCTL5_RESET_VALUE 0x0
#define REG_CSCTL6_RESET_VALUE 0x0

// REGISTERS BITS MASKS
#define REG_CSCTL0_BITS_MASK 0xffff
#define REG_CSCTL1_BITS_MASK 0x86
#define REG_CSCTL2_BITS_MASK 0x777
#define REG_CSCTL3_BITS_MASK 0x777
#define REG_CSCTL4_BITS_MASK 0xd1f3
#define REG_CSCTL5_BITS_MASK 0xc3
#define REG_CSCTL6_BITS_MASK 0xf

// FIELDS FOR REGISTER : CSCTL0

// FIELDS FOR REGISTER : CSCTL1
#define REG_CSCTL1_DCOFSEL_BITS_MASK (3 << 1)
#define REG_CSCTL1_DCORSEL_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : CSCTL2
#define REG_CSCTL2_SELM_BITS_MASK (7 << 0)
#define REG_CSCTL2_SELS_BITS_MASK (7 << 4)
#define REG_CSCTL2_SELA_BITS_MASK (7 << 8)

// FIELDS FOR REGISTER : CSCTL3
#define REG_CSCTL3_DIVM_BITS_MASK (7 << 0)
#define REG_CSCTL3_DIVS_BITS_MASK (7 << 4)
#define REG_CSCTL3_DIVA_BITS_MASK (7 << 8)

// FIELDS FOR REGISTER : CSCTL4
#define REG_CSCTL4_XT1OFF_BITS_MASK (1 << 0)
#define REG_CSCTL4_SMCLKOFF_BITS_MASK (1 << 1)
#define REG_CSCTL4_XT1BYPASS_BITS_MASK (1 << 4)
#define REG_CSCTL4_XTS_BITS_MASK (1 << 5)
#define REG_CSCTL4_XT1DRIVE_BITS_MASK (3 << 6)
#define REG_CSCTL4_XT2OFF_BITS_MASK (1 << 8)
#define REG_CSCTL4_XT2BYPASS_BITS_MASK (1 << 12)
#define REG_CSCTL4_XT2DRIVE_BITS_MASK (3 << 14)

// FIELDS FOR REGISTER : CSCTL5
#define REG_CSCTL5_XT1OFFG_BITS_MASK (1 << 0)
#define REG_CSCTL5_XT2OFFG_BITS_MASK (1 << 1)
#define REG_CSCTL5_ENSTFCNT1_BITS_MASK (1 << 6)
#define REG_CSCTL5_ENSTFCNT2_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : CSCTL6
#define REG_CSCTL6_ACLKREQEN_BITS_MASK (1 << 0)
#define REG_CSCTL6_MCLKREQEN_BITS_MASK (1 << 1)
#define REG_CSCTL6_SMCLKREQEN_BITS_MASK (1 << 2)
#define REG_CSCTL6_MODCLKREQEN_BITS_MASK (1 << 3)




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t csctl0;
   uint32_t csctl1;
   uint32_t csctl2;
   uint32_t csctl3;
   uint32_t csctl4;
   uint32_t csctl5;
   uint32_t csctl6;
} MSP430_CS__Clock_System_State;




 // Local functions definitions
// REG: CSCTL0
static uint64_t reg_csctl0_read(MSP430_CS__Clock_System_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_CSCTL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_csctl0_write(MSP430_CS__Clock_System_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_CSCTL0_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: CSCTL1
static uint64_t reg_csctl1_read(MSP430_CS__Clock_System_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_CSCTL1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_csctl1_write(MSP430_CS__Clock_System_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_CSCTL1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_CSCTL1_DCOFSEL_BITS_MASK) != ((*reg) & REG_CSCTL1_DCOFSEL_BITS_MASK)) {
        }

        if ((new_value & REG_CSCTL1_DCORSEL_BITS_MASK) != ((*reg) & REG_CSCTL1_DCORSEL_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: CSCTL2
static uint64_t reg_csctl2_read(MSP430_CS__Clock_System_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_CSCTL2_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_csctl2_write(MSP430_CS__Clock_System_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_CSCTL2_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_CSCTL2_SELM_BITS_MASK) != ((*reg) & REG_CSCTL2_SELM_BITS_MASK)) {
        }

        if ((new_value & REG_CSCTL2_SELS_BITS_MASK) != ((*reg) & REG_CSCTL2_SELS_BITS_MASK)) {
        }

        if ((new_value & REG_CSCTL2_SELA_BITS_MASK) != ((*reg) & REG_CSCTL2_SELA_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: CSCTL3
static uint64_t reg_csctl3_read(MSP430_CS__Clock_System_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_CSCTL3_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_csctl3_write(MSP430_CS__Clock_System_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_CSCTL3_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_CSCTL3_DIVM_BITS_MASK) != ((*reg) & REG_CSCTL3_DIVM_BITS_MASK)) {
        }

        if ((new_value & REG_CSCTL3_DIVS_BITS_MASK) != ((*reg) & REG_CSCTL3_DIVS_BITS_MASK)) {
        }

        if ((new_value & REG_CSCTL3_DIVA_BITS_MASK) != ((*reg) & REG_CSCTL3_DIVA_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: CSCTL4
static uint64_t reg_csctl4_read(MSP430_CS__Clock_System_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_CSCTL4_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_csctl4_write(MSP430_CS__Clock_System_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_CSCTL4_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_CSCTL4_XT1OFF_BITS_MASK) != ((*reg) & REG_CSCTL4_XT1OFF_BITS_MASK)) {
        }

        if ((new_value & REG_CSCTL4_SMCLKOFF_BITS_MASK) != ((*reg) & REG_CSCTL4_SMCLKOFF_BITS_MASK)) {
        }

        if ((new_value & REG_CSCTL4_XT1BYPASS_BITS_MASK) != ((*reg) & REG_CSCTL4_XT1BYPASS_BITS_MASK)) {
        }

        if ((new_value & REG_CSCTL4_XTS_BITS_MASK) != ((*reg) & REG_CSCTL4_XTS_BITS_MASK)) {
        }

        if ((new_value & REG_CSCTL4_XT1DRIVE_BITS_MASK) != ((*reg) & REG_CSCTL4_XT1DRIVE_BITS_MASK)) {
        }

        if ((new_value & REG_CSCTL4_XT2OFF_BITS_MASK) != ((*reg) & REG_CSCTL4_XT2OFF_BITS_MASK)) {
        }

        if ((new_value & REG_CSCTL4_XT2BYPASS_BITS_MASK) != ((*reg) & REG_CSCTL4_XT2BYPASS_BITS_MASK)) {
        }

        if ((new_value & REG_CSCTL4_XT2DRIVE_BITS_MASK) != ((*reg) & REG_CSCTL4_XT2DRIVE_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: CSCTL5
static uint64_t reg_csctl5_read(MSP430_CS__Clock_System_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_CSCTL5_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_csctl5_write(MSP430_CS__Clock_System_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_CSCTL5_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_CSCTL5_XT1OFFG_BITS_MASK) != ((*reg) & REG_CSCTL5_XT1OFFG_BITS_MASK)) {
        }

        if ((new_value & REG_CSCTL5_XT2OFFG_BITS_MASK) != ((*reg) & REG_CSCTL5_XT2OFFG_BITS_MASK)) {
        }

        if ((new_value & REG_CSCTL5_ENSTFCNT1_BITS_MASK) != ((*reg) & REG_CSCTL5_ENSTFCNT1_BITS_MASK)) {
        }

        if ((new_value & REG_CSCTL5_ENSTFCNT2_BITS_MASK) != ((*reg) & REG_CSCTL5_ENSTFCNT2_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: CSCTL6
static uint64_t reg_csctl6_read(MSP430_CS__Clock_System_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_CSCTL6_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_csctl6_write(MSP430_CS__Clock_System_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_CSCTL6_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_CSCTL6_ACLKREQEN_BITS_MASK) != ((*reg) & REG_CSCTL6_ACLKREQEN_BITS_MASK)) {
        }

        if ((new_value & REG_CSCTL6_MCLKREQEN_BITS_MASK) != ((*reg) & REG_CSCTL6_MCLKREQEN_BITS_MASK)) {
        }

        if ((new_value & REG_CSCTL6_SMCLKREQEN_BITS_MASK) != ((*reg) & REG_CSCTL6_SMCLKREQEN_BITS_MASK)) {
        }

        if ((new_value & REG_CSCTL6_MODCLKREQEN_BITS_MASK) != ((*reg) & REG_CSCTL6_MODCLKREQEN_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_CS__Clock_System_State *s = MSP430FR5739_CS__CLOCK_SYSTEM(opaque);
    uint64_t retvalue = 0;

    if ((addr >= CSCTL0) && ((addr + size) <= (CSCTL0 + 2))) {
        retvalue = reg_csctl0_read(s, &s->csctl0, (addr - CSCTL0));
    } else if ((addr >= CSCTL1) && ((addr + size) <= (CSCTL1 + 2))) {
        retvalue = reg_csctl1_read(s, &s->csctl1, (addr - CSCTL1));
    } else if ((addr >= CSCTL2) && ((addr + size) <= (CSCTL2 + 2))) {
        retvalue = reg_csctl2_read(s, &s->csctl2, (addr - CSCTL2));
    } else if ((addr >= CSCTL3) && ((addr + size) <= (CSCTL3 + 2))) {
        retvalue = reg_csctl3_read(s, &s->csctl3, (addr - CSCTL3));
    } else if ((addr >= CSCTL4) && ((addr + size) <= (CSCTL4 + 2))) {
        retvalue = reg_csctl4_read(s, &s->csctl4, (addr - CSCTL4));
    } else if ((addr >= CSCTL5) && ((addr + size) <= (CSCTL5 + 2))) {
        retvalue = reg_csctl5_read(s, &s->csctl5, (addr - CSCTL5));
    } else if ((addr >= CSCTL6) && ((addr + size) <= (CSCTL6 + 2))) {
        retvalue = reg_csctl6_read(s, &s->csctl6, (addr - CSCTL6));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_CS__Clock_System_State *s = MSP430FR5739_CS__CLOCK_SYSTEM(opaque);

    if ((addr >= CSCTL0) && ((addr + size) <= (CSCTL0 + 2))) {
        reg_csctl0_write(s, &s->csctl0, (addr - CSCTL0), value, size);
    } else if ((addr >= CSCTL1) && ((addr + size) <= (CSCTL1 + 2))) {
        reg_csctl1_write(s, &s->csctl1, (addr - CSCTL1), value, size);
    } else if ((addr >= CSCTL2) && ((addr + size) <= (CSCTL2 + 2))) {
        reg_csctl2_write(s, &s->csctl2, (addr - CSCTL2), value, size);
    } else if ((addr >= CSCTL3) && ((addr + size) <= (CSCTL3 + 2))) {
        reg_csctl3_write(s, &s->csctl3, (addr - CSCTL3), value, size);
    } else if ((addr >= CSCTL4) && ((addr + size) <= (CSCTL4 + 2))) {
        reg_csctl4_write(s, &s->csctl4, (addr - CSCTL4), value, size);
    } else if ((addr >= CSCTL5) && ((addr + size) <= (CSCTL5 + 2))) {
        reg_csctl5_write(s, &s->csctl5, (addr - CSCTL5), value, size);
    } else if ((addr >= CSCTL6) && ((addr + size) <= (CSCTL6 + 2))) {
        reg_csctl6_write(s, &s->csctl6, (addr - CSCTL6), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_CS__Clock_System_State *device = MSP430FR5739_CS__CLOCK_SYSTEM(dev);

   device->csctl0 = 0;
   device->csctl1 = 0x0;
   device->csctl2 = 0x0;
   device->csctl3 = 0x0;
   device->csctl4 = 0x0;
   device->csctl5 = 0x0;
   device->csctl6 = 0x0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_CS__Clock_System_State *s = MSP430FR5739_CS__CLOCK_SYSTEM(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_CS__CLOCK_SYSTEM, SIZE);
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
    .name          = TYPE_MSP430FR5739_CS__CLOCK_SYSTEM,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_CS__Clock_System_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_cs__clock_system_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_cs__clock_system_register_types)
