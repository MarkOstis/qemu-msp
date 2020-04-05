// Peripheral name: USCI_A1__SPI_Mode

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_USCI_A1__SPI_MODE "msp430fr5739_usci_a1__spi_mode"
#define SIZE 32
#define MSP430FR5739_USCI_A1__SPI_MODE(obj) OBJECT_CHECK(MSP430_USCI_A1__SPI_Mode_State, (obj), TYPE_MSP430FR5739_USCI_A1__SPI_MODE)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x05E0

#define UCA1CTLW0__SPI 0
#define UCA1BRW__SPI 6
#define UCA1STATW__SPI 10
#define UCA1RXBUF__SPI 12
#define UCA1TXBUF__SPI 14
#define UCA1IE__SPI 26
#define UCA1IFG__SPI 28
#define UCA1IV__SPI 30

// REGISTERS RESET VALUE
#define REG_UCA1CTLW0__SPI_RESET_VALUE 0x0
#define REG_UCA1BRW__SPI_RESET_VALUE 0
#define REG_UCA1STATW__SPI_RESET_VALUE 0x0
#define REG_UCA1RXBUF__SPI_RESET_VALUE 0
#define REG_UCA1TXBUF__SPI_RESET_VALUE 0
#define REG_UCA1IE__SPI_RESET_VALUE 0x0
#define REG_UCA1IFG__SPI_RESET_VALUE 0x0
#define REG_UCA1IV__SPI_RESET_VALUE 0

// REGISTERS BITS MASKS
#define REG_UCA1CTLW0__SPI_BITS_MASK 0xffc3
#define REG_UCA1BRW__SPI_BITS_MASK 0xffff
#define REG_UCA1STATW__SPI_BITS_MASK 0xe1
#define REG_UCA1RXBUF__SPI_BITS_MASK 0xffff
#define REG_UCA1TXBUF__SPI_BITS_MASK 0xffff
#define REG_UCA1IE__SPI_BITS_MASK 0x3
#define REG_UCA1IFG__SPI_BITS_MASK 0x3
#define REG_UCA1IV__SPI_BITS_MASK 0xffff

// FIELDS FOR REGISTER : UCA1CTLW0__SPI
#define REG_UCA1CTLW0__SPI_UCSWRST_BITS_MASK (1 << 0)
#define REG_UCA1CTLW0__SPI_UCSTEM_BITS_MASK (1 << 1)
#define REG_UCA1CTLW0__SPI_UCSSEL_BITS_MASK (3 << 6)
#define REG_UCA1CTLW0__SPI_UCSYNC_BITS_MASK (1 << 8)
#define REG_UCA1CTLW0__SPI_UCMODE_BITS_MASK (3 << 9)
#define REG_UCA1CTLW0__SPI_UCMST_BITS_MASK (1 << 11)
#define REG_UCA1CTLW0__SPI_UC7BIT_BITS_MASK (1 << 12)
#define REG_UCA1CTLW0__SPI_UCMSB_BITS_MASK (1 << 13)
#define REG_UCA1CTLW0__SPI_UCCKPL_BITS_MASK (1 << 14)
#define REG_UCA1CTLW0__SPI_UCCKPH_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : UCA1CTL0__SPI

// FIELDS FOR REGISTER : UCA1CTL1__SPI

// FIELDS FOR REGISTER : UCA1BRW__SPI

// FIELDS FOR REGISTER : UCA1BR0__SPI

// FIELDS FOR REGISTER : UCA1BR1__SPI

// FIELDS FOR REGISTER : UCA1STATW__SPI
#define REG_UCA1STATW__SPI_UCBUSY_BITS_MASK (1 << 0)
#define REG_UCA1STATW__SPI_UCOE_BITS_MASK (1 << 5)
#define REG_UCA1STATW__SPI_UCFE_BITS_MASK (1 << 6)
#define REG_UCA1STATW__SPI_UCLISTEN_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : UCA1RXBUF__SPI

// FIELDS FOR REGISTER : UCA1TXBUF__SPI

// FIELDS FOR REGISTER : UCA1IE__SPI
#define REG_UCA1IE__SPI_UCRXIE_BITS_MASK (1 << 0)
#define REG_UCA1IE__SPI_UCTXIE_BITS_MASK (1 << 1)

// FIELDS FOR REGISTER : UCA1IFG__SPI
#define REG_UCA1IFG__SPI_UCRXIFG_BITS_MASK (1 << 0)
#define REG_UCA1IFG__SPI_UCTXIFG_BITS_MASK (1 << 1)

// FIELDS FOR REGISTER : UCA1IV__SPI




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t uca1ctlw0__spi;
   uint32_t uca1brw__spi;
   uint32_t uca1statw__spi;
   uint32_t uca1rxbuf__spi;
   uint32_t uca1txbuf__spi;
   uint32_t uca1ie__spi;
   uint32_t uca1ifg__spi;
   uint32_t uca1iv__spi;
} MSP430_USCI_A1__SPI_Mode_State;




 // Local functions definitions
// REG: UCA1CTLW0__SPI
static uint64_t reg_uca1ctlw0__spi_read(MSP430_USCI_A1__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA1CTLW0__SPI_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca1ctlw0__spi_write(MSP430_USCI_A1__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA1CTLW0__SPI_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA1CTLW0__SPI_UCSWRST_BITS_MASK) != ((*reg) & REG_UCA1CTLW0__SPI_UCSWRST_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1CTLW0__SPI_UCSTEM_BITS_MASK) != ((*reg) & REG_UCA1CTLW0__SPI_UCSTEM_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1CTLW0__SPI_UCSSEL_BITS_MASK) != ((*reg) & REG_UCA1CTLW0__SPI_UCSSEL_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1CTLW0__SPI_UCSYNC_BITS_MASK) != ((*reg) & REG_UCA1CTLW0__SPI_UCSYNC_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1CTLW0__SPI_UCMODE_BITS_MASK) != ((*reg) & REG_UCA1CTLW0__SPI_UCMODE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1CTLW0__SPI_UCMST_BITS_MASK) != ((*reg) & REG_UCA1CTLW0__SPI_UCMST_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1CTLW0__SPI_UC7BIT_BITS_MASK) != ((*reg) & REG_UCA1CTLW0__SPI_UC7BIT_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1CTLW0__SPI_UCMSB_BITS_MASK) != ((*reg) & REG_UCA1CTLW0__SPI_UCMSB_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1CTLW0__SPI_UCCKPL_BITS_MASK) != ((*reg) & REG_UCA1CTLW0__SPI_UCCKPL_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1CTLW0__SPI_UCCKPH_BITS_MASK) != ((*reg) & REG_UCA1CTLW0__SPI_UCCKPH_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA1BRW__SPI
static uint64_t reg_uca1brw__spi_read(MSP430_USCI_A1__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA1BRW__SPI_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca1brw__spi_write(MSP430_USCI_A1__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA1BRW__SPI_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: UCA1STATW__SPI
static uint64_t reg_uca1statw__spi_read(MSP430_USCI_A1__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA1STATW__SPI_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca1statw__spi_write(MSP430_USCI_A1__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA1STATW__SPI_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA1STATW__SPI_UCBUSY_BITS_MASK) != ((*reg) & REG_UCA1STATW__SPI_UCBUSY_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1STATW__SPI_UCOE_BITS_MASK) != ((*reg) & REG_UCA1STATW__SPI_UCOE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1STATW__SPI_UCFE_BITS_MASK) != ((*reg) & REG_UCA1STATW__SPI_UCFE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1STATW__SPI_UCLISTEN_BITS_MASK) != ((*reg) & REG_UCA1STATW__SPI_UCLISTEN_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA1RXBUF__SPI
static uint64_t reg_uca1rxbuf__spi_read(MSP430_USCI_A1__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA1RXBUF__SPI_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca1rxbuf__spi_write(MSP430_USCI_A1__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA1RXBUF__SPI_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: UCA1TXBUF__SPI
static uint64_t reg_uca1txbuf__spi_read(MSP430_USCI_A1__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA1TXBUF__SPI_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca1txbuf__spi_write(MSP430_USCI_A1__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA1TXBUF__SPI_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: UCA1IE__SPI
static uint64_t reg_uca1ie__spi_read(MSP430_USCI_A1__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA1IE__SPI_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca1ie__spi_write(MSP430_USCI_A1__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA1IE__SPI_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA1IE__SPI_UCRXIE_BITS_MASK) != ((*reg) & REG_UCA1IE__SPI_UCRXIE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IE__SPI_UCTXIE_BITS_MASK) != ((*reg) & REG_UCA1IE__SPI_UCTXIE_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA1IFG__SPI
static uint64_t reg_uca1ifg__spi_read(MSP430_USCI_A1__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA1IFG__SPI_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca1ifg__spi_write(MSP430_USCI_A1__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA1IFG__SPI_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA1IFG__SPI_UCRXIFG_BITS_MASK) != ((*reg) & REG_UCA1IFG__SPI_UCRXIFG_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IFG__SPI_UCTXIFG_BITS_MASK) != ((*reg) & REG_UCA1IFG__SPI_UCTXIFG_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA1IV__SPI
static uint64_t reg_uca1iv__spi_read(MSP430_USCI_A1__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA1IV__SPI_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca1iv__spi_write(MSP430_USCI_A1__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA1IV__SPI_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_USCI_A1__SPI_Mode_State *s = MSP430FR5739_USCI_A1__SPI_MODE(opaque);
    uint64_t retvalue = 0;

    if ((addr >= UCA1CTLW0__SPI) && ((addr + size) <= (UCA1CTLW0__SPI + 2))) {
        retvalue = reg_uca1ctlw0__spi_read(s, &s->uca1ctlw0__spi, (addr - UCA1CTLW0__SPI));
    } else if ((addr >= UCA1BRW__SPI) && ((addr + size) <= (UCA1BRW__SPI + 2))) {
        retvalue = reg_uca1brw__spi_read(s, &s->uca1brw__spi, (addr - UCA1BRW__SPI));
    } else if ((addr >= UCA1STATW__SPI) && ((addr + size) <= (UCA1STATW__SPI + 1))) {
        retvalue = reg_uca1statw__spi_read(s, &s->uca1statw__spi, (addr - UCA1STATW__SPI));
    } else if ((addr >= UCA1RXBUF__SPI) && ((addr + size) <= (UCA1RXBUF__SPI + 2))) {
        retvalue = reg_uca1rxbuf__spi_read(s, &s->uca1rxbuf__spi, (addr - UCA1RXBUF__SPI));
    } else if ((addr >= UCA1TXBUF__SPI) && ((addr + size) <= (UCA1TXBUF__SPI + 2))) {
        retvalue = reg_uca1txbuf__spi_read(s, &s->uca1txbuf__spi, (addr - UCA1TXBUF__SPI));
    } else if ((addr >= UCA1IE__SPI) && ((addr + size) <= (UCA1IE__SPI + 1))) {
        retvalue = reg_uca1ie__spi_read(s, &s->uca1ie__spi, (addr - UCA1IE__SPI));
    } else if ((addr >= UCA1IFG__SPI) && ((addr + size) <= (UCA1IFG__SPI + 1))) {
        retvalue = reg_uca1ifg__spi_read(s, &s->uca1ifg__spi, (addr - UCA1IFG__SPI));
    } else if ((addr >= UCA1IV__SPI) && ((addr + size) <= (UCA1IV__SPI + 2))) {
        retvalue = reg_uca1iv__spi_read(s, &s->uca1iv__spi, (addr - UCA1IV__SPI));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_USCI_A1__SPI_Mode_State *s = MSP430FR5739_USCI_A1__SPI_MODE(opaque);

    if ((addr >= UCA1CTLW0__SPI) && ((addr + size) <= (UCA1CTLW0__SPI + 2))) {
        reg_uca1ctlw0__spi_write(s, &s->uca1ctlw0__spi, (addr - UCA1CTLW0__SPI), value, size);
    } else if ((addr >= UCA1BRW__SPI) && ((addr + size) <= (UCA1BRW__SPI + 2))) {
        reg_uca1brw__spi_write(s, &s->uca1brw__spi, (addr - UCA1BRW__SPI), value, size);
    } else if ((addr >= UCA1STATW__SPI) && ((addr + size) <= (UCA1STATW__SPI + 1))) {
        reg_uca1statw__spi_write(s, &s->uca1statw__spi, (addr - UCA1STATW__SPI), value, size);
    } else if ((addr >= UCA1RXBUF__SPI) && ((addr + size) <= (UCA1RXBUF__SPI + 2))) {
        reg_uca1rxbuf__spi_write(s, &s->uca1rxbuf__spi, (addr - UCA1RXBUF__SPI), value, size);
    } else if ((addr >= UCA1TXBUF__SPI) && ((addr + size) <= (UCA1TXBUF__SPI + 2))) {
        reg_uca1txbuf__spi_write(s, &s->uca1txbuf__spi, (addr - UCA1TXBUF__SPI), value, size);
    } else if ((addr >= UCA1IE__SPI) && ((addr + size) <= (UCA1IE__SPI + 1))) {
        reg_uca1ie__spi_write(s, &s->uca1ie__spi, (addr - UCA1IE__SPI), value, size);
    } else if ((addr >= UCA1IFG__SPI) && ((addr + size) <= (UCA1IFG__SPI + 1))) {
        reg_uca1ifg__spi_write(s, &s->uca1ifg__spi, (addr - UCA1IFG__SPI), value, size);
    } else if ((addr >= UCA1IV__SPI) && ((addr + size) <= (UCA1IV__SPI + 2))) {
        reg_uca1iv__spi_write(s, &s->uca1iv__spi, (addr - UCA1IV__SPI), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_USCI_A1__SPI_Mode_State *device = MSP430FR5739_USCI_A1__SPI_MODE(dev);

   device->uca1ctlw0__spi = 0x0;
   device->uca1brw__spi = 0;
   device->uca1statw__spi = 0x0;
   device->uca1rxbuf__spi = 0;
   device->uca1txbuf__spi = 0;
   device->uca1ie__spi = 0x0;
   device->uca1ifg__spi = 0x0;
   device->uca1iv__spi = 0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_USCI_A1__SPI_Mode_State *s = MSP430FR5739_USCI_A1__SPI_MODE(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_USCI_A1__SPI_MODE, SIZE);
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
    .name          = TYPE_MSP430FR5739_USCI_A1__SPI_MODE,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_USCI_A1__SPI_Mode_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_usci_a1__spi_mode_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_usci_a1__spi_mode_register_types)
