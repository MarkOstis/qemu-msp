// Peripheral name: ADC10_B

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_ADC10_B "msp430fr5739_adc10_b"
#define SIZE 32
#define MSP430FR5739_ADC10_B(obj) OBJECT_CHECK(MSP430_ADC10_B_State, (obj), TYPE_MSP430FR5739_ADC10_B)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x0700

#define ADC10CTL0 0
#define ADC10CTL1 2
#define ADC10CTL2 4
#define ADC10LO 6
#define ADC10HI 8
#define ADC10MCTL0 10
#define ADC10MEM0 18
#define ADC10IE 26
#define ADC10IFG 28
#define ADC10IV 30

// REGISTERS RESET VALUE
#define REG_ADC10CTL0_RESET_VALUE 0x0
#define REG_ADC10CTL1_RESET_VALUE 0x0
#define REG_ADC10CTL2_RESET_VALUE 0x0
#define REG_ADC10LO_RESET_VALUE 0
#define REG_ADC10HI_RESET_VALUE 0
#define REG_ADC10MCTL0_RESET_VALUE 0x0
#define REG_ADC10MEM0_RESET_VALUE 0
#define REG_ADC10IE_RESET_VALUE 0x0
#define REG_ADC10IFG_RESET_VALUE 0x0
#define REG_ADC10IV_RESET_VALUE 0

// REGISTERS BITS MASKS
#define REG_ADC10CTL0_BITS_MASK 0xf93
#define REG_ADC10CTL1_BITS_MASK 0xfff
#define REG_ADC10CTL2_BITS_MASK 0x31d
#define REG_ADC10LO_BITS_MASK 0xffff
#define REG_ADC10HI_BITS_MASK 0xffff
#define REG_ADC10MCTL0_BITS_MASK 0x7f
#define REG_ADC10MEM0_BITS_MASK 0xffff
#define REG_ADC10IE_BITS_MASK 0x3f
#define REG_ADC10IFG_BITS_MASK 0x3f
#define REG_ADC10IV_BITS_MASK 0xffff

// FIELDS FOR REGISTER : ADC10CTL0
#define REG_ADC10CTL0_ADC10SC_BITS_MASK (1 << 0)
#define REG_ADC10CTL0_ADC10ENC_BITS_MASK (1 << 1)
#define REG_ADC10CTL0_ADC10ON_BITS_MASK (1 << 4)
#define REG_ADC10CTL0_ADC10MSC_BITS_MASK (1 << 7)
#define REG_ADC10CTL0_ADC10SHT_BITS_MASK (15 << 8)

// FIELDS FOR REGISTER : ADC10CTL1
#define REG_ADC10CTL1_ADC10BUSY_BITS_MASK (1 << 0)
#define REG_ADC10CTL1_ADC10CONSEQ_BITS_MASK (3 << 1)
#define REG_ADC10CTL1_ADC10SSEL_BITS_MASK (3 << 3)
#define REG_ADC10CTL1_ADC10DIV_BITS_MASK (7 << 5)
#define REG_ADC10CTL1_ADC10ISSH_BITS_MASK (1 << 8)
#define REG_ADC10CTL1_ADC10SHP_BITS_MASK (1 << 9)
#define REG_ADC10CTL1_ADC10SHS_BITS_MASK (3 << 10)

// FIELDS FOR REGISTER : ADC10CTL2
#define REG_ADC10CTL2_ADC10REFBURST_BITS_MASK (1 << 0)
#define REG_ADC10CTL2_ADC10SR_BITS_MASK (1 << 2)
#define REG_ADC10CTL2_ADC10DF_BITS_MASK (1 << 3)
#define REG_ADC10CTL2_ADC10RES_BITS_MASK (1 << 4)
#define REG_ADC10CTL2_ADC10PDIV_BITS_MASK (3 << 8)

// FIELDS FOR REGISTER : ADC10LO

// FIELDS FOR REGISTER : ADC10HI

// FIELDS FOR REGISTER : ADC10MCTL0
#define REG_ADC10MCTL0_ADC10INCH_BITS_MASK (15 << 0)
#define REG_ADC10MCTL0_ADC10SREF_BITS_MASK (7 << 4)

// FIELDS FOR REGISTER : ADC10MEM0

// FIELDS FOR REGISTER : ADC10IE
#define REG_ADC10IE_ADC10IE0_BITS_MASK (1 << 0)
#define REG_ADC10IE_ADC10INIE_BITS_MASK (1 << 1)
#define REG_ADC10IE_ADC10LOIE_BITS_MASK (1 << 2)
#define REG_ADC10IE_ADC10HIIE_BITS_MASK (1 << 3)
#define REG_ADC10IE_ADC10OVIE_BITS_MASK (1 << 4)
#define REG_ADC10IE_ADC10TOVIE_BITS_MASK (1 << 5)

// FIELDS FOR REGISTER : ADC10IFG
#define REG_ADC10IFG_ADC10IFG0_BITS_MASK (1 << 0)
#define REG_ADC10IFG_ADC10INIFG_BITS_MASK (1 << 1)
#define REG_ADC10IFG_ADC10LOIFG_BITS_MASK (1 << 2)
#define REG_ADC10IFG_ADC10HIIFG_BITS_MASK (1 << 3)
#define REG_ADC10IFG_ADC10OVIFG_BITS_MASK (1 << 4)
#define REG_ADC10IFG_ADC10TOVIFG_BITS_MASK (1 << 5)

// FIELDS FOR REGISTER : ADC10IV




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t adc10ctl0;
   uint32_t adc10ctl1;
   uint32_t adc10ctl2;
   uint32_t adc10lo;
   uint32_t adc10hi;
   uint32_t adc10mctl0;
   uint32_t adc10mem0;
   uint32_t adc10ie;
   uint32_t adc10ifg;
   uint32_t adc10iv;
} MSP430_ADC10_B_State;




 // Local functions definitions
// REG: ADC10CTL0
static uint64_t reg_adc10ctl0_read(MSP430_ADC10_B_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_ADC10CTL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_adc10ctl0_write(MSP430_ADC10_B_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_ADC10CTL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_ADC10CTL0_ADC10SC_BITS_MASK) != ((*reg) & REG_ADC10CTL0_ADC10SC_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10CTL0_ADC10ENC_BITS_MASK) != ((*reg) & REG_ADC10CTL0_ADC10ENC_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10CTL0_ADC10ON_BITS_MASK) != ((*reg) & REG_ADC10CTL0_ADC10ON_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10CTL0_ADC10MSC_BITS_MASK) != ((*reg) & REG_ADC10CTL0_ADC10MSC_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10CTL0_ADC10SHT_BITS_MASK) != ((*reg) & REG_ADC10CTL0_ADC10SHT_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: ADC10CTL1
static uint64_t reg_adc10ctl1_read(MSP430_ADC10_B_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_ADC10CTL1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_adc10ctl1_write(MSP430_ADC10_B_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_ADC10CTL1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_ADC10CTL1_ADC10BUSY_BITS_MASK) != ((*reg) & REG_ADC10CTL1_ADC10BUSY_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10CTL1_ADC10CONSEQ_BITS_MASK) != ((*reg) & REG_ADC10CTL1_ADC10CONSEQ_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10CTL1_ADC10SSEL_BITS_MASK) != ((*reg) & REG_ADC10CTL1_ADC10SSEL_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10CTL1_ADC10DIV_BITS_MASK) != ((*reg) & REG_ADC10CTL1_ADC10DIV_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10CTL1_ADC10ISSH_BITS_MASK) != ((*reg) & REG_ADC10CTL1_ADC10ISSH_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10CTL1_ADC10SHP_BITS_MASK) != ((*reg) & REG_ADC10CTL1_ADC10SHP_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10CTL1_ADC10SHS_BITS_MASK) != ((*reg) & REG_ADC10CTL1_ADC10SHS_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: ADC10CTL2
static uint64_t reg_adc10ctl2_read(MSP430_ADC10_B_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_ADC10CTL2_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_adc10ctl2_write(MSP430_ADC10_B_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_ADC10CTL2_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_ADC10CTL2_ADC10REFBURST_BITS_MASK) != ((*reg) & REG_ADC10CTL2_ADC10REFBURST_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10CTL2_ADC10SR_BITS_MASK) != ((*reg) & REG_ADC10CTL2_ADC10SR_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10CTL2_ADC10DF_BITS_MASK) != ((*reg) & REG_ADC10CTL2_ADC10DF_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10CTL2_ADC10RES_BITS_MASK) != ((*reg) & REG_ADC10CTL2_ADC10RES_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10CTL2_ADC10PDIV_BITS_MASK) != ((*reg) & REG_ADC10CTL2_ADC10PDIV_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: ADC10LO
static uint64_t reg_adc10lo_read(MSP430_ADC10_B_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_ADC10LO_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_adc10lo_write(MSP430_ADC10_B_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_ADC10LO_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: ADC10HI
static uint64_t reg_adc10hi_read(MSP430_ADC10_B_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_ADC10HI_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_adc10hi_write(MSP430_ADC10_B_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_ADC10HI_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: ADC10MCTL0
static uint64_t reg_adc10mctl0_read(MSP430_ADC10_B_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_ADC10MCTL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_adc10mctl0_write(MSP430_ADC10_B_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_ADC10MCTL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_ADC10MCTL0_ADC10INCH_BITS_MASK) != ((*reg) & REG_ADC10MCTL0_ADC10INCH_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10MCTL0_ADC10SREF_BITS_MASK) != ((*reg) & REG_ADC10MCTL0_ADC10SREF_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: ADC10MEM0
static uint64_t reg_adc10mem0_read(MSP430_ADC10_B_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_ADC10MEM0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_adc10mem0_write(MSP430_ADC10_B_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_ADC10MEM0_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: ADC10IE
static uint64_t reg_adc10ie_read(MSP430_ADC10_B_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_ADC10IE_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_adc10ie_write(MSP430_ADC10_B_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_ADC10IE_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_ADC10IE_ADC10IE0_BITS_MASK) != ((*reg) & REG_ADC10IE_ADC10IE0_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10IE_ADC10INIE_BITS_MASK) != ((*reg) & REG_ADC10IE_ADC10INIE_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10IE_ADC10LOIE_BITS_MASK) != ((*reg) & REG_ADC10IE_ADC10LOIE_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10IE_ADC10HIIE_BITS_MASK) != ((*reg) & REG_ADC10IE_ADC10HIIE_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10IE_ADC10OVIE_BITS_MASK) != ((*reg) & REG_ADC10IE_ADC10OVIE_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10IE_ADC10TOVIE_BITS_MASK) != ((*reg) & REG_ADC10IE_ADC10TOVIE_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: ADC10IFG
static uint64_t reg_adc10ifg_read(MSP430_ADC10_B_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_ADC10IFG_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_adc10ifg_write(MSP430_ADC10_B_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_ADC10IFG_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_ADC10IFG_ADC10IFG0_BITS_MASK) != ((*reg) & REG_ADC10IFG_ADC10IFG0_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10IFG_ADC10INIFG_BITS_MASK) != ((*reg) & REG_ADC10IFG_ADC10INIFG_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10IFG_ADC10LOIFG_BITS_MASK) != ((*reg) & REG_ADC10IFG_ADC10LOIFG_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10IFG_ADC10HIIFG_BITS_MASK) != ((*reg) & REG_ADC10IFG_ADC10HIIFG_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10IFG_ADC10OVIFG_BITS_MASK) != ((*reg) & REG_ADC10IFG_ADC10OVIFG_BITS_MASK)) {
        }

        if ((new_value & REG_ADC10IFG_ADC10TOVIFG_BITS_MASK) != ((*reg) & REG_ADC10IFG_ADC10TOVIFG_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: ADC10IV
static uint64_t reg_adc10iv_read(MSP430_ADC10_B_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_ADC10IV_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_adc10iv_write(MSP430_ADC10_B_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_ADC10IV_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_ADC10_B_State *s = MSP430FR5739_ADC10_B(opaque);
    uint64_t retvalue = 0;

    if ((addr >= ADC10CTL0) && ((addr + size) <= (ADC10CTL0 + 2))) {
        retvalue = reg_adc10ctl0_read(s, &s->adc10ctl0, (addr - ADC10CTL0));
    } else if ((addr >= ADC10CTL1) && ((addr + size) <= (ADC10CTL1 + 2))) {
        retvalue = reg_adc10ctl1_read(s, &s->adc10ctl1, (addr - ADC10CTL1));
    } else if ((addr >= ADC10CTL2) && ((addr + size) <= (ADC10CTL2 + 2))) {
        retvalue = reg_adc10ctl2_read(s, &s->adc10ctl2, (addr - ADC10CTL2));
    } else if ((addr >= ADC10LO) && ((addr + size) <= (ADC10LO + 2))) {
        retvalue = reg_adc10lo_read(s, &s->adc10lo, (addr - ADC10LO));
    } else if ((addr >= ADC10HI) && ((addr + size) <= (ADC10HI + 2))) {
        retvalue = reg_adc10hi_read(s, &s->adc10hi, (addr - ADC10HI));
    } else if ((addr >= ADC10MCTL0) && ((addr + size) <= (ADC10MCTL0 + 2))) {
        retvalue = reg_adc10mctl0_read(s, &s->adc10mctl0, (addr - ADC10MCTL0));
    } else if ((addr >= ADC10MEM0) && ((addr + size) <= (ADC10MEM0 + 2))) {
        retvalue = reg_adc10mem0_read(s, &s->adc10mem0, (addr - ADC10MEM0));
    } else if ((addr >= ADC10IE) && ((addr + size) <= (ADC10IE + 2))) {
        retvalue = reg_adc10ie_read(s, &s->adc10ie, (addr - ADC10IE));
    } else if ((addr >= ADC10IFG) && ((addr + size) <= (ADC10IFG + 2))) {
        retvalue = reg_adc10ifg_read(s, &s->adc10ifg, (addr - ADC10IFG));
    } else if ((addr >= ADC10IV) && ((addr + size) <= (ADC10IV + 2))) {
        retvalue = reg_adc10iv_read(s, &s->adc10iv, (addr - ADC10IV));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_ADC10_B_State *s = MSP430FR5739_ADC10_B(opaque);

    if ((addr >= ADC10CTL0) && ((addr + size) <= (ADC10CTL0 + 2))) {
        reg_adc10ctl0_write(s, &s->adc10ctl0, (addr - ADC10CTL0), value, size);
    } else if ((addr >= ADC10CTL1) && ((addr + size) <= (ADC10CTL1 + 2))) {
        reg_adc10ctl1_write(s, &s->adc10ctl1, (addr - ADC10CTL1), value, size);
    } else if ((addr >= ADC10CTL2) && ((addr + size) <= (ADC10CTL2 + 2))) {
        reg_adc10ctl2_write(s, &s->adc10ctl2, (addr - ADC10CTL2), value, size);
    } else if ((addr >= ADC10LO) && ((addr + size) <= (ADC10LO + 2))) {
        reg_adc10lo_write(s, &s->adc10lo, (addr - ADC10LO), value, size);
    } else if ((addr >= ADC10HI) && ((addr + size) <= (ADC10HI + 2))) {
        reg_adc10hi_write(s, &s->adc10hi, (addr - ADC10HI), value, size);
    } else if ((addr >= ADC10MCTL0) && ((addr + size) <= (ADC10MCTL0 + 2))) {
        reg_adc10mctl0_write(s, &s->adc10mctl0, (addr - ADC10MCTL0), value, size);
    } else if ((addr >= ADC10MEM0) && ((addr + size) <= (ADC10MEM0 + 2))) {
        reg_adc10mem0_write(s, &s->adc10mem0, (addr - ADC10MEM0), value, size);
    } else if ((addr >= ADC10IE) && ((addr + size) <= (ADC10IE + 2))) {
        reg_adc10ie_write(s, &s->adc10ie, (addr - ADC10IE), value, size);
    } else if ((addr >= ADC10IFG) && ((addr + size) <= (ADC10IFG + 2))) {
        reg_adc10ifg_write(s, &s->adc10ifg, (addr - ADC10IFG), value, size);
    } else if ((addr >= ADC10IV) && ((addr + size) <= (ADC10IV + 2))) {
        reg_adc10iv_write(s, &s->adc10iv, (addr - ADC10IV), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_ADC10_B_State *device = MSP430FR5739_ADC10_B(dev);

   device->adc10ctl0 = 0x0;
   device->adc10ctl1 = 0x0;
   device->adc10ctl2 = 0x0;
   device->adc10lo = 0;
   device->adc10hi = 0;
   device->adc10mctl0 = 0x0;
   device->adc10mem0 = 0;
   device->adc10ie = 0x0;
   device->adc10ifg = 0x0;
   device->adc10iv = 0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_ADC10_B_State *s = MSP430FR5739_ADC10_B(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_ADC10_B, SIZE);
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
    .name          = TYPE_MSP430FR5739_ADC10_B,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_ADC10_B_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_adc10_b_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_adc10_b_register_types)
