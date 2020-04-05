// Peripheral name: CRC16

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_CRC16 "msp430fr5739_crc16"
#define SIZE 8
#define MSP430FR5739_CRC16(obj) OBJECT_CHECK(MSP430_CRC16_State, (obj), TYPE_MSP430FR5739_CRC16)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x0150

#define CRCDI 0
#define CRCDIRB 2
#define CRCINIRES 4
#define CRCRESR 6

// REGISTERS RESET VALUE
#define REG_CRCDI_RESET_VALUE 0
#define REG_CRCDIRB_RESET_VALUE 0
#define REG_CRCINIRES_RESET_VALUE 0
#define REG_CRCRESR_RESET_VALUE 0

// REGISTERS BITS MASKS
#define REG_CRCDI_BITS_MASK 0xffff
#define REG_CRCDIRB_BITS_MASK 0xffff
#define REG_CRCINIRES_BITS_MASK 0xffff
#define REG_CRCRESR_BITS_MASK 0xffff

// FIELDS FOR REGISTER : CRCDI

// FIELDS FOR REGISTER : CRCDIRB

// FIELDS FOR REGISTER : CRCINIRES

// FIELDS FOR REGISTER : CRCRESR




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t crcdi;
   uint32_t crcdirb;
   uint32_t crcinires;
   uint32_t crcresr;
} MSP430_CRC16_State;




 // Local functions definitions
// REG: CRCDI
static uint64_t reg_crcdi_read(MSP430_CRC16_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_CRCDI_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_crcdi_write(MSP430_CRC16_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_CRCDI_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: CRCDIRB
static uint64_t reg_crcdirb_read(MSP430_CRC16_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_CRCDIRB_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_crcdirb_write(MSP430_CRC16_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_CRCDIRB_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: CRCINIRES
static uint64_t reg_crcinires_read(MSP430_CRC16_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_CRCINIRES_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_crcinires_write(MSP430_CRC16_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_CRCINIRES_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: CRCRESR
static uint64_t reg_crcresr_read(MSP430_CRC16_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_CRCRESR_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_crcresr_write(MSP430_CRC16_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_CRCRESR_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_CRC16_State *s = MSP430FR5739_CRC16(opaque);
    uint64_t retvalue = 0;

    if ((addr >= CRCDI) && ((addr + size) <= (CRCDI + 2))) {
        retvalue = reg_crcdi_read(s, &s->crcdi, (addr - CRCDI));
    } else if ((addr >= CRCDIRB) && ((addr + size) <= (CRCDIRB + 2))) {
        retvalue = reg_crcdirb_read(s, &s->crcdirb, (addr - CRCDIRB));
    } else if ((addr >= CRCINIRES) && ((addr + size) <= (CRCINIRES + 2))) {
        retvalue = reg_crcinires_read(s, &s->crcinires, (addr - CRCINIRES));
    } else if ((addr >= CRCRESR) && ((addr + size) <= (CRCRESR + 2))) {
        retvalue = reg_crcresr_read(s, &s->crcresr, (addr - CRCRESR));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_CRC16_State *s = MSP430FR5739_CRC16(opaque);

    if ((addr >= CRCDI) && ((addr + size) <= (CRCDI + 2))) {
        reg_crcdi_write(s, &s->crcdi, (addr - CRCDI), value, size);
    } else if ((addr >= CRCDIRB) && ((addr + size) <= (CRCDIRB + 2))) {
        reg_crcdirb_write(s, &s->crcdirb, (addr - CRCDIRB), value, size);
    } else if ((addr >= CRCINIRES) && ((addr + size) <= (CRCINIRES + 2))) {
        reg_crcinires_write(s, &s->crcinires, (addr - CRCINIRES), value, size);
    } else if ((addr >= CRCRESR) && ((addr + size) <= (CRCRESR + 2))) {
        reg_crcresr_write(s, &s->crcresr, (addr - CRCRESR), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_CRC16_State *device = MSP430FR5739_CRC16(dev);

   device->crcdi = 0;
   device->crcdirb = 0;
   device->crcinires = 0;
   device->crcresr = 0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_CRC16_State *s = MSP430FR5739_CRC16(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_CRC16, SIZE);
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
    .name          = TYPE_MSP430FR5739_CRC16,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_CRC16_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_crc16_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_crc16_register_types)
