// Peripheral name: Shared_Reference

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_SHARED_REFERENCE "msp430fr5739_shared_reference"
#define SIZE 2
#define MSP430FR5739_SHARED_REFERENCE(obj) OBJECT_CHECK(MSP430_Shared_Reference_State, (obj), TYPE_MSP430FR5739_SHARED_REFERENCE)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x01B0

#define REFCTL0 0

// REGISTERS RESET VALUE
#define REG_REFCTL0_RESET_VALUE 0x0

// REGISTERS BITS MASKS
#define REG_REFCTL0_BITS_MASK 0xf39

// FIELDS FOR REGISTER : REFCTL0
#define REG_REFCTL0_REFON_BITS_MASK (1 << 0)
#define REG_REFCTL0_REFTCOFF_BITS_MASK (1 << 3)
#define REG_REFCTL0_REFVSEL_BITS_MASK (3 << 4)
#define REG_REFCTL0_REFGENACT_BITS_MASK (1 << 8)
#define REG_REFCTL0_REFBGACT_BITS_MASK (1 << 9)
#define REG_REFCTL0_REFGENBUSY_BITS_MASK (1 << 10)
#define REG_REFCTL0_BGMODE_BITS_MASK (1 << 11)




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t refctl0;
} MSP430_Shared_Reference_State;




 // Local functions definitions
// REG: REFCTL0
static uint64_t reg_refctl0_read(MSP430_Shared_Reference_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_REFCTL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_refctl0_write(MSP430_Shared_Reference_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_REFCTL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_REFCTL0_REFON_BITS_MASK) != ((*reg) & REG_REFCTL0_REFON_BITS_MASK)) {
        }

        if ((new_value & REG_REFCTL0_REFTCOFF_BITS_MASK) != ((*reg) & REG_REFCTL0_REFTCOFF_BITS_MASK)) {
        }

        if ((new_value & REG_REFCTL0_REFVSEL_BITS_MASK) != ((*reg) & REG_REFCTL0_REFVSEL_BITS_MASK)) {
        }

        if ((new_value & REG_REFCTL0_REFGENACT_BITS_MASK) != ((*reg) & REG_REFCTL0_REFGENACT_BITS_MASK)) {
        }

        if ((new_value & REG_REFCTL0_REFBGACT_BITS_MASK) != ((*reg) & REG_REFCTL0_REFBGACT_BITS_MASK)) {
        }

        if ((new_value & REG_REFCTL0_REFGENBUSY_BITS_MASK) != ((*reg) & REG_REFCTL0_REFGENBUSY_BITS_MASK)) {
        }

        if ((new_value & REG_REFCTL0_BGMODE_BITS_MASK) != ((*reg) & REG_REFCTL0_BGMODE_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_Shared_Reference_State *s = MSP430FR5739_SHARED_REFERENCE(opaque);
    uint64_t retvalue = 0;

    if ((addr >= REFCTL0) && ((addr + size) <= (REFCTL0 + 2))) {
        retvalue = reg_refctl0_read(s, &s->refctl0, (addr - REFCTL0));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_Shared_Reference_State *s = MSP430FR5739_SHARED_REFERENCE(opaque);

    if ((addr >= REFCTL0) && ((addr + size) <= (REFCTL0 + 2))) {
        reg_refctl0_write(s, &s->refctl0, (addr - REFCTL0), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_Shared_Reference_State *device = MSP430FR5739_SHARED_REFERENCE(dev);

   device->refctl0 = 0x0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_Shared_Reference_State *s = MSP430FR5739_SHARED_REFERENCE(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_SHARED_REFERENCE, SIZE);
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
    .name          = TYPE_MSP430FR5739_SHARED_REFERENCE,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_Shared_Reference_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_shared_reference_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_shared_reference_register_types)
