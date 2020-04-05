// Peripheral name: Watchdog_Timer

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_WATCHDOG_TIMER "msp430fr5739_watchdog_timer"
#define SIZE 2
#define MSP430FR5739_WATCHDOG_TIMER(obj) OBJECT_CHECK(MSP430_Watchdog_Timer_State, (obj), TYPE_MSP430FR5739_WATCHDOG_TIMER)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x015C

#define WDTCTL 0

// REGISTERS RESET VALUE
#define REG_WDTCTL_RESET_VALUE 0x0

// REGISTERS BITS MASKS
#define REG_WDTCTL_BITS_MASK 0xff

// FIELDS FOR REGISTER : WDTCTL
#define REG_WDTCTL_WDTIS_BITS_MASK (7 << 0)
#define REG_WDTCTL_WDTCNTCL_BITS_MASK (1 << 3)
#define REG_WDTCTL_WDTTMSEL_BITS_MASK (1 << 4)
#define REG_WDTCTL_WDTSSEL_BITS_MASK (3 << 5)
#define REG_WDTCTL_WDTHOLD_BITS_MASK (1 << 7)




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t wdtctl;
} MSP430_Watchdog_Timer_State;




 // Local functions definitions
// REG: WDTCTL
static uint64_t reg_wdtctl_read(MSP430_Watchdog_Timer_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_WDTCTL_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_wdtctl_write(MSP430_Watchdog_Timer_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_WDTCTL_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_WDTCTL_WDTIS_BITS_MASK) != ((*reg) & REG_WDTCTL_WDTIS_BITS_MASK)) {
        }

        if ((new_value & REG_WDTCTL_WDTCNTCL_BITS_MASK) != ((*reg) & REG_WDTCTL_WDTCNTCL_BITS_MASK)) {
        }

        if ((new_value & REG_WDTCTL_WDTTMSEL_BITS_MASK) != ((*reg) & REG_WDTCTL_WDTTMSEL_BITS_MASK)) {
        }

        if ((new_value & REG_WDTCTL_WDTSSEL_BITS_MASK) != ((*reg) & REG_WDTCTL_WDTSSEL_BITS_MASK)) {
        }

        if ((new_value & REG_WDTCTL_WDTHOLD_BITS_MASK) != ((*reg) & REG_WDTCTL_WDTHOLD_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_Watchdog_Timer_State *s = MSP430FR5739_WATCHDOG_TIMER(opaque);
    uint64_t retvalue = 0;

    if ((addr >= WDTCTL) && ((addr + size) <= (WDTCTL + 2))) {
        retvalue = reg_wdtctl_read(s, &s->wdtctl, (addr - WDTCTL));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_Watchdog_Timer_State *s = MSP430FR5739_WATCHDOG_TIMER(opaque);

    if ((addr >= WDTCTL) && ((addr + size) <= (WDTCTL + 2))) {
        reg_wdtctl_write(s, &s->wdtctl, (addr - WDTCTL), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_Watchdog_Timer_State *device = MSP430FR5739_WATCHDOG_TIMER(dev);

   device->wdtctl = 0x0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_Watchdog_Timer_State *s = MSP430FR5739_WATCHDOG_TIMER(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_WATCHDOG_TIMER, SIZE);
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
    .name          = TYPE_MSP430FR5739_WATCHDOG_TIMER,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_Watchdog_Timer_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_watchdog_timer_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_watchdog_timer_register_types)
