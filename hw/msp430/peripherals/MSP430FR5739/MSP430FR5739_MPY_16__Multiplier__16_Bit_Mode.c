// Peripheral name: MPY_16__Multiplier__16_Bit_Mode

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_MPY_16__MULTIPLIER__16_BIT_MODE "msp430fr5739_mpy_16__multiplier__16_bit_mode"
#define SIZE 46
#define MSP430FR5739_MPY_16__MULTIPLIER__16_BIT_MODE(obj) OBJECT_CHECK(MSP430_MPY_16__Multiplier__16_Bit_Mode_State, (obj), TYPE_MSP430FR5739_MPY_16__MULTIPLIER__16_BIT_MODE)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x04C0

#define MPY 0
#define MPYS 2
#define MAC 4
#define MACS 6
#define OP2 8
#define RESLO 10
#define RESHI 12
#define SUMEXT 14
#define MPY32CTL0 44

// REGISTERS RESET VALUE
#define REG_MPY_RESET_VALUE 0
#define REG_MPYS_RESET_VALUE 0
#define REG_MAC_RESET_VALUE 0
#define REG_MACS_RESET_VALUE 0
#define REG_OP2_RESET_VALUE 0
#define REG_RESLO_RESET_VALUE 0
#define REG_RESHI_RESET_VALUE 0
#define REG_SUMEXT_RESET_VALUE 0
#define REG_MPY32CTL0_RESET_VALUE 0x0

// REGISTERS BITS MASKS
#define REG_MPY_BITS_MASK 0xffff
#define REG_MPYS_BITS_MASK 0xffff
#define REG_MAC_BITS_MASK 0xffff
#define REG_MACS_BITS_MASK 0xffff
#define REG_OP2_BITS_MASK 0xffff
#define REG_RESLO_BITS_MASK 0xffff
#define REG_RESHI_BITS_MASK 0xffff
#define REG_SUMEXT_BITS_MASK 0xffff
#define REG_MPY32CTL0_BITS_MASK 0x3fd

// FIELDS FOR REGISTER : MPY

// FIELDS FOR REGISTER : MPYS

// FIELDS FOR REGISTER : MAC

// FIELDS FOR REGISTER : MACS

// FIELDS FOR REGISTER : OP2

// FIELDS FOR REGISTER : RESLO

// FIELDS FOR REGISTER : RESHI

// FIELDS FOR REGISTER : SUMEXT

// FIELDS FOR REGISTER : MPY32CTL0
#define REG_MPY32CTL0_MPYC_BITS_MASK (1 << 0)
#define REG_MPY32CTL0_MPYFRAC_BITS_MASK (1 << 2)
#define REG_MPY32CTL0_MPYSAT_BITS_MASK (1 << 3)
#define REG_MPY32CTL0_MPYM_BITS_MASK (3 << 4)
#define REG_MPY32CTL0_OP1_32_BITS_MASK (1 << 6)
#define REG_MPY32CTL0_OP2_32_BITS_MASK (1 << 7)
#define REG_MPY32CTL0_MPYDLYWRTEN_BITS_MASK (1 << 8)
#define REG_MPY32CTL0_MPYDLY32_BITS_MASK (1 << 9)




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t mpy;
   uint32_t mpys;
   uint32_t mac;
   uint32_t macs;
   uint32_t op2;
   uint32_t reslo;
   uint32_t reshi;
   uint32_t sumext;
   uint32_t mpy32ctl0;
} MSP430_MPY_16__Multiplier__16_Bit_Mode_State;




 // Local functions definitions
// REG: MPY
static uint64_t reg_mpy_read(MSP430_MPY_16__Multiplier__16_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_MPY_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_mpy_write(MSP430_MPY_16__Multiplier__16_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_MPY_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: MPYS
static uint64_t reg_mpys_read(MSP430_MPY_16__Multiplier__16_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_MPYS_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_mpys_write(MSP430_MPY_16__Multiplier__16_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_MPYS_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: MAC
static uint64_t reg_mac_read(MSP430_MPY_16__Multiplier__16_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_MAC_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_mac_write(MSP430_MPY_16__Multiplier__16_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_MAC_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: MACS
static uint64_t reg_macs_read(MSP430_MPY_16__Multiplier__16_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_MACS_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_macs_write(MSP430_MPY_16__Multiplier__16_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_MACS_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: OP2
static uint64_t reg_op2_read(MSP430_MPY_16__Multiplier__16_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_OP2_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_op2_write(MSP430_MPY_16__Multiplier__16_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_OP2_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: RESLO
static uint64_t reg_reslo_read(MSP430_MPY_16__Multiplier__16_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_RESLO_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_reslo_write(MSP430_MPY_16__Multiplier__16_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_RESLO_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: RESHI
static uint64_t reg_reshi_read(MSP430_MPY_16__Multiplier__16_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_RESHI_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_reshi_write(MSP430_MPY_16__Multiplier__16_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_RESHI_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: SUMEXT
static uint64_t reg_sumext_read(MSP430_MPY_16__Multiplier__16_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_SUMEXT_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_sumext_write(MSP430_MPY_16__Multiplier__16_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_SUMEXT_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: MPY32CTL0
static uint64_t reg_mpy32ctl0_read(MSP430_MPY_16__Multiplier__16_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_MPY32CTL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_mpy32ctl0_write(MSP430_MPY_16__Multiplier__16_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_MPY32CTL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_MPY32CTL0_MPYC_BITS_MASK) != ((*reg) & REG_MPY32CTL0_MPYC_BITS_MASK)) {
        }

        if ((new_value & REG_MPY32CTL0_MPYFRAC_BITS_MASK) != ((*reg) & REG_MPY32CTL0_MPYFRAC_BITS_MASK)) {
        }

        if ((new_value & REG_MPY32CTL0_MPYSAT_BITS_MASK) != ((*reg) & REG_MPY32CTL0_MPYSAT_BITS_MASK)) {
        }

        if ((new_value & REG_MPY32CTL0_MPYM_BITS_MASK) != ((*reg) & REG_MPY32CTL0_MPYM_BITS_MASK)) {
        }

        if ((new_value & REG_MPY32CTL0_OP1_32_BITS_MASK) != ((*reg) & REG_MPY32CTL0_OP1_32_BITS_MASK)) {
        }

        if ((new_value & REG_MPY32CTL0_OP2_32_BITS_MASK) != ((*reg) & REG_MPY32CTL0_OP2_32_BITS_MASK)) {
        }

        if ((new_value & REG_MPY32CTL0_MPYDLYWRTEN_BITS_MASK) != ((*reg) & REG_MPY32CTL0_MPYDLYWRTEN_BITS_MASK)) {
        }

        if ((new_value & REG_MPY32CTL0_MPYDLY32_BITS_MASK) != ((*reg) & REG_MPY32CTL0_MPYDLY32_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_MPY_16__Multiplier__16_Bit_Mode_State *s = MSP430FR5739_MPY_16__MULTIPLIER__16_BIT_MODE(opaque);
    uint64_t retvalue = 0;

    if ((addr >= MPY) && ((addr + size) <= (MPY + 2))) {
        retvalue = reg_mpy_read(s, &s->mpy, (addr - MPY));
    } else if ((addr >= MPYS) && ((addr + size) <= (MPYS + 2))) {
        retvalue = reg_mpys_read(s, &s->mpys, (addr - MPYS));
    } else if ((addr >= MAC) && ((addr + size) <= (MAC + 2))) {
        retvalue = reg_mac_read(s, &s->mac, (addr - MAC));
    } else if ((addr >= MACS) && ((addr + size) <= (MACS + 2))) {
        retvalue = reg_macs_read(s, &s->macs, (addr - MACS));
    } else if ((addr >= OP2) && ((addr + size) <= (OP2 + 2))) {
        retvalue = reg_op2_read(s, &s->op2, (addr - OP2));
    } else if ((addr >= RESLO) && ((addr + size) <= (RESLO + 2))) {
        retvalue = reg_reslo_read(s, &s->reslo, (addr - RESLO));
    } else if ((addr >= RESHI) && ((addr + size) <= (RESHI + 2))) {
        retvalue = reg_reshi_read(s, &s->reshi, (addr - RESHI));
    } else if ((addr >= SUMEXT) && ((addr + size) <= (SUMEXT + 2))) {
        retvalue = reg_sumext_read(s, &s->sumext, (addr - SUMEXT));
    } else if ((addr >= MPY32CTL0) && ((addr + size) <= (MPY32CTL0 + 2))) {
        retvalue = reg_mpy32ctl0_read(s, &s->mpy32ctl0, (addr - MPY32CTL0));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_MPY_16__Multiplier__16_Bit_Mode_State *s = MSP430FR5739_MPY_16__MULTIPLIER__16_BIT_MODE(opaque);

    if ((addr >= MPY) && ((addr + size) <= (MPY + 2))) {
        reg_mpy_write(s, &s->mpy, (addr - MPY), value, size);
    } else if ((addr >= MPYS) && ((addr + size) <= (MPYS + 2))) {
        reg_mpys_write(s, &s->mpys, (addr - MPYS), value, size);
    } else if ((addr >= MAC) && ((addr + size) <= (MAC + 2))) {
        reg_mac_write(s, &s->mac, (addr - MAC), value, size);
    } else if ((addr >= MACS) && ((addr + size) <= (MACS + 2))) {
        reg_macs_write(s, &s->macs, (addr - MACS), value, size);
    } else if ((addr >= OP2) && ((addr + size) <= (OP2 + 2))) {
        reg_op2_write(s, &s->op2, (addr - OP2), value, size);
    } else if ((addr >= RESLO) && ((addr + size) <= (RESLO + 2))) {
        reg_reslo_write(s, &s->reslo, (addr - RESLO), value, size);
    } else if ((addr >= RESHI) && ((addr + size) <= (RESHI + 2))) {
        reg_reshi_write(s, &s->reshi, (addr - RESHI), value, size);
    } else if ((addr >= SUMEXT) && ((addr + size) <= (SUMEXT + 2))) {
        reg_sumext_write(s, &s->sumext, (addr - SUMEXT), value, size);
    } else if ((addr >= MPY32CTL0) && ((addr + size) <= (MPY32CTL0 + 2))) {
        reg_mpy32ctl0_write(s, &s->mpy32ctl0, (addr - MPY32CTL0), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_MPY_16__Multiplier__16_Bit_Mode_State *device = MSP430FR5739_MPY_16__MULTIPLIER__16_BIT_MODE(dev);

   device->mpy = 0;
   device->mpys = 0;
   device->mac = 0;
   device->macs = 0;
   device->op2 = 0;
   device->reslo = 0;
   device->reshi = 0;
   device->sumext = 0;
   device->mpy32ctl0 = 0x0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_MPY_16__Multiplier__16_Bit_Mode_State *s = MSP430FR5739_MPY_16__MULTIPLIER__16_BIT_MODE(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_MPY_16__MULTIPLIER__16_BIT_MODE, SIZE);
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
    .name          = TYPE_MSP430FR5739_MPY_16__MULTIPLIER__16_BIT_MODE,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_MPY_16__Multiplier__16_Bit_Mode_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_mpy_16__multiplier__16_bit_mode_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_mpy_16__multiplier__16_bit_mode_register_types)
