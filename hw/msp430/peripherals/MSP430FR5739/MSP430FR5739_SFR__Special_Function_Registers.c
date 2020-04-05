// Peripheral name: SFR__Special_Function_Registers

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_SFR__SPECIAL_FUNCTION_REGISTERS "msp430fr5739_sfr__special_function_registers"
#define SIZE 6
#define MSP430FR5739_SFR__SPECIAL_FUNCTION_REGISTERS(obj) OBJECT_CHECK(MSP430_SFR__Special_Function_Registers_State, (obj), TYPE_MSP430FR5739_SFR__SPECIAL_FUNCTION_REGISTERS)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x0100

#define SFRIE1 0
#define SFRIFG1 2
#define SFRRPCR 4

// REGISTERS RESET VALUE
#define REG_SFRIE1_RESET_VALUE 0x0
#define REG_SFRIFG1_RESET_VALUE 0x0
#define REG_SFRRPCR_RESET_VALUE 0x0

// REGISTERS BITS MASKS
#define REG_SFRIE1_BITS_MASK 0xdb
#define REG_SFRIFG1_BITS_MASK 0xdb
#define REG_SFRRPCR_BITS_MASK 0xf

// FIELDS FOR REGISTER : SFRIE1
#define REG_SFRIE1_WDTIE_BITS_MASK (1 << 0)
#define REG_SFRIE1_OFIE_BITS_MASK (1 << 1)
#define REG_SFRIE1_VMAIE_BITS_MASK (1 << 3)
#define REG_SFRIE1_NMIIE_BITS_MASK (1 << 4)
#define REG_SFRIE1_JMBINIE_BITS_MASK (1 << 6)
#define REG_SFRIE1_JMBOUTIE_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : SFRIFG1
#define REG_SFRIFG1_WDTIFG_BITS_MASK (1 << 0)
#define REG_SFRIFG1_OFIFG_BITS_MASK (1 << 1)
#define REG_SFRIFG1_VMAIFG_BITS_MASK (1 << 3)
#define REG_SFRIFG1_NMIIFG_BITS_MASK (1 << 4)
#define REG_SFRIFG1_JMBINIFG_BITS_MASK (1 << 6)
#define REG_SFRIFG1_JMBOUTIFG_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : SFRRPCR
#define REG_SFRRPCR_SYSNMI_BITS_MASK (1 << 0)
#define REG_SFRRPCR_SYSNMIIES_BITS_MASK (1 << 1)
#define REG_SFRRPCR_SYSRSTUP_BITS_MASK (1 << 2)
#define REG_SFRRPCR_SYSRSTRE_BITS_MASK (1 << 3)




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t sfrie1;
   uint32_t sfrifg1;
   uint32_t sfrrpcr;
} MSP430_SFR__Special_Function_Registers_State;




 // Local functions definitions
// REG: SFRIE1
static uint64_t reg_sfrie1_read(MSP430_SFR__Special_Function_Registers_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_SFRIE1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_sfrie1_write(MSP430_SFR__Special_Function_Registers_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_SFRIE1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_SFRIE1_WDTIE_BITS_MASK) != ((*reg) & REG_SFRIE1_WDTIE_BITS_MASK)) {
        }

        if ((new_value & REG_SFRIE1_OFIE_BITS_MASK) != ((*reg) & REG_SFRIE1_OFIE_BITS_MASK)) {
        }

        if ((new_value & REG_SFRIE1_VMAIE_BITS_MASK) != ((*reg) & REG_SFRIE1_VMAIE_BITS_MASK)) {
        }

        if ((new_value & REG_SFRIE1_NMIIE_BITS_MASK) != ((*reg) & REG_SFRIE1_NMIIE_BITS_MASK)) {
        }

        if ((new_value & REG_SFRIE1_JMBINIE_BITS_MASK) != ((*reg) & REG_SFRIE1_JMBINIE_BITS_MASK)) {
        }

        if ((new_value & REG_SFRIE1_JMBOUTIE_BITS_MASK) != ((*reg) & REG_SFRIE1_JMBOUTIE_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: SFRIFG1
static uint64_t reg_sfrifg1_read(MSP430_SFR__Special_Function_Registers_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_SFRIFG1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_sfrifg1_write(MSP430_SFR__Special_Function_Registers_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_SFRIFG1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_SFRIFG1_WDTIFG_BITS_MASK) != ((*reg) & REG_SFRIFG1_WDTIFG_BITS_MASK)) {
        }

        if ((new_value & REG_SFRIFG1_OFIFG_BITS_MASK) != ((*reg) & REG_SFRIFG1_OFIFG_BITS_MASK)) {
        }

        if ((new_value & REG_SFRIFG1_VMAIFG_BITS_MASK) != ((*reg) & REG_SFRIFG1_VMAIFG_BITS_MASK)) {
        }

        if ((new_value & REG_SFRIFG1_NMIIFG_BITS_MASK) != ((*reg) & REG_SFRIFG1_NMIIFG_BITS_MASK)) {
        }

        if ((new_value & REG_SFRIFG1_JMBINIFG_BITS_MASK) != ((*reg) & REG_SFRIFG1_JMBINIFG_BITS_MASK)) {
        }

        if ((new_value & REG_SFRIFG1_JMBOUTIFG_BITS_MASK) != ((*reg) & REG_SFRIFG1_JMBOUTIFG_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: SFRRPCR
static uint64_t reg_sfrrpcr_read(MSP430_SFR__Special_Function_Registers_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_SFRRPCR_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_sfrrpcr_write(MSP430_SFR__Special_Function_Registers_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_SFRRPCR_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_SFRRPCR_SYSNMI_BITS_MASK) != ((*reg) & REG_SFRRPCR_SYSNMI_BITS_MASK)) {
        }

        if ((new_value & REG_SFRRPCR_SYSNMIIES_BITS_MASK) != ((*reg) & REG_SFRRPCR_SYSNMIIES_BITS_MASK)) {
        }

        if ((new_value & REG_SFRRPCR_SYSRSTUP_BITS_MASK) != ((*reg) & REG_SFRRPCR_SYSRSTUP_BITS_MASK)) {
        }

        if ((new_value & REG_SFRRPCR_SYSRSTRE_BITS_MASK) != ((*reg) & REG_SFRRPCR_SYSRSTRE_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_SFR__Special_Function_Registers_State *s = MSP430FR5739_SFR__SPECIAL_FUNCTION_REGISTERS(opaque);
    uint64_t retvalue = 0;

    if ((addr >= SFRIE1) && ((addr + size) <= (SFRIE1 + 2))) {
        retvalue = reg_sfrie1_read(s, &s->sfrie1, (addr - SFRIE1));
    } else if ((addr >= SFRIFG1) && ((addr + size) <= (SFRIFG1 + 2))) {
        retvalue = reg_sfrifg1_read(s, &s->sfrifg1, (addr - SFRIFG1));
    } else if ((addr >= SFRRPCR) && ((addr + size) <= (SFRRPCR + 2))) {
        retvalue = reg_sfrrpcr_read(s, &s->sfrrpcr, (addr - SFRRPCR));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_SFR__Special_Function_Registers_State *s = MSP430FR5739_SFR__SPECIAL_FUNCTION_REGISTERS(opaque);

    if ((addr >= SFRIE1) && ((addr + size) <= (SFRIE1 + 2))) {
        reg_sfrie1_write(s, &s->sfrie1, (addr - SFRIE1), value, size);
    } else if ((addr >= SFRIFG1) && ((addr + size) <= (SFRIFG1 + 2))) {
        reg_sfrifg1_write(s, &s->sfrifg1, (addr - SFRIFG1), value, size);
    } else if ((addr >= SFRRPCR) && ((addr + size) <= (SFRRPCR + 2))) {
        reg_sfrrpcr_write(s, &s->sfrrpcr, (addr - SFRRPCR), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_SFR__Special_Function_Registers_State *device = MSP430FR5739_SFR__SPECIAL_FUNCTION_REGISTERS(dev);

   device->sfrie1 = 0x0;
   device->sfrifg1 = 0x0;
   device->sfrrpcr = 0x0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_SFR__Special_Function_Registers_State *s = MSP430FR5739_SFR__SPECIAL_FUNCTION_REGISTERS(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_SFR__SPECIAL_FUNCTION_REGISTERS, SIZE);
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
    .name          = TYPE_MSP430FR5739_SFR__SPECIAL_FUNCTION_REGISTERS,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_SFR__Special_Function_Registers_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_sfr__special_function_registers_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_sfr__special_function_registers_register_types)
