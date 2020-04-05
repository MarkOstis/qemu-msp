// Peripheral name: Timer1_B3

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_TIMER1_B3 "msp430fr5739_timer1_b3"
#define SIZE 48
#define MSP430FR5739_TIMER1_B3(obj) OBJECT_CHECK(MSP430_Timer1_B3_State, (obj), TYPE_MSP430FR5739_TIMER1_B3)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x0400

#define TB1CTL 0
#define TB1CCTL0 2
#define TB1CCTL1 4
#define TB1CCTL2 6
#define TB1R 16
#define TB1CCR0 18
#define TB1CCR1 20
#define TB1CCR2 22
#define TB1IV 46
#define TB1EX0 32

// REGISTERS RESET VALUE
#define REG_TB1CTL_RESET_VALUE 0x0
#define REG_TB1CCTL0_RESET_VALUE 0x0
#define REG_TB1CCTL1_RESET_VALUE 0x0
#define REG_TB1CCTL2_RESET_VALUE 0x0
#define REG_TB1R_RESET_VALUE 0
#define REG_TB1CCR0_RESET_VALUE 0
#define REG_TB1CCR1_RESET_VALUE 0
#define REG_TB1CCR2_RESET_VALUE 0
#define REG_TB1IV_RESET_VALUE 0
#define REG_TB1EX0_RESET_VALUE 0x0

// REGISTERS BITS MASKS
#define REG_TB1CTL_BITS_MASK 0x7bf7
#define REG_TB1CCTL0_BITS_MASK 0xffff
#define REG_TB1CCTL1_BITS_MASK 0xffff
#define REG_TB1CCTL2_BITS_MASK 0xffff
#define REG_TB1R_BITS_MASK 0xffff
#define REG_TB1CCR0_BITS_MASK 0xffff
#define REG_TB1CCR1_BITS_MASK 0xffff
#define REG_TB1CCR2_BITS_MASK 0xffff
#define REG_TB1IV_BITS_MASK 0xffff
#define REG_TB1EX0_BITS_MASK 0x7

// FIELDS FOR REGISTER : TB1CTL
#define REG_TB1CTL_TBIFG_BITS_MASK (1 << 0)
#define REG_TB1CTL_TBIE_BITS_MASK (1 << 1)
#define REG_TB1CTL_TBCLR_BITS_MASK (1 << 2)
#define REG_TB1CTL_MC_BITS_MASK (3 << 4)
#define REG_TB1CTL_ID_BITS_MASK (3 << 6)
#define REG_TB1CTL_TBSSEL_BITS_MASK (3 << 8)
#define REG_TB1CTL_CNTL_BITS_MASK (3 << 11)
#define REG_TB1CTL_TBCLGRP_BITS_MASK (3 << 13)

// FIELDS FOR REGISTER : TB1CCTL0
#define REG_TB1CCTL0_CCIFG_BITS_MASK (1 << 0)
#define REG_TB1CCTL0_COV_BITS_MASK (1 << 1)
#define REG_TB1CCTL0_OUT_BITS_MASK (1 << 2)
#define REG_TB1CCTL0_CCI_BITS_MASK (1 << 3)
#define REG_TB1CCTL0_CCIE_BITS_MASK (1 << 4)
#define REG_TB1CCTL0_OUTMOD_BITS_MASK (7 << 5)
#define REG_TB1CCTL0_CAP_BITS_MASK (1 << 8)
#define REG_TB1CCTL0_CLLD_BITS_MASK (3 << 9)
#define REG_TB1CCTL0_SCS_BITS_MASK (1 << 11)
#define REG_TB1CCTL0_CCIS_BITS_MASK (3 << 12)
#define REG_TB1CCTL0_CM_BITS_MASK (3 << 14)

// FIELDS FOR REGISTER : TB1CCTL1
#define REG_TB1CCTL1_CCIFG_BITS_MASK (1 << 0)
#define REG_TB1CCTL1_COV_BITS_MASK (1 << 1)
#define REG_TB1CCTL1_OUT_BITS_MASK (1 << 2)
#define REG_TB1CCTL1_CCI_BITS_MASK (1 << 3)
#define REG_TB1CCTL1_CCIE_BITS_MASK (1 << 4)
#define REG_TB1CCTL1_OUTMOD_BITS_MASK (7 << 5)
#define REG_TB1CCTL1_CAP_BITS_MASK (1 << 8)
#define REG_TB1CCTL1_CLLD_BITS_MASK (3 << 9)
#define REG_TB1CCTL1_SCS_BITS_MASK (1 << 11)
#define REG_TB1CCTL1_CCIS_BITS_MASK (3 << 12)
#define REG_TB1CCTL1_CM_BITS_MASK (3 << 14)

// FIELDS FOR REGISTER : TB1CCTL2
#define REG_TB1CCTL2_CCIFG_BITS_MASK (1 << 0)
#define REG_TB1CCTL2_COV_BITS_MASK (1 << 1)
#define REG_TB1CCTL2_OUT_BITS_MASK (1 << 2)
#define REG_TB1CCTL2_CCI_BITS_MASK (1 << 3)
#define REG_TB1CCTL2_CCIE_BITS_MASK (1 << 4)
#define REG_TB1CCTL2_OUTMOD_BITS_MASK (7 << 5)
#define REG_TB1CCTL2_CAP_BITS_MASK (1 << 8)
#define REG_TB1CCTL2_CLLD_BITS_MASK (3 << 9)
#define REG_TB1CCTL2_SCS_BITS_MASK (1 << 11)
#define REG_TB1CCTL2_CCIS_BITS_MASK (3 << 12)
#define REG_TB1CCTL2_CM_BITS_MASK (3 << 14)

// FIELDS FOR REGISTER : TB1R

// FIELDS FOR REGISTER : TB1CCR0

// FIELDS FOR REGISTER : TB1CCR1

// FIELDS FOR REGISTER : TB1CCR2

// FIELDS FOR REGISTER : TB1IV

// FIELDS FOR REGISTER : TB1EX0
#define REG_TB1EX0_TBIDEX_BITS_MASK (7 << 0)




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t tb1ctl;
   uint32_t tb1cctl0;
   uint32_t tb1cctl1;
   uint32_t tb1cctl2;
   uint32_t tb1r;
   uint32_t tb1ccr0;
   uint32_t tb1ccr1;
   uint32_t tb1ccr2;
   uint32_t tb1iv;
   uint32_t tb1ex0;
} MSP430_Timer1_B3_State;




 // Local functions definitions
// REG: TB1CTL
static uint64_t reg_tb1ctl_read(MSP430_Timer1_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB1CTL_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb1ctl_write(MSP430_Timer1_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB1CTL_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_TB1CTL_TBIFG_BITS_MASK) != ((*reg) & REG_TB1CTL_TBIFG_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CTL_TBIE_BITS_MASK) != ((*reg) & REG_TB1CTL_TBIE_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CTL_TBCLR_BITS_MASK) != ((*reg) & REG_TB1CTL_TBCLR_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CTL_MC_BITS_MASK) != ((*reg) & REG_TB1CTL_MC_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CTL_ID_BITS_MASK) != ((*reg) & REG_TB1CTL_ID_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CTL_TBSSEL_BITS_MASK) != ((*reg) & REG_TB1CTL_TBSSEL_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CTL_CNTL_BITS_MASK) != ((*reg) & REG_TB1CTL_CNTL_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CTL_TBCLGRP_BITS_MASK) != ((*reg) & REG_TB1CTL_TBCLGRP_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: TB1CCTL0
static uint64_t reg_tb1cctl0_read(MSP430_Timer1_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB1CCTL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb1cctl0_write(MSP430_Timer1_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB1CCTL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_TB1CCTL0_CCIFG_BITS_MASK) != ((*reg) & REG_TB1CCTL0_CCIFG_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL0_COV_BITS_MASK) != ((*reg) & REG_TB1CCTL0_COV_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL0_OUT_BITS_MASK) != ((*reg) & REG_TB1CCTL0_OUT_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL0_CCI_BITS_MASK) != ((*reg) & REG_TB1CCTL0_CCI_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL0_CCIE_BITS_MASK) != ((*reg) & REG_TB1CCTL0_CCIE_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL0_OUTMOD_BITS_MASK) != ((*reg) & REG_TB1CCTL0_OUTMOD_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL0_CAP_BITS_MASK) != ((*reg) & REG_TB1CCTL0_CAP_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL0_CLLD_BITS_MASK) != ((*reg) & REG_TB1CCTL0_CLLD_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL0_SCS_BITS_MASK) != ((*reg) & REG_TB1CCTL0_SCS_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL0_CCIS_BITS_MASK) != ((*reg) & REG_TB1CCTL0_CCIS_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL0_CM_BITS_MASK) != ((*reg) & REG_TB1CCTL0_CM_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: TB1CCTL1
static uint64_t reg_tb1cctl1_read(MSP430_Timer1_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB1CCTL1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb1cctl1_write(MSP430_Timer1_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB1CCTL1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_TB1CCTL1_CCIFG_BITS_MASK) != ((*reg) & REG_TB1CCTL1_CCIFG_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL1_COV_BITS_MASK) != ((*reg) & REG_TB1CCTL1_COV_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL1_OUT_BITS_MASK) != ((*reg) & REG_TB1CCTL1_OUT_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL1_CCI_BITS_MASK) != ((*reg) & REG_TB1CCTL1_CCI_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL1_CCIE_BITS_MASK) != ((*reg) & REG_TB1CCTL1_CCIE_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL1_OUTMOD_BITS_MASK) != ((*reg) & REG_TB1CCTL1_OUTMOD_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL1_CAP_BITS_MASK) != ((*reg) & REG_TB1CCTL1_CAP_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL1_CLLD_BITS_MASK) != ((*reg) & REG_TB1CCTL1_CLLD_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL1_SCS_BITS_MASK) != ((*reg) & REG_TB1CCTL1_SCS_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL1_CCIS_BITS_MASK) != ((*reg) & REG_TB1CCTL1_CCIS_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL1_CM_BITS_MASK) != ((*reg) & REG_TB1CCTL1_CM_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: TB1CCTL2
static uint64_t reg_tb1cctl2_read(MSP430_Timer1_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB1CCTL2_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb1cctl2_write(MSP430_Timer1_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB1CCTL2_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_TB1CCTL2_CCIFG_BITS_MASK) != ((*reg) & REG_TB1CCTL2_CCIFG_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL2_COV_BITS_MASK) != ((*reg) & REG_TB1CCTL2_COV_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL2_OUT_BITS_MASK) != ((*reg) & REG_TB1CCTL2_OUT_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL2_CCI_BITS_MASK) != ((*reg) & REG_TB1CCTL2_CCI_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL2_CCIE_BITS_MASK) != ((*reg) & REG_TB1CCTL2_CCIE_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL2_OUTMOD_BITS_MASK) != ((*reg) & REG_TB1CCTL2_OUTMOD_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL2_CAP_BITS_MASK) != ((*reg) & REG_TB1CCTL2_CAP_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL2_CLLD_BITS_MASK) != ((*reg) & REG_TB1CCTL2_CLLD_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL2_SCS_BITS_MASK) != ((*reg) & REG_TB1CCTL2_SCS_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL2_CCIS_BITS_MASK) != ((*reg) & REG_TB1CCTL2_CCIS_BITS_MASK)) {
        }

        if ((new_value & REG_TB1CCTL2_CM_BITS_MASK) != ((*reg) & REG_TB1CCTL2_CM_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: TB1R
static uint64_t reg_tb1r_read(MSP430_Timer1_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB1R_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb1r_write(MSP430_Timer1_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB1R_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: TB1CCR0
static uint64_t reg_tb1ccr0_read(MSP430_Timer1_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB1CCR0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb1ccr0_write(MSP430_Timer1_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB1CCR0_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: TB1CCR1
static uint64_t reg_tb1ccr1_read(MSP430_Timer1_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB1CCR1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb1ccr1_write(MSP430_Timer1_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB1CCR1_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: TB1CCR2
static uint64_t reg_tb1ccr2_read(MSP430_Timer1_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB1CCR2_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb1ccr2_write(MSP430_Timer1_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB1CCR2_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: TB1IV
static uint64_t reg_tb1iv_read(MSP430_Timer1_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB1IV_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb1iv_write(MSP430_Timer1_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB1IV_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: TB1EX0
static uint64_t reg_tb1ex0_read(MSP430_Timer1_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB1EX0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb1ex0_write(MSP430_Timer1_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB1EX0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_TB1EX0_TBIDEX_BITS_MASK) != ((*reg) & REG_TB1EX0_TBIDEX_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_Timer1_B3_State *s = MSP430FR5739_TIMER1_B3(opaque);
    uint64_t retvalue = 0;

    if ((addr >= TB1CTL) && ((addr + size) <= (TB1CTL + 2))) {
        retvalue = reg_tb1ctl_read(s, &s->tb1ctl, (addr - TB1CTL));
    } else if ((addr >= TB1CCTL0) && ((addr + size) <= (TB1CCTL0 + 2))) {
        retvalue = reg_tb1cctl0_read(s, &s->tb1cctl0, (addr - TB1CCTL0));
    } else if ((addr >= TB1CCTL1) && ((addr + size) <= (TB1CCTL1 + 2))) {
        retvalue = reg_tb1cctl1_read(s, &s->tb1cctl1, (addr - TB1CCTL1));
    } else if ((addr >= TB1CCTL2) && ((addr + size) <= (TB1CCTL2 + 2))) {
        retvalue = reg_tb1cctl2_read(s, &s->tb1cctl2, (addr - TB1CCTL2));
    } else if ((addr >= TB1R) && ((addr + size) <= (TB1R + 2))) {
        retvalue = reg_tb1r_read(s, &s->tb1r, (addr - TB1R));
    } else if ((addr >= TB1CCR0) && ((addr + size) <= (TB1CCR0 + 2))) {
        retvalue = reg_tb1ccr0_read(s, &s->tb1ccr0, (addr - TB1CCR0));
    } else if ((addr >= TB1CCR1) && ((addr + size) <= (TB1CCR1 + 2))) {
        retvalue = reg_tb1ccr1_read(s, &s->tb1ccr1, (addr - TB1CCR1));
    } else if ((addr >= TB1CCR2) && ((addr + size) <= (TB1CCR2 + 2))) {
        retvalue = reg_tb1ccr2_read(s, &s->tb1ccr2, (addr - TB1CCR2));
    } else if ((addr >= TB1IV) && ((addr + size) <= (TB1IV + 2))) {
        retvalue = reg_tb1iv_read(s, &s->tb1iv, (addr - TB1IV));
    } else if ((addr >= TB1EX0) && ((addr + size) <= (TB1EX0 + 2))) {
        retvalue = reg_tb1ex0_read(s, &s->tb1ex0, (addr - TB1EX0));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_Timer1_B3_State *s = MSP430FR5739_TIMER1_B3(opaque);

    if ((addr >= TB1CTL) && ((addr + size) <= (TB1CTL + 2))) {
        reg_tb1ctl_write(s, &s->tb1ctl, (addr - TB1CTL), value, size);
    } else if ((addr >= TB1CCTL0) && ((addr + size) <= (TB1CCTL0 + 2))) {
        reg_tb1cctl0_write(s, &s->tb1cctl0, (addr - TB1CCTL0), value, size);
    } else if ((addr >= TB1CCTL1) && ((addr + size) <= (TB1CCTL1 + 2))) {
        reg_tb1cctl1_write(s, &s->tb1cctl1, (addr - TB1CCTL1), value, size);
    } else if ((addr >= TB1CCTL2) && ((addr + size) <= (TB1CCTL2 + 2))) {
        reg_tb1cctl2_write(s, &s->tb1cctl2, (addr - TB1CCTL2), value, size);
    } else if ((addr >= TB1R) && ((addr + size) <= (TB1R + 2))) {
        reg_tb1r_write(s, &s->tb1r, (addr - TB1R), value, size);
    } else if ((addr >= TB1CCR0) && ((addr + size) <= (TB1CCR0 + 2))) {
        reg_tb1ccr0_write(s, &s->tb1ccr0, (addr - TB1CCR0), value, size);
    } else if ((addr >= TB1CCR1) && ((addr + size) <= (TB1CCR1 + 2))) {
        reg_tb1ccr1_write(s, &s->tb1ccr1, (addr - TB1CCR1), value, size);
    } else if ((addr >= TB1CCR2) && ((addr + size) <= (TB1CCR2 + 2))) {
        reg_tb1ccr2_write(s, &s->tb1ccr2, (addr - TB1CCR2), value, size);
    } else if ((addr >= TB1IV) && ((addr + size) <= (TB1IV + 2))) {
        reg_tb1iv_write(s, &s->tb1iv, (addr - TB1IV), value, size);
    } else if ((addr >= TB1EX0) && ((addr + size) <= (TB1EX0 + 2))) {
        reg_tb1ex0_write(s, &s->tb1ex0, (addr - TB1EX0), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_Timer1_B3_State *device = MSP430FR5739_TIMER1_B3(dev);

   device->tb1ctl = 0x0;
   device->tb1cctl0 = 0x0;
   device->tb1cctl1 = 0x0;
   device->tb1cctl2 = 0x0;
   device->tb1r = 0;
   device->tb1ccr0 = 0;
   device->tb1ccr1 = 0;
   device->tb1ccr2 = 0;
   device->tb1iv = 0;
   device->tb1ex0 = 0x0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_Timer1_B3_State *s = MSP430FR5739_TIMER1_B3(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_TIMER1_B3, SIZE);
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
    .name          = TYPE_MSP430FR5739_TIMER1_B3,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_Timer1_B3_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_timer1_b3_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_timer1_b3_register_types)
