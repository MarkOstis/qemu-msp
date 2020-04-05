// Peripheral name: FRAM

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_FRAM "msp430fr5739_fram"
#define SIZE 8
#define MSP430FR5739_FRAM(obj) OBJECT_CHECK(MSP430_FRAM_State, (obj), TYPE_MSP430FR5739_FRAM)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x0140

#define FRCTL0 0
#define GCCTL0 4
#define GCCTL1 6

// REGISTERS RESET VALUE
#define REG_FRCTL0_RESET_VALUE 0x0
#define REG_GCCTL0_RESET_VALUE 0x0
#define REG_GCCTL1_RESET_VALUE 0x0

// REGISTERS BITS MASKS
#define REG_FRCTL0_BITS_MASK 0x7f
#define REG_GCCTL0_BITS_MASK 0xf9
#define REG_GCCTL1_BITS_MASK 0xf

// FIELDS FOR REGISTER : FRCTL0
#define REG_FRCTL0_NPRECHG_BITS_MASK (7 << 0)
#define REG_FRCTL0_NAUTO_BITS_MASK (1 << 3)
#define REG_FRCTL0_NACCESS_BITS_MASK (7 << 4)

// FIELDS FOR REGISTER : GCCTL0
#define REG_GCCTL0_BUSY_BITS_MASK (1 << 0)
#define REG_GCCTL0_ACCTEIE_BITS_MASK (1 << 3)
#define REG_GCCTL0_ACCVIE_BITS_MASK (1 << 4)
#define REG_GCCTL0_CBDIE_BITS_MASK (1 << 5)
#define REG_GCCTL0_UBDIE_BITS_MASK (1 << 6)
#define REG_GCCTL0_UBDRSTEN_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : GCCTL1
#define REG_GCCTL1_ACCVIFG_BITS_MASK (1 << 0)
#define REG_GCCTL1_CBDIFG_BITS_MASK (1 << 1)
#define REG_GCCTL1_UBDIFG_BITS_MASK (1 << 2)
#define REG_GCCTL1_ACCTEIFG_BITS_MASK (1 << 3)




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t frctl0;
   uint32_t gcctl0;
   uint32_t gcctl1;
} MSP430_FRAM_State;




 // Local functions definitions
// REG: FRCTL0
static uint64_t reg_frctl0_read(MSP430_FRAM_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_FRCTL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_frctl0_write(MSP430_FRAM_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_FRCTL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_FRCTL0_NPRECHG_BITS_MASK) != ((*reg) & REG_FRCTL0_NPRECHG_BITS_MASK)) {
        }

        if ((new_value & REG_FRCTL0_NAUTO_BITS_MASK) != ((*reg) & REG_FRCTL0_NAUTO_BITS_MASK)) {
        }

        if ((new_value & REG_FRCTL0_NACCESS_BITS_MASK) != ((*reg) & REG_FRCTL0_NACCESS_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: GCCTL0
static uint64_t reg_gcctl0_read(MSP430_FRAM_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_GCCTL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_gcctl0_write(MSP430_FRAM_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_GCCTL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_GCCTL0_BUSY_BITS_MASK) != ((*reg) & REG_GCCTL0_BUSY_BITS_MASK)) {
        }

        if ((new_value & REG_GCCTL0_ACCTEIE_BITS_MASK) != ((*reg) & REG_GCCTL0_ACCTEIE_BITS_MASK)) {
        }

        if ((new_value & REG_GCCTL0_ACCVIE_BITS_MASK) != ((*reg) & REG_GCCTL0_ACCVIE_BITS_MASK)) {
        }

        if ((new_value & REG_GCCTL0_CBDIE_BITS_MASK) != ((*reg) & REG_GCCTL0_CBDIE_BITS_MASK)) {
        }

        if ((new_value & REG_GCCTL0_UBDIE_BITS_MASK) != ((*reg) & REG_GCCTL0_UBDIE_BITS_MASK)) {
        }

        if ((new_value & REG_GCCTL0_UBDRSTEN_BITS_MASK) != ((*reg) & REG_GCCTL0_UBDRSTEN_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: GCCTL1
static uint64_t reg_gcctl1_read(MSP430_FRAM_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_GCCTL1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_gcctl1_write(MSP430_FRAM_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_GCCTL1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_GCCTL1_ACCVIFG_BITS_MASK) != ((*reg) & REG_GCCTL1_ACCVIFG_BITS_MASK)) {
        }

        if ((new_value & REG_GCCTL1_CBDIFG_BITS_MASK) != ((*reg) & REG_GCCTL1_CBDIFG_BITS_MASK)) {
        }

        if ((new_value & REG_GCCTL1_UBDIFG_BITS_MASK) != ((*reg) & REG_GCCTL1_UBDIFG_BITS_MASK)) {
        }

        if ((new_value & REG_GCCTL1_ACCTEIFG_BITS_MASK) != ((*reg) & REG_GCCTL1_ACCTEIFG_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_FRAM_State *s = MSP430FR5739_FRAM(opaque);
    uint64_t retvalue = 0;

    if ((addr >= FRCTL0) && ((addr + size) <= (FRCTL0 + 2))) {
        retvalue = reg_frctl0_read(s, &s->frctl0, (addr - FRCTL0));
    } else if ((addr >= GCCTL0) && ((addr + size) <= (GCCTL0 + 2))) {
        retvalue = reg_gcctl0_read(s, &s->gcctl0, (addr - GCCTL0));
    } else if ((addr >= GCCTL1) && ((addr + size) <= (GCCTL1 + 2))) {
        retvalue = reg_gcctl1_read(s, &s->gcctl1, (addr - GCCTL1));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_FRAM_State *s = MSP430FR5739_FRAM(opaque);

    if ((addr >= FRCTL0) && ((addr + size) <= (FRCTL0 + 2))) {
        reg_frctl0_write(s, &s->frctl0, (addr - FRCTL0), value, size);
    } else if ((addr >= GCCTL0) && ((addr + size) <= (GCCTL0 + 2))) {
        reg_gcctl0_write(s, &s->gcctl0, (addr - GCCTL0), value, size);
    } else if ((addr >= GCCTL1) && ((addr + size) <= (GCCTL1 + 2))) {
        reg_gcctl1_write(s, &s->gcctl1, (addr - GCCTL1), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_FRAM_State *device = MSP430FR5739_FRAM(dev);

   device->frctl0 = 0x0;
   device->gcctl0 = 0x0;
   device->gcctl1 = 0x0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_FRAM_State *s = MSP430FR5739_FRAM(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_FRAM, SIZE);
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
    .name          = TYPE_MSP430FR5739_FRAM,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_FRAM_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_fram_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_fram_register_types)
