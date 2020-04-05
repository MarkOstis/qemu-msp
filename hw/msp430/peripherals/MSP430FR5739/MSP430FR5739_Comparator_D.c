// Peripheral name: Comparator_D

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_COMPARATOR_D "msp430fr5739_comparator_d"
#define SIZE 16
#define MSP430FR5739_COMPARATOR_D(obj) OBJECT_CHECK(MSP430_Comparator_D_State, (obj), TYPE_MSP430FR5739_COMPARATOR_D)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x08C0

#define CDCTL0 0
#define CDCTL1 2
#define CDCTL2 4
#define CDCTL3 6
#define CDINT 12
#define CDIV 14

// REGISTERS RESET VALUE
#define REG_CDCTL0_RESET_VALUE 0x0
#define REG_CDCTL1_RESET_VALUE 0x0
#define REG_CDCTL2_RESET_VALUE 0x0
#define REG_CDCTL3_RESET_VALUE 0x0
#define REG_CDINT_RESET_VALUE 0x0
#define REG_CDIV_RESET_VALUE 0

// REGISTERS BITS MASKS
#define REG_CDCTL0_BITS_MASK 0x8f8f
#define REG_CDCTL1_BITS_MASK 0x1cff
#define REG_CDCTL2_BITS_MASK 0xffff
#define REG_CDCTL3_BITS_MASK 0xffff
#define REG_CDINT_BITS_MASK 0x303
#define REG_CDIV_BITS_MASK 0xffff

// FIELDS FOR REGISTER : CDCTL0
#define REG_CDCTL0_CDIPSEL_BITS_MASK (15 << 0)
#define REG_CDCTL0_CDIPEN_BITS_MASK (1 << 7)
#define REG_CDCTL0_CDIMSEL_BITS_MASK (15 << 8)
#define REG_CDCTL0_CDIMEN_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : CDCTL1
#define REG_CDCTL1_CDOUT_BITS_MASK (1 << 0)
#define REG_CDCTL1_CDOUTPOL_BITS_MASK (1 << 1)
#define REG_CDCTL1_CDF_BITS_MASK (1 << 2)
#define REG_CDCTL1_CDIES_BITS_MASK (1 << 3)
#define REG_CDCTL1_CDSHORT_BITS_MASK (1 << 4)
#define REG_CDCTL1_CDEX_BITS_MASK (1 << 5)
#define REG_CDCTL1_CDFDLY_BITS_MASK (3 << 6)
#define REG_CDCTL1_CDON_BITS_MASK (1 << 10)
#define REG_CDCTL1_CDMRVL_BITS_MASK (1 << 11)
#define REG_CDCTL1_CDMRVS_BITS_MASK (1 << 12)

// FIELDS FOR REGISTER : CDCTL2
#define REG_CDCTL2_CDREF0_BITS_MASK (31 << 0)
#define REG_CDCTL2_CDRSEL_BITS_MASK (1 << 5)
#define REG_CDCTL2_CDRS_BITS_MASK (3 << 6)
#define REG_CDCTL2_CDREF1_BITS_MASK (31 << 8)
#define REG_CDCTL2_CDREFL_BITS_MASK (3 << 13)
#define REG_CDCTL2_CDREFACC_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : CDCTL3
#define REG_CDCTL3_CDPD0_BITS_MASK (1 << 0)
#define REG_CDCTL3_CDPD1_BITS_MASK (1 << 1)
#define REG_CDCTL3_CDPD2_BITS_MASK (1 << 2)
#define REG_CDCTL3_CDPD3_BITS_MASK (1 << 3)
#define REG_CDCTL3_CDPD4_BITS_MASK (1 << 4)
#define REG_CDCTL3_CDPD5_BITS_MASK (1 << 5)
#define REG_CDCTL3_CDPD6_BITS_MASK (1 << 6)
#define REG_CDCTL3_CDPD7_BITS_MASK (1 << 7)
#define REG_CDCTL3_CDPD8_BITS_MASK (1 << 8)
#define REG_CDCTL3_CDPD9_BITS_MASK (1 << 9)
#define REG_CDCTL3_CDPD10_BITS_MASK (1 << 10)
#define REG_CDCTL3_CDPD11_BITS_MASK (1 << 11)
#define REG_CDCTL3_CDPD12_BITS_MASK (1 << 12)
#define REG_CDCTL3_CDPD13_BITS_MASK (1 << 13)
#define REG_CDCTL3_CDPD14_BITS_MASK (1 << 14)
#define REG_CDCTL3_CDPD15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : CDINT
#define REG_CDINT_CDIFG_BITS_MASK (1 << 0)
#define REG_CDINT_CDIIFG_BITS_MASK (1 << 1)
#define REG_CDINT_CDIE_BITS_MASK (1 << 8)
#define REG_CDINT_CDIIE_BITS_MASK (1 << 9)

// FIELDS FOR REGISTER : CDIV




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t cdctl0;
   uint32_t cdctl1;
   uint32_t cdctl2;
   uint32_t cdctl3;
   uint32_t cdint;
   uint32_t cdiv;
} MSP430_Comparator_D_State;




 // Local functions definitions
// REG: CDCTL0
static uint64_t reg_cdctl0_read(MSP430_Comparator_D_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_CDCTL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_cdctl0_write(MSP430_Comparator_D_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_CDCTL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_CDCTL0_CDIPSEL_BITS_MASK) != ((*reg) & REG_CDCTL0_CDIPSEL_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL0_CDIPEN_BITS_MASK) != ((*reg) & REG_CDCTL0_CDIPEN_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL0_CDIMSEL_BITS_MASK) != ((*reg) & REG_CDCTL0_CDIMSEL_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL0_CDIMEN_BITS_MASK) != ((*reg) & REG_CDCTL0_CDIMEN_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: CDCTL1
static uint64_t reg_cdctl1_read(MSP430_Comparator_D_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_CDCTL1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_cdctl1_write(MSP430_Comparator_D_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_CDCTL1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_CDCTL1_CDOUT_BITS_MASK) != ((*reg) & REG_CDCTL1_CDOUT_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL1_CDOUTPOL_BITS_MASK) != ((*reg) & REG_CDCTL1_CDOUTPOL_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL1_CDF_BITS_MASK) != ((*reg) & REG_CDCTL1_CDF_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL1_CDIES_BITS_MASK) != ((*reg) & REG_CDCTL1_CDIES_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL1_CDSHORT_BITS_MASK) != ((*reg) & REG_CDCTL1_CDSHORT_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL1_CDEX_BITS_MASK) != ((*reg) & REG_CDCTL1_CDEX_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL1_CDFDLY_BITS_MASK) != ((*reg) & REG_CDCTL1_CDFDLY_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL1_CDON_BITS_MASK) != ((*reg) & REG_CDCTL1_CDON_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL1_CDMRVL_BITS_MASK) != ((*reg) & REG_CDCTL1_CDMRVL_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL1_CDMRVS_BITS_MASK) != ((*reg) & REG_CDCTL1_CDMRVS_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: CDCTL2
static uint64_t reg_cdctl2_read(MSP430_Comparator_D_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_CDCTL2_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_cdctl2_write(MSP430_Comparator_D_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_CDCTL2_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_CDCTL2_CDREF0_BITS_MASK) != ((*reg) & REG_CDCTL2_CDREF0_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL2_CDRSEL_BITS_MASK) != ((*reg) & REG_CDCTL2_CDRSEL_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL2_CDRS_BITS_MASK) != ((*reg) & REG_CDCTL2_CDRS_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL2_CDREF1_BITS_MASK) != ((*reg) & REG_CDCTL2_CDREF1_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL2_CDREFL_BITS_MASK) != ((*reg) & REG_CDCTL2_CDREFL_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL2_CDREFACC_BITS_MASK) != ((*reg) & REG_CDCTL2_CDREFACC_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: CDCTL3
static uint64_t reg_cdctl3_read(MSP430_Comparator_D_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_CDCTL3_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_cdctl3_write(MSP430_Comparator_D_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_CDCTL3_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_CDCTL3_CDPD0_BITS_MASK) != ((*reg) & REG_CDCTL3_CDPD0_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL3_CDPD1_BITS_MASK) != ((*reg) & REG_CDCTL3_CDPD1_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL3_CDPD2_BITS_MASK) != ((*reg) & REG_CDCTL3_CDPD2_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL3_CDPD3_BITS_MASK) != ((*reg) & REG_CDCTL3_CDPD3_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL3_CDPD4_BITS_MASK) != ((*reg) & REG_CDCTL3_CDPD4_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL3_CDPD5_BITS_MASK) != ((*reg) & REG_CDCTL3_CDPD5_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL3_CDPD6_BITS_MASK) != ((*reg) & REG_CDCTL3_CDPD6_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL3_CDPD7_BITS_MASK) != ((*reg) & REG_CDCTL3_CDPD7_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL3_CDPD8_BITS_MASK) != ((*reg) & REG_CDCTL3_CDPD8_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL3_CDPD9_BITS_MASK) != ((*reg) & REG_CDCTL3_CDPD9_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL3_CDPD10_BITS_MASK) != ((*reg) & REG_CDCTL3_CDPD10_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL3_CDPD11_BITS_MASK) != ((*reg) & REG_CDCTL3_CDPD11_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL3_CDPD12_BITS_MASK) != ((*reg) & REG_CDCTL3_CDPD12_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL3_CDPD13_BITS_MASK) != ((*reg) & REG_CDCTL3_CDPD13_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL3_CDPD14_BITS_MASK) != ((*reg) & REG_CDCTL3_CDPD14_BITS_MASK)) {
        }

        if ((new_value & REG_CDCTL3_CDPD15_BITS_MASK) != ((*reg) & REG_CDCTL3_CDPD15_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: CDINT
static uint64_t reg_cdint_read(MSP430_Comparator_D_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_CDINT_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_cdint_write(MSP430_Comparator_D_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_CDINT_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_CDINT_CDIFG_BITS_MASK) != ((*reg) & REG_CDINT_CDIFG_BITS_MASK)) {
        }

        if ((new_value & REG_CDINT_CDIIFG_BITS_MASK) != ((*reg) & REG_CDINT_CDIIFG_BITS_MASK)) {
        }

        if ((new_value & REG_CDINT_CDIE_BITS_MASK) != ((*reg) & REG_CDINT_CDIE_BITS_MASK)) {
        }

        if ((new_value & REG_CDINT_CDIIE_BITS_MASK) != ((*reg) & REG_CDINT_CDIIE_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: CDIV
static uint64_t reg_cdiv_read(MSP430_Comparator_D_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_CDIV_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_cdiv_write(MSP430_Comparator_D_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_CDIV_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_Comparator_D_State *s = MSP430FR5739_COMPARATOR_D(opaque);
    uint64_t retvalue = 0;

    if ((addr >= CDCTL0) && ((addr + size) <= (CDCTL0 + 2))) {
        retvalue = reg_cdctl0_read(s, &s->cdctl0, (addr - CDCTL0));
    } else if ((addr >= CDCTL1) && ((addr + size) <= (CDCTL1 + 2))) {
        retvalue = reg_cdctl1_read(s, &s->cdctl1, (addr - CDCTL1));
    } else if ((addr >= CDCTL2) && ((addr + size) <= (CDCTL2 + 2))) {
        retvalue = reg_cdctl2_read(s, &s->cdctl2, (addr - CDCTL2));
    } else if ((addr >= CDCTL3) && ((addr + size) <= (CDCTL3 + 2))) {
        retvalue = reg_cdctl3_read(s, &s->cdctl3, (addr - CDCTL3));
    } else if ((addr >= CDINT) && ((addr + size) <= (CDINT + 2))) {
        retvalue = reg_cdint_read(s, &s->cdint, (addr - CDINT));
    } else if ((addr >= CDIV) && ((addr + size) <= (CDIV + 2))) {
        retvalue = reg_cdiv_read(s, &s->cdiv, (addr - CDIV));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_Comparator_D_State *s = MSP430FR5739_COMPARATOR_D(opaque);

    if ((addr >= CDCTL0) && ((addr + size) <= (CDCTL0 + 2))) {
        reg_cdctl0_write(s, &s->cdctl0, (addr - CDCTL0), value, size);
    } else if ((addr >= CDCTL1) && ((addr + size) <= (CDCTL1 + 2))) {
        reg_cdctl1_write(s, &s->cdctl1, (addr - CDCTL1), value, size);
    } else if ((addr >= CDCTL2) && ((addr + size) <= (CDCTL2 + 2))) {
        reg_cdctl2_write(s, &s->cdctl2, (addr - CDCTL2), value, size);
    } else if ((addr >= CDCTL3) && ((addr + size) <= (CDCTL3 + 2))) {
        reg_cdctl3_write(s, &s->cdctl3, (addr - CDCTL3), value, size);
    } else if ((addr >= CDINT) && ((addr + size) <= (CDINT + 2))) {
        reg_cdint_write(s, &s->cdint, (addr - CDINT), value, size);
    } else if ((addr >= CDIV) && ((addr + size) <= (CDIV + 2))) {
        reg_cdiv_write(s, &s->cdiv, (addr - CDIV), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_Comparator_D_State *device = MSP430FR5739_COMPARATOR_D(dev);

   device->cdctl0 = 0x0;
   device->cdctl1 = 0x0;
   device->cdctl2 = 0x0;
   device->cdctl3 = 0x0;
   device->cdint = 0x0;
   device->cdiv = 0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_Comparator_D_State *s = MSP430FR5739_COMPARATOR_D(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_COMPARATOR_D, SIZE);
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
    .name          = TYPE_MSP430FR5739_COMPARATOR_D,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_Comparator_D_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_comparator_d_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_comparator_d_register_types)
