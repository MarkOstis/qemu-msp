// Peripheral name: Timer0_B3

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_TIMER0_B3 "msp430fr5739_timer0_b3"
#define SIZE 48
#define MSP430FR5739_TIMER0_B3(obj) OBJECT_CHECK(MSP430_Timer0_B3_State, (obj), TYPE_MSP430FR5739_TIMER0_B3)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x03C0

#define TB0CTL 0
#define TB0CCTL0 2
#define TB0CCTL1 4
#define TB0CCTL2 6
#define TB0R 16
#define TB0CCR0 18
#define TB0CCR1 20
#define TB0CCR2 22
#define TB0EX0 32
#define TB0IV 46

// REGISTERS RESET VALUE
#define REG_TB0CTL_RESET_VALUE 0x0
#define REG_TB0CCTL0_RESET_VALUE 0x0
#define REG_TB0CCTL1_RESET_VALUE 0x0
#define REG_TB0CCTL2_RESET_VALUE 0x0
#define REG_TB0R_RESET_VALUE 0
#define REG_TB0CCR0_RESET_VALUE 0
#define REG_TB0CCR1_RESET_VALUE 0
#define REG_TB0CCR2_RESET_VALUE 0
#define REG_TB0EX0_RESET_VALUE 0x0
#define REG_TB0IV_RESET_VALUE 0

// REGISTERS BITS MASKS
#define REG_TB0CTL_BITS_MASK 0x7bf7
#define REG_TB0CCTL0_BITS_MASK 0xffff
#define REG_TB0CCTL1_BITS_MASK 0xffff
#define REG_TB0CCTL2_BITS_MASK 0xffff
#define REG_TB0R_BITS_MASK 0xffff
#define REG_TB0CCR0_BITS_MASK 0xffff
#define REG_TB0CCR1_BITS_MASK 0xffff
#define REG_TB0CCR2_BITS_MASK 0xffff
#define REG_TB0EX0_BITS_MASK 0x7
#define REG_TB0IV_BITS_MASK 0xffff

// FIELDS FOR REGISTER : TB0CTL
#define REG_TB0CTL_TBIFG_BITS_MASK (1 << 0)
#define REG_TB0CTL_TBIE_BITS_MASK (1 << 1)
#define REG_TB0CTL_TBCLR_BITS_MASK (1 << 2)
#define REG_TB0CTL_MC_BITS_MASK (3 << 4)
#define REG_TB0CTL_ID_BITS_MASK (3 << 6)
#define REG_TB0CTL_TBSSEL_BITS_MASK (3 << 8)
#define REG_TB0CTL_CNTL_BITS_MASK (3 << 11)
#define REG_TB0CTL_TBCLGRP_BITS_MASK (3 << 13)

// FIELDS FOR REGISTER : TB0CCTL0
#define REG_TB0CCTL0_CCIFG_BITS_MASK (1 << 0)
#define REG_TB0CCTL0_COV_BITS_MASK (1 << 1)
#define REG_TB0CCTL0_OUT_BITS_MASK (1 << 2)
#define REG_TB0CCTL0_CCI_BITS_MASK (1 << 3)
#define REG_TB0CCTL0_CCIE_BITS_MASK (1 << 4)
#define REG_TB0CCTL0_OUTMOD_BITS_MASK (7 << 5)
#define REG_TB0CCTL0_CAP_BITS_MASK (1 << 8)
#define REG_TB0CCTL0_CLLD_BITS_MASK (3 << 9)
#define REG_TB0CCTL0_SCS_BITS_MASK (1 << 11)
#define REG_TB0CCTL0_CCIS_BITS_MASK (3 << 12)
#define REG_TB0CCTL0_CM_BITS_MASK (3 << 14)

// FIELDS FOR REGISTER : TB0CCTL1
#define REG_TB0CCTL1_CCIFG_BITS_MASK (1 << 0)
#define REG_TB0CCTL1_COV_BITS_MASK (1 << 1)
#define REG_TB0CCTL1_OUT_BITS_MASK (1 << 2)
#define REG_TB0CCTL1_CCI_BITS_MASK (1 << 3)
#define REG_TB0CCTL1_CCIE_BITS_MASK (1 << 4)
#define REG_TB0CCTL1_OUTMOD_BITS_MASK (7 << 5)
#define REG_TB0CCTL1_CAP_BITS_MASK (1 << 8)
#define REG_TB0CCTL1_CLLD_BITS_MASK (3 << 9)
#define REG_TB0CCTL1_SCS_BITS_MASK (1 << 11)
#define REG_TB0CCTL1_CCIS_BITS_MASK (3 << 12)
#define REG_TB0CCTL1_CM_BITS_MASK (3 << 14)

// FIELDS FOR REGISTER : TB0CCTL2
#define REG_TB0CCTL2_CCIFG_BITS_MASK (1 << 0)
#define REG_TB0CCTL2_COV_BITS_MASK (1 << 1)
#define REG_TB0CCTL2_OUT_BITS_MASK (1 << 2)
#define REG_TB0CCTL2_CCI_BITS_MASK (1 << 3)
#define REG_TB0CCTL2_CCIE_BITS_MASK (1 << 4)
#define REG_TB0CCTL2_OUTMOD_BITS_MASK (7 << 5)
#define REG_TB0CCTL2_CAP_BITS_MASK (1 << 8)
#define REG_TB0CCTL2_CLLD_BITS_MASK (3 << 9)
#define REG_TB0CCTL2_SCS_BITS_MASK (1 << 11)
#define REG_TB0CCTL2_CCIS_BITS_MASK (3 << 12)
#define REG_TB0CCTL2_CM_BITS_MASK (3 << 14)

// FIELDS FOR REGISTER : TB0R

// FIELDS FOR REGISTER : TB0CCR0

// FIELDS FOR REGISTER : TB0CCR1

// FIELDS FOR REGISTER : TB0CCR2

// FIELDS FOR REGISTER : TB0EX0
#define REG_TB0EX0_TBIDEX_BITS_MASK (7 << 0)

// FIELDS FOR REGISTER : TB0IV




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t tb0ctl;
   uint32_t tb0cctl0;
   uint32_t tb0cctl1;
   uint32_t tb0cctl2;
   uint32_t tb0r;
   uint32_t tb0ccr0;
   uint32_t tb0ccr1;
   uint32_t tb0ccr2;
   uint32_t tb0ex0;
   uint32_t tb0iv;
} MSP430_Timer0_B3_State;




 // Local functions definitions
// REG: TB0CTL
static uint64_t reg_tb0ctl_read(MSP430_Timer0_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB0CTL_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb0ctl_write(MSP430_Timer0_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB0CTL_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_TB0CTL_TBIFG_BITS_MASK) != ((*reg) & REG_TB0CTL_TBIFG_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CTL_TBIE_BITS_MASK) != ((*reg) & REG_TB0CTL_TBIE_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CTL_TBCLR_BITS_MASK) != ((*reg) & REG_TB0CTL_TBCLR_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CTL_MC_BITS_MASK) != ((*reg) & REG_TB0CTL_MC_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CTL_ID_BITS_MASK) != ((*reg) & REG_TB0CTL_ID_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CTL_TBSSEL_BITS_MASK) != ((*reg) & REG_TB0CTL_TBSSEL_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CTL_CNTL_BITS_MASK) != ((*reg) & REG_TB0CTL_CNTL_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CTL_TBCLGRP_BITS_MASK) != ((*reg) & REG_TB0CTL_TBCLGRP_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: TB0CCTL0
static uint64_t reg_tb0cctl0_read(MSP430_Timer0_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB0CCTL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb0cctl0_write(MSP430_Timer0_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB0CCTL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_TB0CCTL0_CCIFG_BITS_MASK) != ((*reg) & REG_TB0CCTL0_CCIFG_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL0_COV_BITS_MASK) != ((*reg) & REG_TB0CCTL0_COV_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL0_OUT_BITS_MASK) != ((*reg) & REG_TB0CCTL0_OUT_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL0_CCI_BITS_MASK) != ((*reg) & REG_TB0CCTL0_CCI_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL0_CCIE_BITS_MASK) != ((*reg) & REG_TB0CCTL0_CCIE_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL0_OUTMOD_BITS_MASK) != ((*reg) & REG_TB0CCTL0_OUTMOD_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL0_CAP_BITS_MASK) != ((*reg) & REG_TB0CCTL0_CAP_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL0_CLLD_BITS_MASK) != ((*reg) & REG_TB0CCTL0_CLLD_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL0_SCS_BITS_MASK) != ((*reg) & REG_TB0CCTL0_SCS_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL0_CCIS_BITS_MASK) != ((*reg) & REG_TB0CCTL0_CCIS_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL0_CM_BITS_MASK) != ((*reg) & REG_TB0CCTL0_CM_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: TB0CCTL1
static uint64_t reg_tb0cctl1_read(MSP430_Timer0_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB0CCTL1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb0cctl1_write(MSP430_Timer0_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB0CCTL1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_TB0CCTL1_CCIFG_BITS_MASK) != ((*reg) & REG_TB0CCTL1_CCIFG_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL1_COV_BITS_MASK) != ((*reg) & REG_TB0CCTL1_COV_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL1_OUT_BITS_MASK) != ((*reg) & REG_TB0CCTL1_OUT_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL1_CCI_BITS_MASK) != ((*reg) & REG_TB0CCTL1_CCI_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL1_CCIE_BITS_MASK) != ((*reg) & REG_TB0CCTL1_CCIE_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL1_OUTMOD_BITS_MASK) != ((*reg) & REG_TB0CCTL1_OUTMOD_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL1_CAP_BITS_MASK) != ((*reg) & REG_TB0CCTL1_CAP_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL1_CLLD_BITS_MASK) != ((*reg) & REG_TB0CCTL1_CLLD_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL1_SCS_BITS_MASK) != ((*reg) & REG_TB0CCTL1_SCS_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL1_CCIS_BITS_MASK) != ((*reg) & REG_TB0CCTL1_CCIS_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL1_CM_BITS_MASK) != ((*reg) & REG_TB0CCTL1_CM_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: TB0CCTL2
static uint64_t reg_tb0cctl2_read(MSP430_Timer0_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB0CCTL2_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb0cctl2_write(MSP430_Timer0_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB0CCTL2_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_TB0CCTL2_CCIFG_BITS_MASK) != ((*reg) & REG_TB0CCTL2_CCIFG_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL2_COV_BITS_MASK) != ((*reg) & REG_TB0CCTL2_COV_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL2_OUT_BITS_MASK) != ((*reg) & REG_TB0CCTL2_OUT_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL2_CCI_BITS_MASK) != ((*reg) & REG_TB0CCTL2_CCI_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL2_CCIE_BITS_MASK) != ((*reg) & REG_TB0CCTL2_CCIE_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL2_OUTMOD_BITS_MASK) != ((*reg) & REG_TB0CCTL2_OUTMOD_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL2_CAP_BITS_MASK) != ((*reg) & REG_TB0CCTL2_CAP_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL2_CLLD_BITS_MASK) != ((*reg) & REG_TB0CCTL2_CLLD_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL2_SCS_BITS_MASK) != ((*reg) & REG_TB0CCTL2_SCS_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL2_CCIS_BITS_MASK) != ((*reg) & REG_TB0CCTL2_CCIS_BITS_MASK)) {
        }

        if ((new_value & REG_TB0CCTL2_CM_BITS_MASK) != ((*reg) & REG_TB0CCTL2_CM_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: TB0R
static uint64_t reg_tb0r_read(MSP430_Timer0_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB0R_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb0r_write(MSP430_Timer0_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB0R_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: TB0CCR0
static uint64_t reg_tb0ccr0_read(MSP430_Timer0_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB0CCR0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb0ccr0_write(MSP430_Timer0_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB0CCR0_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: TB0CCR1
static uint64_t reg_tb0ccr1_read(MSP430_Timer0_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB0CCR1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb0ccr1_write(MSP430_Timer0_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB0CCR1_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: TB0CCR2
static uint64_t reg_tb0ccr2_read(MSP430_Timer0_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB0CCR2_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb0ccr2_write(MSP430_Timer0_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB0CCR2_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: TB0EX0
static uint64_t reg_tb0ex0_read(MSP430_Timer0_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB0EX0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb0ex0_write(MSP430_Timer0_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB0EX0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_TB0EX0_TBIDEX_BITS_MASK) != ((*reg) & REG_TB0EX0_TBIDEX_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: TB0IV
static uint64_t reg_tb0iv_read(MSP430_Timer0_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB0IV_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb0iv_write(MSP430_Timer0_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB0IV_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_Timer0_B3_State *s = MSP430FR5739_TIMER0_B3(opaque);
    uint64_t retvalue = 0;

    if ((addr >= TB0CTL) && ((addr + size) <= (TB0CTL + 2))) {
        retvalue = reg_tb0ctl_read(s, &s->tb0ctl, (addr - TB0CTL));
    } else if ((addr >= TB0CCTL0) && ((addr + size) <= (TB0CCTL0 + 2))) {
        retvalue = reg_tb0cctl0_read(s, &s->tb0cctl0, (addr - TB0CCTL0));
    } else if ((addr >= TB0CCTL1) && ((addr + size) <= (TB0CCTL1 + 2))) {
        retvalue = reg_tb0cctl1_read(s, &s->tb0cctl1, (addr - TB0CCTL1));
    } else if ((addr >= TB0CCTL2) && ((addr + size) <= (TB0CCTL2 + 2))) {
        retvalue = reg_tb0cctl2_read(s, &s->tb0cctl2, (addr - TB0CCTL2));
    } else if ((addr >= TB0R) && ((addr + size) <= (TB0R + 2))) {
        retvalue = reg_tb0r_read(s, &s->tb0r, (addr - TB0R));
    } else if ((addr >= TB0CCR0) && ((addr + size) <= (TB0CCR0 + 2))) {
        retvalue = reg_tb0ccr0_read(s, &s->tb0ccr0, (addr - TB0CCR0));
    } else if ((addr >= TB0CCR1) && ((addr + size) <= (TB0CCR1 + 2))) {
        retvalue = reg_tb0ccr1_read(s, &s->tb0ccr1, (addr - TB0CCR1));
    } else if ((addr >= TB0CCR2) && ((addr + size) <= (TB0CCR2 + 2))) {
        retvalue = reg_tb0ccr2_read(s, &s->tb0ccr2, (addr - TB0CCR2));
    } else if ((addr >= TB0EX0) && ((addr + size) <= (TB0EX0 + 2))) {
        retvalue = reg_tb0ex0_read(s, &s->tb0ex0, (addr - TB0EX0));
    } else if ((addr >= TB0IV) && ((addr + size) <= (TB0IV + 2))) {
        retvalue = reg_tb0iv_read(s, &s->tb0iv, (addr - TB0IV));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_Timer0_B3_State *s = MSP430FR5739_TIMER0_B3(opaque);

    if ((addr >= TB0CTL) && ((addr + size) <= (TB0CTL + 2))) {
        reg_tb0ctl_write(s, &s->tb0ctl, (addr - TB0CTL), value, size);
    } else if ((addr >= TB0CCTL0) && ((addr + size) <= (TB0CCTL0 + 2))) {
        reg_tb0cctl0_write(s, &s->tb0cctl0, (addr - TB0CCTL0), value, size);
    } else if ((addr >= TB0CCTL1) && ((addr + size) <= (TB0CCTL1 + 2))) {
        reg_tb0cctl1_write(s, &s->tb0cctl1, (addr - TB0CCTL1), value, size);
    } else if ((addr >= TB0CCTL2) && ((addr + size) <= (TB0CCTL2 + 2))) {
        reg_tb0cctl2_write(s, &s->tb0cctl2, (addr - TB0CCTL2), value, size);
    } else if ((addr >= TB0R) && ((addr + size) <= (TB0R + 2))) {
        reg_tb0r_write(s, &s->tb0r, (addr - TB0R), value, size);
    } else if ((addr >= TB0CCR0) && ((addr + size) <= (TB0CCR0 + 2))) {
        reg_tb0ccr0_write(s, &s->tb0ccr0, (addr - TB0CCR0), value, size);
    } else if ((addr >= TB0CCR1) && ((addr + size) <= (TB0CCR1 + 2))) {
        reg_tb0ccr1_write(s, &s->tb0ccr1, (addr - TB0CCR1), value, size);
    } else if ((addr >= TB0CCR2) && ((addr + size) <= (TB0CCR2 + 2))) {
        reg_tb0ccr2_write(s, &s->tb0ccr2, (addr - TB0CCR2), value, size);
    } else if ((addr >= TB0EX0) && ((addr + size) <= (TB0EX0 + 2))) {
        reg_tb0ex0_write(s, &s->tb0ex0, (addr - TB0EX0), value, size);
    } else if ((addr >= TB0IV) && ((addr + size) <= (TB0IV + 2))) {
        reg_tb0iv_write(s, &s->tb0iv, (addr - TB0IV), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_Timer0_B3_State *device = MSP430FR5739_TIMER0_B3(dev);

   device->tb0ctl = 0x0;
   device->tb0cctl0 = 0x0;
   device->tb0cctl1 = 0x0;
   device->tb0cctl2 = 0x0;
   device->tb0r = 0;
   device->tb0ccr0 = 0;
   device->tb0ccr1 = 0;
   device->tb0ccr2 = 0;
   device->tb0ex0 = 0x0;
   device->tb0iv = 0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_Timer0_B3_State *s = MSP430FR5739_TIMER0_B3(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_TIMER0_B3, SIZE);
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
    .name          = TYPE_MSP430FR5739_TIMER0_B3,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_Timer0_B3_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_timer0_b3_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_timer0_b3_register_types)
