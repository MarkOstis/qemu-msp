// Peripheral name: Port_J

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_PORT_J "msp430fr5739_port_j"
#define SIZE 24
#define MSP430FR5739_PORT_J(obj) OBJECT_CHECK(MSP430_Port_J_State, (obj), TYPE_MSP430FR5739_PORT_J)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x0320

#define PJIN 0
#define PJOUT 2
#define PJDIR 4
#define PJREN 6
#define PJSEL0 10
#define PJSEL1 12
#define PJSELC 22

// REGISTERS RESET VALUE
#define REG_PJIN_RESET_VALUE 0x0
#define REG_PJOUT_RESET_VALUE 0x0
#define REG_PJDIR_RESET_VALUE 0x0
#define REG_PJREN_RESET_VALUE 0x0
#define REG_PJSEL0_RESET_VALUE 0x0
#define REG_PJSEL1_RESET_VALUE 0x0
#define REG_PJSELC_RESET_VALUE 0

// REGISTERS BITS MASKS
#define REG_PJIN_BITS_MASK 0x3f
#define REG_PJOUT_BITS_MASK 0x3f
#define REG_PJDIR_BITS_MASK 0x3f
#define REG_PJREN_BITS_MASK 0x3f
#define REG_PJSEL0_BITS_MASK 0x3f
#define REG_PJSEL1_BITS_MASK 0x3f
#define REG_PJSELC_BITS_MASK 0xffff

// FIELDS FOR REGISTER : PJIN
#define REG_PJIN_PJIN0_BITS_MASK (1 << 0)
#define REG_PJIN_PJIN1_BITS_MASK (1 << 1)
#define REG_PJIN_PJIN2_BITS_MASK (1 << 2)
#define REG_PJIN_PJIN3_BITS_MASK (1 << 3)
#define REG_PJIN_PJIN4_BITS_MASK (1 << 4)
#define REG_PJIN_PJIN5_BITS_MASK (1 << 5)

// FIELDS FOR REGISTER : PJOUT
#define REG_PJOUT_PJOUT0_BITS_MASK (1 << 0)
#define REG_PJOUT_PJOUT1_BITS_MASK (1 << 1)
#define REG_PJOUT_PJOUT2_BITS_MASK (1 << 2)
#define REG_PJOUT_PJOUT3_BITS_MASK (1 << 3)
#define REG_PJOUT_PJOUT4_BITS_MASK (1 << 4)
#define REG_PJOUT_PJOUT5_BITS_MASK (1 << 5)

// FIELDS FOR REGISTER : PJDIR
#define REG_PJDIR_PJDIR0_BITS_MASK (1 << 0)
#define REG_PJDIR_PJDIR1_BITS_MASK (1 << 1)
#define REG_PJDIR_PJDIR2_BITS_MASK (1 << 2)
#define REG_PJDIR_PJDIR3_BITS_MASK (1 << 3)
#define REG_PJDIR_PJDIR4_BITS_MASK (1 << 4)
#define REG_PJDIR_PJDIR5_BITS_MASK (1 << 5)

// FIELDS FOR REGISTER : PJREN
#define REG_PJREN_PJREN0_BITS_MASK (1 << 0)
#define REG_PJREN_PJREN1_BITS_MASK (1 << 1)
#define REG_PJREN_PJREN2_BITS_MASK (1 << 2)
#define REG_PJREN_PJREN3_BITS_MASK (1 << 3)
#define REG_PJREN_PJREN4_BITS_MASK (1 << 4)
#define REG_PJREN_PJREN5_BITS_MASK (1 << 5)

// FIELDS FOR REGISTER : PJSEL0
#define REG_PJSEL0_PJSEL0_0_BITS_MASK (1 << 0)
#define REG_PJSEL0_PJSEL0_1_BITS_MASK (1 << 1)
#define REG_PJSEL0_PJSEL0_2_BITS_MASK (1 << 2)
#define REG_PJSEL0_PJSEL0_3_BITS_MASK (1 << 3)
#define REG_PJSEL0_PJSEL0_4_BITS_MASK (1 << 4)
#define REG_PJSEL0_PJSEL0_5_BITS_MASK (1 << 5)

// FIELDS FOR REGISTER : PJSEL1
#define REG_PJSEL1_PJSEL1_0_BITS_MASK (1 << 0)
#define REG_PJSEL1_PJSEL1_1_BITS_MASK (1 << 1)
#define REG_PJSEL1_PJSEL1_2_BITS_MASK (1 << 2)
#define REG_PJSEL1_PJSEL1_3_BITS_MASK (1 << 3)
#define REG_PJSEL1_PJSEL1_4_BITS_MASK (1 << 4)
#define REG_PJSEL1_PJSEL1_5_BITS_MASK (1 << 5)

// FIELDS FOR REGISTER : PJSELC




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t pjin;
   uint32_t pjout;
   uint32_t pjdir;
   uint32_t pjren;
   uint32_t pjsel0;
   uint32_t pjsel1;
   uint32_t pjselc;
} MSP430_Port_J_State;




 // Local functions definitions
// REG: PJIN
static uint64_t reg_pjin_read(MSP430_Port_J_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PJIN_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pjin_write(MSP430_Port_J_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PJIN_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PJIN_PJIN0_BITS_MASK) != ((*reg) & REG_PJIN_PJIN0_BITS_MASK)) {
        }

        if ((new_value & REG_PJIN_PJIN1_BITS_MASK) != ((*reg) & REG_PJIN_PJIN1_BITS_MASK)) {
        }

        if ((new_value & REG_PJIN_PJIN2_BITS_MASK) != ((*reg) & REG_PJIN_PJIN2_BITS_MASK)) {
        }

        if ((new_value & REG_PJIN_PJIN3_BITS_MASK) != ((*reg) & REG_PJIN_PJIN3_BITS_MASK)) {
        }

        if ((new_value & REG_PJIN_PJIN4_BITS_MASK) != ((*reg) & REG_PJIN_PJIN4_BITS_MASK)) {
        }

        if ((new_value & REG_PJIN_PJIN5_BITS_MASK) != ((*reg) & REG_PJIN_PJIN5_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PJOUT
static uint64_t reg_pjout_read(MSP430_Port_J_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PJOUT_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pjout_write(MSP430_Port_J_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PJOUT_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PJOUT_PJOUT0_BITS_MASK) != ((*reg) & REG_PJOUT_PJOUT0_BITS_MASK)) {
        }

        if ((new_value & REG_PJOUT_PJOUT1_BITS_MASK) != ((*reg) & REG_PJOUT_PJOUT1_BITS_MASK)) {
        }

        if ((new_value & REG_PJOUT_PJOUT2_BITS_MASK) != ((*reg) & REG_PJOUT_PJOUT2_BITS_MASK)) {
        }

        if ((new_value & REG_PJOUT_PJOUT3_BITS_MASK) != ((*reg) & REG_PJOUT_PJOUT3_BITS_MASK)) {
        }

        if ((new_value & REG_PJOUT_PJOUT4_BITS_MASK) != ((*reg) & REG_PJOUT_PJOUT4_BITS_MASK)) {
        }

        if ((new_value & REG_PJOUT_PJOUT5_BITS_MASK) != ((*reg) & REG_PJOUT_PJOUT5_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PJDIR
static uint64_t reg_pjdir_read(MSP430_Port_J_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PJDIR_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pjdir_write(MSP430_Port_J_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PJDIR_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PJDIR_PJDIR0_BITS_MASK) != ((*reg) & REG_PJDIR_PJDIR0_BITS_MASK)) {
        }

        if ((new_value & REG_PJDIR_PJDIR1_BITS_MASK) != ((*reg) & REG_PJDIR_PJDIR1_BITS_MASK)) {
        }

        if ((new_value & REG_PJDIR_PJDIR2_BITS_MASK) != ((*reg) & REG_PJDIR_PJDIR2_BITS_MASK)) {
        }

        if ((new_value & REG_PJDIR_PJDIR3_BITS_MASK) != ((*reg) & REG_PJDIR_PJDIR3_BITS_MASK)) {
        }

        if ((new_value & REG_PJDIR_PJDIR4_BITS_MASK) != ((*reg) & REG_PJDIR_PJDIR4_BITS_MASK)) {
        }

        if ((new_value & REG_PJDIR_PJDIR5_BITS_MASK) != ((*reg) & REG_PJDIR_PJDIR5_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PJREN
static uint64_t reg_pjren_read(MSP430_Port_J_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PJREN_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pjren_write(MSP430_Port_J_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PJREN_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PJREN_PJREN0_BITS_MASK) != ((*reg) & REG_PJREN_PJREN0_BITS_MASK)) {
        }

        if ((new_value & REG_PJREN_PJREN1_BITS_MASK) != ((*reg) & REG_PJREN_PJREN1_BITS_MASK)) {
        }

        if ((new_value & REG_PJREN_PJREN2_BITS_MASK) != ((*reg) & REG_PJREN_PJREN2_BITS_MASK)) {
        }

        if ((new_value & REG_PJREN_PJREN3_BITS_MASK) != ((*reg) & REG_PJREN_PJREN3_BITS_MASK)) {
        }

        if ((new_value & REG_PJREN_PJREN4_BITS_MASK) != ((*reg) & REG_PJREN_PJREN4_BITS_MASK)) {
        }

        if ((new_value & REG_PJREN_PJREN5_BITS_MASK) != ((*reg) & REG_PJREN_PJREN5_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PJSEL0
static uint64_t reg_pjsel0_read(MSP430_Port_J_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PJSEL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pjsel0_write(MSP430_Port_J_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PJSEL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PJSEL0_PJSEL0_0_BITS_MASK) != ((*reg) & REG_PJSEL0_PJSEL0_0_BITS_MASK)) {
        }

        if ((new_value & REG_PJSEL0_PJSEL0_1_BITS_MASK) != ((*reg) & REG_PJSEL0_PJSEL0_1_BITS_MASK)) {
        }

        if ((new_value & REG_PJSEL0_PJSEL0_2_BITS_MASK) != ((*reg) & REG_PJSEL0_PJSEL0_2_BITS_MASK)) {
        }

        if ((new_value & REG_PJSEL0_PJSEL0_3_BITS_MASK) != ((*reg) & REG_PJSEL0_PJSEL0_3_BITS_MASK)) {
        }

        if ((new_value & REG_PJSEL0_PJSEL0_4_BITS_MASK) != ((*reg) & REG_PJSEL0_PJSEL0_4_BITS_MASK)) {
        }

        if ((new_value & REG_PJSEL0_PJSEL0_5_BITS_MASK) != ((*reg) & REG_PJSEL0_PJSEL0_5_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PJSEL1
static uint64_t reg_pjsel1_read(MSP430_Port_J_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PJSEL1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pjsel1_write(MSP430_Port_J_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PJSEL1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PJSEL1_PJSEL1_0_BITS_MASK) != ((*reg) & REG_PJSEL1_PJSEL1_0_BITS_MASK)) {
        }

        if ((new_value & REG_PJSEL1_PJSEL1_1_BITS_MASK) != ((*reg) & REG_PJSEL1_PJSEL1_1_BITS_MASK)) {
        }

        if ((new_value & REG_PJSEL1_PJSEL1_2_BITS_MASK) != ((*reg) & REG_PJSEL1_PJSEL1_2_BITS_MASK)) {
        }

        if ((new_value & REG_PJSEL1_PJSEL1_3_BITS_MASK) != ((*reg) & REG_PJSEL1_PJSEL1_3_BITS_MASK)) {
        }

        if ((new_value & REG_PJSEL1_PJSEL1_4_BITS_MASK) != ((*reg) & REG_PJSEL1_PJSEL1_4_BITS_MASK)) {
        }

        if ((new_value & REG_PJSEL1_PJSEL1_5_BITS_MASK) != ((*reg) & REG_PJSEL1_PJSEL1_5_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PJSELC
static uint64_t reg_pjselc_read(MSP430_Port_J_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PJSELC_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pjselc_write(MSP430_Port_J_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PJSELC_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_Port_J_State *s = MSP430FR5739_PORT_J(opaque);
    uint64_t retvalue = 0;

    if ((addr >= PJIN) && ((addr + size) <= (PJIN + 2))) {
        retvalue = reg_pjin_read(s, &s->pjin, (addr - PJIN));
    } else if ((addr >= PJOUT) && ((addr + size) <= (PJOUT + 2))) {
        retvalue = reg_pjout_read(s, &s->pjout, (addr - PJOUT));
    } else if ((addr >= PJDIR) && ((addr + size) <= (PJDIR + 2))) {
        retvalue = reg_pjdir_read(s, &s->pjdir, (addr - PJDIR));
    } else if ((addr >= PJREN) && ((addr + size) <= (PJREN + 2))) {
        retvalue = reg_pjren_read(s, &s->pjren, (addr - PJREN));
    } else if ((addr >= PJSEL0) && ((addr + size) <= (PJSEL0 + 2))) {
        retvalue = reg_pjsel0_read(s, &s->pjsel0, (addr - PJSEL0));
    } else if ((addr >= PJSEL1) && ((addr + size) <= (PJSEL1 + 2))) {
        retvalue = reg_pjsel1_read(s, &s->pjsel1, (addr - PJSEL1));
    } else if ((addr >= PJSELC) && ((addr + size) <= (PJSELC + 2))) {
        retvalue = reg_pjselc_read(s, &s->pjselc, (addr - PJSELC));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_Port_J_State *s = MSP430FR5739_PORT_J(opaque);

    if ((addr >= PJIN) && ((addr + size) <= (PJIN + 2))) {
        reg_pjin_write(s, &s->pjin, (addr - PJIN), value, size);
    } else if ((addr >= PJOUT) && ((addr + size) <= (PJOUT + 2))) {
        reg_pjout_write(s, &s->pjout, (addr - PJOUT), value, size);
    } else if ((addr >= PJDIR) && ((addr + size) <= (PJDIR + 2))) {
        reg_pjdir_write(s, &s->pjdir, (addr - PJDIR), value, size);
    } else if ((addr >= PJREN) && ((addr + size) <= (PJREN + 2))) {
        reg_pjren_write(s, &s->pjren, (addr - PJREN), value, size);
    } else if ((addr >= PJSEL0) && ((addr + size) <= (PJSEL0 + 2))) {
        reg_pjsel0_write(s, &s->pjsel0, (addr - PJSEL0), value, size);
    } else if ((addr >= PJSEL1) && ((addr + size) <= (PJSEL1 + 2))) {
        reg_pjsel1_write(s, &s->pjsel1, (addr - PJSEL1), value, size);
    } else if ((addr >= PJSELC) && ((addr + size) <= (PJSELC + 2))) {
        reg_pjselc_write(s, &s->pjselc, (addr - PJSELC), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_Port_J_State *device = MSP430FR5739_PORT_J(dev);

   device->pjin = 0x0;
   device->pjout = 0x0;
   device->pjdir = 0x0;
   device->pjren = 0x0;
   device->pjsel0 = 0x0;
   device->pjsel1 = 0x0;
   device->pjselc = 0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_Port_J_State *s = MSP430FR5739_PORT_J(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_PORT_J, SIZE);
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
    .name          = TYPE_MSP430FR5739_PORT_J,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_Port_J_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_port_j_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_port_j_register_types)
