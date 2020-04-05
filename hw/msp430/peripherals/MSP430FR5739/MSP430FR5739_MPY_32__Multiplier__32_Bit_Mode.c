// Peripheral name: MPY_32__Multiplier__32_Bit_Mode

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_MPY_32__MULTIPLIER__32_BIT_MODE "msp430fr5739_mpy_32__multiplier__32_bit_mode"
#define SIZE 28
#define MSP430FR5739_MPY_32__MULTIPLIER__32_BIT_MODE(obj) OBJECT_CHECK(MSP430_MPY_32__Multiplier__32_Bit_Mode_State, (obj), TYPE_MSP430FR5739_MPY_32__MULTIPLIER__32_BIT_MODE)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x04D0

#define MPY32L 0
#define MPY32H 2
#define MPYS32L 4
#define MPYS32H 6
#define MAC32L 8
#define MAC32H 10
#define MACS32L 12
#define MACS32H 14
#define OP2L 16
#define OP2H 18
#define RES0 20
#define RES1 22
#define RES2 24
#define RES3 26

// REGISTERS RESET VALUE
#define REG_MPY32L_RESET_VALUE 0
#define REG_MPY32H_RESET_VALUE 0
#define REG_MPYS32L_RESET_VALUE 0
#define REG_MPYS32H_RESET_VALUE 0
#define REG_MAC32L_RESET_VALUE 0
#define REG_MAC32H_RESET_VALUE 0
#define REG_MACS32L_RESET_VALUE 0
#define REG_MACS32H_RESET_VALUE 0
#define REG_OP2L_RESET_VALUE 0
#define REG_OP2H_RESET_VALUE 0
#define REG_RES0_RESET_VALUE 0
#define REG_RES1_RESET_VALUE 0
#define REG_RES2_RESET_VALUE 0
#define REG_RES3_RESET_VALUE 0

// REGISTERS BITS MASKS
#define REG_MPY32L_BITS_MASK 0xffff
#define REG_MPY32H_BITS_MASK 0xffff
#define REG_MPYS32L_BITS_MASK 0xffff
#define REG_MPYS32H_BITS_MASK 0xffff
#define REG_MAC32L_BITS_MASK 0xffff
#define REG_MAC32H_BITS_MASK 0xffff
#define REG_MACS32L_BITS_MASK 0xffff
#define REG_MACS32H_BITS_MASK 0xffff
#define REG_OP2L_BITS_MASK 0xffff
#define REG_OP2H_BITS_MASK 0xffff
#define REG_RES0_BITS_MASK 0xffff
#define REG_RES1_BITS_MASK 0xffff
#define REG_RES2_BITS_MASK 0xffff
#define REG_RES3_BITS_MASK 0xffff

// FIELDS FOR REGISTER : MPY32L

// FIELDS FOR REGISTER : MPY32H

// FIELDS FOR REGISTER : MPYS32L

// FIELDS FOR REGISTER : MPYS32H

// FIELDS FOR REGISTER : MAC32L

// FIELDS FOR REGISTER : MAC32H

// FIELDS FOR REGISTER : MACS32L

// FIELDS FOR REGISTER : MACS32H

// FIELDS FOR REGISTER : OP2L

// FIELDS FOR REGISTER : OP2H

// FIELDS FOR REGISTER : RES0

// FIELDS FOR REGISTER : RES1

// FIELDS FOR REGISTER : RES2

// FIELDS FOR REGISTER : RES3




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t mpy32l;
   uint32_t mpy32h;
   uint32_t mpys32l;
   uint32_t mpys32h;
   uint32_t mac32l;
   uint32_t mac32h;
   uint32_t macs32l;
   uint32_t macs32h;
   uint32_t op2l;
   uint32_t op2h;
   uint32_t res0;
   uint32_t res1;
   uint32_t res2;
   uint32_t res3;
} MSP430_MPY_32__Multiplier__32_Bit_Mode_State;




 // Local functions definitions
// REG: MPY32L
static uint64_t reg_mpy32l_read(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_MPY32L_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_mpy32l_write(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_MPY32L_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: MPY32H
static uint64_t reg_mpy32h_read(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_MPY32H_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_mpy32h_write(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_MPY32H_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: MPYS32L
static uint64_t reg_mpys32l_read(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_MPYS32L_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_mpys32l_write(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_MPYS32L_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: MPYS32H
static uint64_t reg_mpys32h_read(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_MPYS32H_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_mpys32h_write(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_MPYS32H_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: MAC32L
static uint64_t reg_mac32l_read(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_MAC32L_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_mac32l_write(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_MAC32L_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: MAC32H
static uint64_t reg_mac32h_read(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_MAC32H_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_mac32h_write(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_MAC32H_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: MACS32L
static uint64_t reg_macs32l_read(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_MACS32L_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_macs32l_write(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_MACS32L_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: MACS32H
static uint64_t reg_macs32h_read(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_MACS32H_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_macs32h_write(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_MACS32H_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: OP2L
static uint64_t reg_op2l_read(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_OP2L_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_op2l_write(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_OP2L_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: OP2H
static uint64_t reg_op2h_read(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_OP2H_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_op2h_write(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_OP2H_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: RES0
static uint64_t reg_res0_read(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_RES0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_res0_write(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_RES0_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: RES1
static uint64_t reg_res1_read(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_RES1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_res1_write(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_RES1_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: RES2
static uint64_t reg_res2_read(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_RES2_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_res2_write(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_RES2_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: RES3
static uint64_t reg_res3_read(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_RES3_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_res3_write(MSP430_MPY_32__Multiplier__32_Bit_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_RES3_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_MPY_32__Multiplier__32_Bit_Mode_State *s = MSP430FR5739_MPY_32__MULTIPLIER__32_BIT_MODE(opaque);
    uint64_t retvalue = 0;

    if ((addr >= MPY32L) && ((addr + size) <= (MPY32L + 2))) {
        retvalue = reg_mpy32l_read(s, &s->mpy32l, (addr - MPY32L));
    } else if ((addr >= MPY32H) && ((addr + size) <= (MPY32H + 2))) {
        retvalue = reg_mpy32h_read(s, &s->mpy32h, (addr - MPY32H));
    } else if ((addr >= MPYS32L) && ((addr + size) <= (MPYS32L + 2))) {
        retvalue = reg_mpys32l_read(s, &s->mpys32l, (addr - MPYS32L));
    } else if ((addr >= MPYS32H) && ((addr + size) <= (MPYS32H + 2))) {
        retvalue = reg_mpys32h_read(s, &s->mpys32h, (addr - MPYS32H));
    } else if ((addr >= MAC32L) && ((addr + size) <= (MAC32L + 2))) {
        retvalue = reg_mac32l_read(s, &s->mac32l, (addr - MAC32L));
    } else if ((addr >= MAC32H) && ((addr + size) <= (MAC32H + 2))) {
        retvalue = reg_mac32h_read(s, &s->mac32h, (addr - MAC32H));
    } else if ((addr >= MACS32L) && ((addr + size) <= (MACS32L + 2))) {
        retvalue = reg_macs32l_read(s, &s->macs32l, (addr - MACS32L));
    } else if ((addr >= MACS32H) && ((addr + size) <= (MACS32H + 2))) {
        retvalue = reg_macs32h_read(s, &s->macs32h, (addr - MACS32H));
    } else if ((addr >= OP2L) && ((addr + size) <= (OP2L + 2))) {
        retvalue = reg_op2l_read(s, &s->op2l, (addr - OP2L));
    } else if ((addr >= OP2H) && ((addr + size) <= (OP2H + 2))) {
        retvalue = reg_op2h_read(s, &s->op2h, (addr - OP2H));
    } else if ((addr >= RES0) && ((addr + size) <= (RES0 + 2))) {
        retvalue = reg_res0_read(s, &s->res0, (addr - RES0));
    } else if ((addr >= RES1) && ((addr + size) <= (RES1 + 2))) {
        retvalue = reg_res1_read(s, &s->res1, (addr - RES1));
    } else if ((addr >= RES2) && ((addr + size) <= (RES2 + 2))) {
        retvalue = reg_res2_read(s, &s->res2, (addr - RES2));
    } else if ((addr >= RES3) && ((addr + size) <= (RES3 + 2))) {
        retvalue = reg_res3_read(s, &s->res3, (addr - RES3));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_MPY_32__Multiplier__32_Bit_Mode_State *s = MSP430FR5739_MPY_32__MULTIPLIER__32_BIT_MODE(opaque);

    if ((addr >= MPY32L) && ((addr + size) <= (MPY32L + 2))) {
        reg_mpy32l_write(s, &s->mpy32l, (addr - MPY32L), value, size);
    } else if ((addr >= MPY32H) && ((addr + size) <= (MPY32H + 2))) {
        reg_mpy32h_write(s, &s->mpy32h, (addr - MPY32H), value, size);
    } else if ((addr >= MPYS32L) && ((addr + size) <= (MPYS32L + 2))) {
        reg_mpys32l_write(s, &s->mpys32l, (addr - MPYS32L), value, size);
    } else if ((addr >= MPYS32H) && ((addr + size) <= (MPYS32H + 2))) {
        reg_mpys32h_write(s, &s->mpys32h, (addr - MPYS32H), value, size);
    } else if ((addr >= MAC32L) && ((addr + size) <= (MAC32L + 2))) {
        reg_mac32l_write(s, &s->mac32l, (addr - MAC32L), value, size);
    } else if ((addr >= MAC32H) && ((addr + size) <= (MAC32H + 2))) {
        reg_mac32h_write(s, &s->mac32h, (addr - MAC32H), value, size);
    } else if ((addr >= MACS32L) && ((addr + size) <= (MACS32L + 2))) {
        reg_macs32l_write(s, &s->macs32l, (addr - MACS32L), value, size);
    } else if ((addr >= MACS32H) && ((addr + size) <= (MACS32H + 2))) {
        reg_macs32h_write(s, &s->macs32h, (addr - MACS32H), value, size);
    } else if ((addr >= OP2L) && ((addr + size) <= (OP2L + 2))) {
        reg_op2l_write(s, &s->op2l, (addr - OP2L), value, size);
    } else if ((addr >= OP2H) && ((addr + size) <= (OP2H + 2))) {
        reg_op2h_write(s, &s->op2h, (addr - OP2H), value, size);
    } else if ((addr >= RES0) && ((addr + size) <= (RES0 + 2))) {
        reg_res0_write(s, &s->res0, (addr - RES0), value, size);
    } else if ((addr >= RES1) && ((addr + size) <= (RES1 + 2))) {
        reg_res1_write(s, &s->res1, (addr - RES1), value, size);
    } else if ((addr >= RES2) && ((addr + size) <= (RES2 + 2))) {
        reg_res2_write(s, &s->res2, (addr - RES2), value, size);
    } else if ((addr >= RES3) && ((addr + size) <= (RES3 + 2))) {
        reg_res3_write(s, &s->res3, (addr - RES3), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_MPY_32__Multiplier__32_Bit_Mode_State *device = MSP430FR5739_MPY_32__MULTIPLIER__32_BIT_MODE(dev);

   device->mpy32l = 0;
   device->mpy32h = 0;
   device->mpys32l = 0;
   device->mpys32h = 0;
   device->mac32l = 0;
   device->mac32h = 0;
   device->macs32l = 0;
   device->macs32h = 0;
   device->op2l = 0;
   device->op2h = 0;
   device->res0 = 0;
   device->res1 = 0;
   device->res2 = 0;
   device->res3 = 0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_MPY_32__Multiplier__32_Bit_Mode_State *s = MSP430FR5739_MPY_32__MULTIPLIER__32_BIT_MODE(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_MPY_32__MULTIPLIER__32_BIT_MODE, SIZE);
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
    .name          = TYPE_MSP430FR5739_MPY_32__MULTIPLIER__32_BIT_MODE,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_MPY_32__Multiplier__32_Bit_Mode_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_mpy_32__multiplier__32_bit_mode_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_mpy_32__multiplier__32_bit_mode_register_types)
