// Peripheral name: MPU

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_MPU "msp430fr5739_mpu"
#define SIZE 8
#define MSP430FR5739_MPU(obj) OBJECT_CHECK(MSP430_MPU_State, (obj), TYPE_MSP430FR5739_MPU)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x05A0

#define MPUCTL0 0
#define MPUCTL1 2
#define MPUSEG 4
#define MPUSAM 6

// REGISTERS RESET VALUE
#define REG_MPUCTL0_RESET_VALUE 0x0
#define REG_MPUCTL1_RESET_VALUE 0x0
#define REG_MPUSEG_RESET_VALUE 0x0
#define REG_MPUSAM_RESET_VALUE 0x0

// REGISTERS BITS MASKS
#define REG_MPUCTL0_BITS_MASK 0x1
#define REG_MPUCTL1_BITS_MASK 0xf
#define REG_MPUSEG_BITS_MASK 0x1f1f
#define REG_MPUSAM_BITS_MASK 0xffff

// FIELDS FOR REGISTER : MPUCTL0
#define REG_MPUCTL0_MPUENA_BITS_MASK (1 << 0)

// FIELDS FOR REGISTER : MPUCTL1
#define REG_MPUCTL1_MPUSEG1IFG_BITS_MASK (1 << 0)
#define REG_MPUCTL1_MPUSEG2IFG_BITS_MASK (1 << 1)
#define REG_MPUCTL1_MPUSEG3IFG_BITS_MASK (1 << 2)
#define REG_MPUCTL1_MPUSEGIIFG_BITS_MASK (1 << 3)

// FIELDS FOR REGISTER : MPUSEG
#define REG_MPUSEG_MPUSB10_BITS_MASK (1 << 0)
#define REG_MPUSEG_MPUSB11_BITS_MASK (1 << 1)
#define REG_MPUSEG_MPUSB12_BITS_MASK (1 << 2)
#define REG_MPUSEG_MPUSB13_BITS_MASK (1 << 3)
#define REG_MPUSEG_MPUSB14_BITS_MASK (1 << 4)
#define REG_MPUSEG_MPUSB20_BITS_MASK (1 << 8)
#define REG_MPUSEG_MPUSB21_BITS_MASK (1 << 9)
#define REG_MPUSEG_MPUSB22_BITS_MASK (1 << 10)
#define REG_MPUSEG_MPUSB23_BITS_MASK (1 << 11)
#define REG_MPUSEG_MPUSB24_BITS_MASK (1 << 12)

// FIELDS FOR REGISTER : MPUSAM
#define REG_MPUSAM_MPUSEG1RE_BITS_MASK (1 << 0)
#define REG_MPUSAM_MPUSEG1WE_BITS_MASK (1 << 1)
#define REG_MPUSAM_MPUSEG1XE_BITS_MASK (1 << 2)
#define REG_MPUSAM_MPUSEG1VS_BITS_MASK (1 << 3)
#define REG_MPUSAM_MPUSEG2RE_BITS_MASK (1 << 4)
#define REG_MPUSAM_MPUSEG2WE_BITS_MASK (1 << 5)
#define REG_MPUSAM_MPUSEG2XE_BITS_MASK (1 << 6)
#define REG_MPUSAM_MPUSEG2VS_BITS_MASK (1 << 7)
#define REG_MPUSAM_MPUSEG3RE_BITS_MASK (1 << 8)
#define REG_MPUSAM_MPUSEG3WE_BITS_MASK (1 << 9)
#define REG_MPUSAM_MPUSEG3XE_BITS_MASK (1 << 10)
#define REG_MPUSAM_MPUSEG3VS_BITS_MASK (1 << 11)
#define REG_MPUSAM_MPUSEGIRE_BITS_MASK (1 << 12)
#define REG_MPUSAM_MPUSEGIWE_BITS_MASK (1 << 13)
#define REG_MPUSAM_MPUSEGIXE_BITS_MASK (1 << 14)
#define REG_MPUSAM_MPUSEGIVS_BITS_MASK (1 << 15)




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t mpuctl0;
   uint32_t mpuctl1;
   uint32_t mpuseg;
   uint32_t mpusam;
} MSP430_MPU_State;




 // Local functions definitions
// REG: MPUCTL0
static uint64_t reg_mpuctl0_read(MSP430_MPU_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_MPUCTL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_mpuctl0_write(MSP430_MPU_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_MPUCTL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_MPUCTL0_MPUENA_BITS_MASK) != ((*reg) & REG_MPUCTL0_MPUENA_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: MPUCTL1
static uint64_t reg_mpuctl1_read(MSP430_MPU_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_MPUCTL1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_mpuctl1_write(MSP430_MPU_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_MPUCTL1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_MPUCTL1_MPUSEG1IFG_BITS_MASK) != ((*reg) & REG_MPUCTL1_MPUSEG1IFG_BITS_MASK)) {
        }

        if ((new_value & REG_MPUCTL1_MPUSEG2IFG_BITS_MASK) != ((*reg) & REG_MPUCTL1_MPUSEG2IFG_BITS_MASK)) {
        }

        if ((new_value & REG_MPUCTL1_MPUSEG3IFG_BITS_MASK) != ((*reg) & REG_MPUCTL1_MPUSEG3IFG_BITS_MASK)) {
        }

        if ((new_value & REG_MPUCTL1_MPUSEGIIFG_BITS_MASK) != ((*reg) & REG_MPUCTL1_MPUSEGIIFG_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: MPUSEG
static uint64_t reg_mpuseg_read(MSP430_MPU_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_MPUSEG_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_mpuseg_write(MSP430_MPU_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_MPUSEG_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_MPUSEG_MPUSB10_BITS_MASK) != ((*reg) & REG_MPUSEG_MPUSB10_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSEG_MPUSB11_BITS_MASK) != ((*reg) & REG_MPUSEG_MPUSB11_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSEG_MPUSB12_BITS_MASK) != ((*reg) & REG_MPUSEG_MPUSB12_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSEG_MPUSB13_BITS_MASK) != ((*reg) & REG_MPUSEG_MPUSB13_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSEG_MPUSB14_BITS_MASK) != ((*reg) & REG_MPUSEG_MPUSB14_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSEG_MPUSB20_BITS_MASK) != ((*reg) & REG_MPUSEG_MPUSB20_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSEG_MPUSB21_BITS_MASK) != ((*reg) & REG_MPUSEG_MPUSB21_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSEG_MPUSB22_BITS_MASK) != ((*reg) & REG_MPUSEG_MPUSB22_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSEG_MPUSB23_BITS_MASK) != ((*reg) & REG_MPUSEG_MPUSB23_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSEG_MPUSB24_BITS_MASK) != ((*reg) & REG_MPUSEG_MPUSB24_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: MPUSAM
static uint64_t reg_mpusam_read(MSP430_MPU_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_MPUSAM_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_mpusam_write(MSP430_MPU_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_MPUSAM_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_MPUSAM_MPUSEG1RE_BITS_MASK) != ((*reg) & REG_MPUSAM_MPUSEG1RE_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSAM_MPUSEG1WE_BITS_MASK) != ((*reg) & REG_MPUSAM_MPUSEG1WE_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSAM_MPUSEG1XE_BITS_MASK) != ((*reg) & REG_MPUSAM_MPUSEG1XE_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSAM_MPUSEG1VS_BITS_MASK) != ((*reg) & REG_MPUSAM_MPUSEG1VS_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSAM_MPUSEG2RE_BITS_MASK) != ((*reg) & REG_MPUSAM_MPUSEG2RE_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSAM_MPUSEG2WE_BITS_MASK) != ((*reg) & REG_MPUSAM_MPUSEG2WE_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSAM_MPUSEG2XE_BITS_MASK) != ((*reg) & REG_MPUSAM_MPUSEG2XE_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSAM_MPUSEG2VS_BITS_MASK) != ((*reg) & REG_MPUSAM_MPUSEG2VS_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSAM_MPUSEG3RE_BITS_MASK) != ((*reg) & REG_MPUSAM_MPUSEG3RE_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSAM_MPUSEG3WE_BITS_MASK) != ((*reg) & REG_MPUSAM_MPUSEG3WE_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSAM_MPUSEG3XE_BITS_MASK) != ((*reg) & REG_MPUSAM_MPUSEG3XE_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSAM_MPUSEG3VS_BITS_MASK) != ((*reg) & REG_MPUSAM_MPUSEG3VS_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSAM_MPUSEGIRE_BITS_MASK) != ((*reg) & REG_MPUSAM_MPUSEGIRE_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSAM_MPUSEGIWE_BITS_MASK) != ((*reg) & REG_MPUSAM_MPUSEGIWE_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSAM_MPUSEGIXE_BITS_MASK) != ((*reg) & REG_MPUSAM_MPUSEGIXE_BITS_MASK)) {
        }

        if ((new_value & REG_MPUSAM_MPUSEGIVS_BITS_MASK) != ((*reg) & REG_MPUSAM_MPUSEGIVS_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_MPU_State *s = MSP430FR5739_MPU(opaque);
    uint64_t retvalue = 0;

    if ((addr >= MPUCTL0) && ((addr + size) <= (MPUCTL0 + 2))) {
        retvalue = reg_mpuctl0_read(s, &s->mpuctl0, (addr - MPUCTL0));
    } else if ((addr >= MPUCTL1) && ((addr + size) <= (MPUCTL1 + 2))) {
        retvalue = reg_mpuctl1_read(s, &s->mpuctl1, (addr - MPUCTL1));
    } else if ((addr >= MPUSEG) && ((addr + size) <= (MPUSEG + 2))) {
        retvalue = reg_mpuseg_read(s, &s->mpuseg, (addr - MPUSEG));
    } else if ((addr >= MPUSAM) && ((addr + size) <= (MPUSAM + 2))) {
        retvalue = reg_mpusam_read(s, &s->mpusam, (addr - MPUSAM));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_MPU_State *s = MSP430FR5739_MPU(opaque);

    if ((addr >= MPUCTL0) && ((addr + size) <= (MPUCTL0 + 2))) {
        reg_mpuctl0_write(s, &s->mpuctl0, (addr - MPUCTL0), value, size);
    } else if ((addr >= MPUCTL1) && ((addr + size) <= (MPUCTL1 + 2))) {
        reg_mpuctl1_write(s, &s->mpuctl1, (addr - MPUCTL1), value, size);
    } else if ((addr >= MPUSEG) && ((addr + size) <= (MPUSEG + 2))) {
        reg_mpuseg_write(s, &s->mpuseg, (addr - MPUSEG), value, size);
    } else if ((addr >= MPUSAM) && ((addr + size) <= (MPUSAM + 2))) {
        reg_mpusam_write(s, &s->mpusam, (addr - MPUSAM), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_MPU_State *device = MSP430FR5739_MPU(dev);

   device->mpuctl0 = 0x0;
   device->mpuctl1 = 0x0;
   device->mpuseg = 0x0;
   device->mpusam = 0x0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_MPU_State *s = MSP430FR5739_MPU(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_MPU, SIZE);
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
    .name          = TYPE_MSP430FR5739_MPU,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_MPU_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_mpu_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_mpu_register_types)
