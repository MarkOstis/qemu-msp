// Peripheral name: USCI_A0__SPI_Mode

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_USCI_A0__SPI_MODE "msp430fr5739_usci_a0__spi_mode"
#define SIZE 32
#define MSP430FR5739_USCI_A0__SPI_MODE(obj) OBJECT_CHECK(MSP430_USCI_A0__SPI_Mode_State, (obj), TYPE_MSP430FR5739_USCI_A0__SPI_MODE)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x05C0

#define UCA0CTLW0__SPI 0
#define UCA0BRW__SPI 6
#define UCA0STATW__SPI 10
#define UCA0RXBUF__SPI 12
#define UCA0TXBUF__SPI 14
#define UCA0IE__SPI 26
#define UCA0IFG__SPI 28
#define UCA0IV__SPI 30

// REGISTERS RESET VALUE
#define REG_UCA0CTLW0__SPI_RESET_VALUE 0x0
#define REG_UCA0BRW__SPI_RESET_VALUE 0
#define REG_UCA0STATW__SPI_RESET_VALUE 0x0
#define REG_UCA0RXBUF__SPI_RESET_VALUE 0
#define REG_UCA0TXBUF__SPI_RESET_VALUE 0
#define REG_UCA0IE__SPI_RESET_VALUE 0x0
#define REG_UCA0IFG__SPI_RESET_VALUE 0x0
#define REG_UCA0IV__SPI_RESET_VALUE 0

// REGISTERS BITS MASKS
#define REG_UCA0CTLW0__SPI_BITS_MASK 0xffc3
#define REG_UCA0BRW__SPI_BITS_MASK 0xffff
#define REG_UCA0STATW__SPI_BITS_MASK 0xe1
#define REG_UCA0RXBUF__SPI_BITS_MASK 0xffff
#define REG_UCA0TXBUF__SPI_BITS_MASK 0xffff
#define REG_UCA0IE__SPI_BITS_MASK 0x3
#define REG_UCA0IFG__SPI_BITS_MASK 0x3
#define REG_UCA0IV__SPI_BITS_MASK 0xffff

// FIELDS FOR REGISTER : UCA0CTLW0__SPI
#define REG_UCA0CTLW0__SPI_UCSWRST_BITS_MASK (1 << 0)
#define REG_UCA0CTLW0__SPI_UCSTEM_BITS_MASK (1 << 1)
#define REG_UCA0CTLW0__SPI_UCSSEL_BITS_MASK (3 << 6)
#define REG_UCA0CTLW0__SPI_UCSYNC_BITS_MASK (1 << 8)
#define REG_UCA0CTLW0__SPI_UCMODE_BITS_MASK (3 << 9)
#define REG_UCA0CTLW0__SPI_UCMST_BITS_MASK (1 << 11)
#define REG_UCA0CTLW0__SPI_UC7BIT_BITS_MASK (1 << 12)
#define REG_UCA0CTLW0__SPI_UCMSB_BITS_MASK (1 << 13)
#define REG_UCA0CTLW0__SPI_UCCKPL_BITS_MASK (1 << 14)
#define REG_UCA0CTLW0__SPI_UCCKPH_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : UCA0CTL0__SPI

// FIELDS FOR REGISTER : UCA0CTL1__SPI

// FIELDS FOR REGISTER : UCA0BRW__SPI

// FIELDS FOR REGISTER : UCA0BR0__SPI

// FIELDS FOR REGISTER : UCA0BR1__SPI

// FIELDS FOR REGISTER : UCA0STATW__SPI
#define REG_UCA0STATW__SPI_UCBUSY_BITS_MASK (1 << 0)
#define REG_UCA0STATW__SPI_UCOE_BITS_MASK (1 << 5)
#define REG_UCA0STATW__SPI_UCFE_BITS_MASK (1 << 6)
#define REG_UCA0STATW__SPI_UCLISTEN_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : UCA0RXBUF__SPI

// FIELDS FOR REGISTER : UCA0TXBUF__SPI

// FIELDS FOR REGISTER : UCA0IE__SPI
#define REG_UCA0IE__SPI_UCRXIE_BITS_MASK (1 << 0)
#define REG_UCA0IE__SPI_UCTXIE_BITS_MASK (1 << 1)

// FIELDS FOR REGISTER : UCA0IFG__SPI
#define REG_UCA0IFG__SPI_UCRXIFG_BITS_MASK (1 << 0)
#define REG_UCA0IFG__SPI_UCTXIFG_BITS_MASK (1 << 1)

// FIELDS FOR REGISTER : UCA0IV__SPI




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t uca0ctlw0__spi;
   uint32_t uca0brw__spi;
   uint32_t uca0statw__spi;
   uint32_t uca0rxbuf__spi;
   uint32_t uca0txbuf__spi;
   uint32_t uca0ie__spi;
   uint32_t uca0ifg__spi;
   uint32_t uca0iv__spi;
} MSP430_USCI_A0__SPI_Mode_State;




 // Local functions definitions
// REG: UCA0CTLW0__SPI
static uint64_t reg_uca0ctlw0__spi_read(MSP430_USCI_A0__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA0CTLW0__SPI_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca0ctlw0__spi_write(MSP430_USCI_A0__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA0CTLW0__SPI_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA0CTLW0__SPI_UCSWRST_BITS_MASK) != ((*reg) & REG_UCA0CTLW0__SPI_UCSWRST_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0CTLW0__SPI_UCSTEM_BITS_MASK) != ((*reg) & REG_UCA0CTLW0__SPI_UCSTEM_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0CTLW0__SPI_UCSSEL_BITS_MASK) != ((*reg) & REG_UCA0CTLW0__SPI_UCSSEL_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0CTLW0__SPI_UCSYNC_BITS_MASK) != ((*reg) & REG_UCA0CTLW0__SPI_UCSYNC_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0CTLW0__SPI_UCMODE_BITS_MASK) != ((*reg) & REG_UCA0CTLW0__SPI_UCMODE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0CTLW0__SPI_UCMST_BITS_MASK) != ((*reg) & REG_UCA0CTLW0__SPI_UCMST_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0CTLW0__SPI_UC7BIT_BITS_MASK) != ((*reg) & REG_UCA0CTLW0__SPI_UC7BIT_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0CTLW0__SPI_UCMSB_BITS_MASK) != ((*reg) & REG_UCA0CTLW0__SPI_UCMSB_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0CTLW0__SPI_UCCKPL_BITS_MASK) != ((*reg) & REG_UCA0CTLW0__SPI_UCCKPL_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0CTLW0__SPI_UCCKPH_BITS_MASK) != ((*reg) & REG_UCA0CTLW0__SPI_UCCKPH_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA0BRW__SPI
static uint64_t reg_uca0brw__spi_read(MSP430_USCI_A0__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA0BRW__SPI_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca0brw__spi_write(MSP430_USCI_A0__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA0BRW__SPI_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: UCA0STATW__SPI
static uint64_t reg_uca0statw__spi_read(MSP430_USCI_A0__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA0STATW__SPI_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca0statw__spi_write(MSP430_USCI_A0__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA0STATW__SPI_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA0STATW__SPI_UCBUSY_BITS_MASK) != ((*reg) & REG_UCA0STATW__SPI_UCBUSY_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0STATW__SPI_UCOE_BITS_MASK) != ((*reg) & REG_UCA0STATW__SPI_UCOE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0STATW__SPI_UCFE_BITS_MASK) != ((*reg) & REG_UCA0STATW__SPI_UCFE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0STATW__SPI_UCLISTEN_BITS_MASK) != ((*reg) & REG_UCA0STATW__SPI_UCLISTEN_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA0RXBUF__SPI
static uint64_t reg_uca0rxbuf__spi_read(MSP430_USCI_A0__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA0RXBUF__SPI_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca0rxbuf__spi_write(MSP430_USCI_A0__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA0RXBUF__SPI_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: UCA0TXBUF__SPI
static uint64_t reg_uca0txbuf__spi_read(MSP430_USCI_A0__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA0TXBUF__SPI_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca0txbuf__spi_write(MSP430_USCI_A0__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA0TXBUF__SPI_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: UCA0IE__SPI
static uint64_t reg_uca0ie__spi_read(MSP430_USCI_A0__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA0IE__SPI_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca0ie__spi_write(MSP430_USCI_A0__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA0IE__SPI_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA0IE__SPI_UCRXIE_BITS_MASK) != ((*reg) & REG_UCA0IE__SPI_UCRXIE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IE__SPI_UCTXIE_BITS_MASK) != ((*reg) & REG_UCA0IE__SPI_UCTXIE_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA0IFG__SPI
static uint64_t reg_uca0ifg__spi_read(MSP430_USCI_A0__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA0IFG__SPI_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca0ifg__spi_write(MSP430_USCI_A0__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA0IFG__SPI_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA0IFG__SPI_UCRXIFG_BITS_MASK) != ((*reg) & REG_UCA0IFG__SPI_UCRXIFG_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IFG__SPI_UCTXIFG_BITS_MASK) != ((*reg) & REG_UCA0IFG__SPI_UCTXIFG_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA0IV__SPI
static uint64_t reg_uca0iv__spi_read(MSP430_USCI_A0__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA0IV__SPI_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca0iv__spi_write(MSP430_USCI_A0__SPI_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA0IV__SPI_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_USCI_A0__SPI_Mode_State *s = MSP430FR5739_USCI_A0__SPI_MODE(opaque);
    uint64_t retvalue = 0;

    if ((addr >= UCA0CTLW0__SPI) && ((addr + size) <= (UCA0CTLW0__SPI + 2))) {
        retvalue = reg_uca0ctlw0__spi_read(s, &s->uca0ctlw0__spi, (addr - UCA0CTLW0__SPI));
    } else if ((addr >= UCA0BRW__SPI) && ((addr + size) <= (UCA0BRW__SPI + 2))) {
        retvalue = reg_uca0brw__spi_read(s, &s->uca0brw__spi, (addr - UCA0BRW__SPI));
    } else if ((addr >= UCA0STATW__SPI) && ((addr + size) <= (UCA0STATW__SPI + 1))) {
        retvalue = reg_uca0statw__spi_read(s, &s->uca0statw__spi, (addr - UCA0STATW__SPI));
    } else if ((addr >= UCA0RXBUF__SPI) && ((addr + size) <= (UCA0RXBUF__SPI + 2))) {
        retvalue = reg_uca0rxbuf__spi_read(s, &s->uca0rxbuf__spi, (addr - UCA0RXBUF__SPI));
    } else if ((addr >= UCA0TXBUF__SPI) && ((addr + size) <= (UCA0TXBUF__SPI + 2))) {
        retvalue = reg_uca0txbuf__spi_read(s, &s->uca0txbuf__spi, (addr - UCA0TXBUF__SPI));
    } else if ((addr >= UCA0IE__SPI) && ((addr + size) <= (UCA0IE__SPI + 1))) {
        retvalue = reg_uca0ie__spi_read(s, &s->uca0ie__spi, (addr - UCA0IE__SPI));
    } else if ((addr >= UCA0IFG__SPI) && ((addr + size) <= (UCA0IFG__SPI + 1))) {
        retvalue = reg_uca0ifg__spi_read(s, &s->uca0ifg__spi, (addr - UCA0IFG__SPI));
    } else if ((addr >= UCA0IV__SPI) && ((addr + size) <= (UCA0IV__SPI + 2))) {
        retvalue = reg_uca0iv__spi_read(s, &s->uca0iv__spi, (addr - UCA0IV__SPI));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_USCI_A0__SPI_Mode_State *s = MSP430FR5739_USCI_A0__SPI_MODE(opaque);

    if ((addr >= UCA0CTLW0__SPI) && ((addr + size) <= (UCA0CTLW0__SPI + 2))) {
        reg_uca0ctlw0__spi_write(s, &s->uca0ctlw0__spi, (addr - UCA0CTLW0__SPI), value, size);
    } else if ((addr >= UCA0BRW__SPI) && ((addr + size) <= (UCA0BRW__SPI + 2))) {
        reg_uca0brw__spi_write(s, &s->uca0brw__spi, (addr - UCA0BRW__SPI), value, size);
    } else if ((addr >= UCA0STATW__SPI) && ((addr + size) <= (UCA0STATW__SPI + 1))) {
        reg_uca0statw__spi_write(s, &s->uca0statw__spi, (addr - UCA0STATW__SPI), value, size);
    } else if ((addr >= UCA0RXBUF__SPI) && ((addr + size) <= (UCA0RXBUF__SPI + 2))) {
        reg_uca0rxbuf__spi_write(s, &s->uca0rxbuf__spi, (addr - UCA0RXBUF__SPI), value, size);
    } else if ((addr >= UCA0TXBUF__SPI) && ((addr + size) <= (UCA0TXBUF__SPI + 2))) {
        reg_uca0txbuf__spi_write(s, &s->uca0txbuf__spi, (addr - UCA0TXBUF__SPI), value, size);
    } else if ((addr >= UCA0IE__SPI) && ((addr + size) <= (UCA0IE__SPI + 1))) {
        reg_uca0ie__spi_write(s, &s->uca0ie__spi, (addr - UCA0IE__SPI), value, size);
    } else if ((addr >= UCA0IFG__SPI) && ((addr + size) <= (UCA0IFG__SPI + 1))) {
        reg_uca0ifg__spi_write(s, &s->uca0ifg__spi, (addr - UCA0IFG__SPI), value, size);
    } else if ((addr >= UCA0IV__SPI) && ((addr + size) <= (UCA0IV__SPI + 2))) {
        reg_uca0iv__spi_write(s, &s->uca0iv__spi, (addr - UCA0IV__SPI), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_USCI_A0__SPI_Mode_State *device = MSP430FR5739_USCI_A0__SPI_MODE(dev);

   device->uca0ctlw0__spi = 0x0;
   device->uca0brw__spi = 0;
   device->uca0statw__spi = 0x0;
   device->uca0rxbuf__spi = 0;
   device->uca0txbuf__spi = 0;
   device->uca0ie__spi = 0x0;
   device->uca0ifg__spi = 0x0;
   device->uca0iv__spi = 0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_USCI_A0__SPI_Mode_State *s = MSP430FR5739_USCI_A0__SPI_MODE(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_USCI_A0__SPI_MODE, SIZE);
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
    .name          = TYPE_MSP430FR5739_USCI_A0__SPI_MODE,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_USCI_A0__SPI_Mode_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_usci_a0__spi_mode_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_usci_a0__spi_mode_register_types)
