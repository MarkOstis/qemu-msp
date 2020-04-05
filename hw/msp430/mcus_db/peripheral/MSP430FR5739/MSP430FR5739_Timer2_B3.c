// Peripheral name: Timer2_B3

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_TIMER2_B3 "msp430fr5739_timer2_b3"
#define SIZE 48
#define MSP430FR5739_TIMER2_B3(obj) OBJECT_CHECK(MSP430_Timer2_B3_State, (obj), TYPE_MSP430FR5739_TIMER2_B3)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x0440

#define TB2CTL 0
#define TB2CCTL0 2
#define TB2CCTL1 4
#define TB2CCTL2 6
#define TB2R 16
#define TB2CCR0 18
#define TB2CCR1 20
#define TB2CCR2 22
#define TB2IV 46
#define TB2EX0 32

// REGISTERS RESET VALUE
#define REG_TB2CTL_RESET_VALUE 0x0
#define REG_TB2CCTL0_RESET_VALUE 0x0
#define REG_TB2CCTL1_RESET_VALUE 0x0
#define REG_TB2CCTL2_RESET_VALUE 0x0
#define REG_TB2R_RESET_VALUE 0
#define REG_TB2CCR0_RESET_VALUE 0
#define REG_TB2CCR1_RESET_VALUE 0
#define REG_TB2CCR2_RESET_VALUE 0
#define REG_TB2IV_RESET_VALUE 0
#define REG_TB2EX0_RESET_VALUE 0x0

// REGISTERS BITS MASKS
#define REG_TB2CTL_BITS_MASK 0x7bf7
#define REG_TB2CCTL0_BITS_MASK 0xffff
#define REG_TB2CCTL1_BITS_MASK 0xffff
#define REG_TB2CCTL2_BITS_MASK 0xffff
#define REG_TB2R_BITS_MASK 0xffff
#define REG_TB2CCR0_BITS_MASK 0xffff
#define REG_TB2CCR1_BITS_MASK 0xffff
#define REG_TB2CCR2_BITS_MASK 0xffff
#define REG_TB2IV_BITS_MASK 0xffff
#define REG_TB2EX0_BITS_MASK 0x7

// FIELDS FOR REGISTER : TB2CTL
#define REG_TB2CTL_TBIFG_BITS_MASK (1 << 0)
#define REG_TB2CTL_TBIE_BITS_MASK (1 << 1)
#define REG_TB2CTL_TBCLR_BITS_MASK (1 << 2)
#define REG_TB2CTL_MC_BITS_MASK (3 << 4)
#define REG_TB2CTL_ID_BITS_MASK (3 << 6)
#define REG_TB2CTL_TBSSEL_BITS_MASK (3 << 8)
#define REG_TB2CTL_CNTL_BITS_MASK (3 << 11)
#define REG_TB2CTL_TBCLGRP_BITS_MASK (3 << 13)

// FIELDS FOR REGISTER : TB2CCTL0
#define REG_TB2CCTL0_CCIFG_BITS_MASK (1 << 0)
#define REG_TB2CCTL0_COV_BITS_MASK (1 << 1)
#define REG_TB2CCTL0_OUT_BITS_MASK (1 << 2)
#define REG_TB2CCTL0_CCI_BITS_MASK (1 << 3)
#define REG_TB2CCTL0_CCIE_BITS_MASK (1 << 4)
#define REG_TB2CCTL0_OUTMOD_BITS_MASK (7 << 5)
#define REG_TB2CCTL0_CAP_BITS_MASK (1 << 8)
#define REG_TB2CCTL0_CLLD_BITS_MASK (3 << 9)
#define REG_TB2CCTL0_SCS_BITS_MASK (1 << 11)
#define REG_TB2CCTL0_CCIS_BITS_MASK (3 << 12)
#define REG_TB2CCTL0_CM_BITS_MASK (3 << 14)

// FIELDS FOR REGISTER : TB2CCTL1
#define REG_TB2CCTL1_CCIFG_BITS_MASK (1 << 0)
#define REG_TB2CCTL1_COV_BITS_MASK (1 << 1)
#define REG_TB2CCTL1_OUT_BITS_MASK (1 << 2)
#define REG_TB2CCTL1_CCI_BITS_MASK (1 << 3)
#define REG_TB2CCTL1_CCIE_BITS_MASK (1 << 4)
#define REG_TB2CCTL1_OUTMOD_BITS_MASK (7 << 5)
#define REG_TB2CCTL1_CAP_BITS_MASK (1 << 8)
#define REG_TB2CCTL1_CLLD_BITS_MASK (3 << 9)
#define REG_TB2CCTL1_SCS_BITS_MASK (1 << 11)
#define REG_TB2CCTL1_CCIS_BITS_MASK (3 << 12)
#define REG_TB2CCTL1_CM_BITS_MASK (3 << 14)

// FIELDS FOR REGISTER : TB2CCTL2
#define REG_TB2CCTL2_CCIFG_BITS_MASK (1 << 0)
#define REG_TB2CCTL2_COV_BITS_MASK (1 << 1)
#define REG_TB2CCTL2_OUT_BITS_MASK (1 << 2)
#define REG_TB2CCTL2_CCI_BITS_MASK (1 << 3)
#define REG_TB2CCTL2_CCIE_BITS_MASK (1 << 4)
#define REG_TB2CCTL2_OUTMOD_BITS_MASK (7 << 5)
#define REG_TB2CCTL2_CAP_BITS_MASK (1 << 8)
#define REG_TB2CCTL2_CLLD_BITS_MASK (3 << 9)
#define REG_TB2CCTL2_SCS_BITS_MASK (1 << 11)
#define REG_TB2CCTL2_CCIS_BITS_MASK (3 << 12)
#define REG_TB2CCTL2_CM_BITS_MASK (3 << 14)

// FIELDS FOR REGISTER : TB2R

// FIELDS FOR REGISTER : TB2CCR0

// FIELDS FOR REGISTER : TB2CCR1

// FIELDS FOR REGISTER : TB2CCR2

// FIELDS FOR REGISTER : TB2IV

// FIELDS FOR REGISTER : TB2EX0
#define REG_TB2EX0_TBIDEX_BITS_MASK (7 << 0)




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t tb2ctl;
   uint32_t tb2cctl0;
   uint32_t tb2cctl1;
   uint32_t tb2cctl2;
   uint32_t tb2r;
   uint32_t tb2ccr0;
   uint32_t tb2ccr1;
   uint32_t tb2ccr2;
   uint32_t tb2iv;
   uint32_t tb2ex0;
} MSP430_Timer2_B3_State;




 // Local functions definitions
// REG: TB2CTL
static uint64_t reg_tb2ctl_read(MSP430_Timer2_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB2CTL_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb2ctl_write(MSP430_Timer2_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB2CTL_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_TB2CTL_TBIFG_BITS_MASK) != ((*reg) & REG_TB2CTL_TBIFG_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CTL_TBIE_BITS_MASK) != ((*reg) & REG_TB2CTL_TBIE_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CTL_TBCLR_BITS_MASK) != ((*reg) & REG_TB2CTL_TBCLR_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CTL_MC_BITS_MASK) != ((*reg) & REG_TB2CTL_MC_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CTL_ID_BITS_MASK) != ((*reg) & REG_TB2CTL_ID_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CTL_TBSSEL_BITS_MASK) != ((*reg) & REG_TB2CTL_TBSSEL_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CTL_CNTL_BITS_MASK) != ((*reg) & REG_TB2CTL_CNTL_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CTL_TBCLGRP_BITS_MASK) != ((*reg) & REG_TB2CTL_TBCLGRP_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: TB2CCTL0
static uint64_t reg_tb2cctl0_read(MSP430_Timer2_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB2CCTL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb2cctl0_write(MSP430_Timer2_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB2CCTL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_TB2CCTL0_CCIFG_BITS_MASK) != ((*reg) & REG_TB2CCTL0_CCIFG_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL0_COV_BITS_MASK) != ((*reg) & REG_TB2CCTL0_COV_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL0_OUT_BITS_MASK) != ((*reg) & REG_TB2CCTL0_OUT_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL0_CCI_BITS_MASK) != ((*reg) & REG_TB2CCTL0_CCI_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL0_CCIE_BITS_MASK) != ((*reg) & REG_TB2CCTL0_CCIE_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL0_OUTMOD_BITS_MASK) != ((*reg) & REG_TB2CCTL0_OUTMOD_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL0_CAP_BITS_MASK) != ((*reg) & REG_TB2CCTL0_CAP_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL0_CLLD_BITS_MASK) != ((*reg) & REG_TB2CCTL0_CLLD_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL0_SCS_BITS_MASK) != ((*reg) & REG_TB2CCTL0_SCS_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL0_CCIS_BITS_MASK) != ((*reg) & REG_TB2CCTL0_CCIS_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL0_CM_BITS_MASK) != ((*reg) & REG_TB2CCTL0_CM_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: TB2CCTL1
static uint64_t reg_tb2cctl1_read(MSP430_Timer2_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB2CCTL1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb2cctl1_write(MSP430_Timer2_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB2CCTL1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_TB2CCTL1_CCIFG_BITS_MASK) != ((*reg) & REG_TB2CCTL1_CCIFG_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL1_COV_BITS_MASK) != ((*reg) & REG_TB2CCTL1_COV_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL1_OUT_BITS_MASK) != ((*reg) & REG_TB2CCTL1_OUT_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL1_CCI_BITS_MASK) != ((*reg) & REG_TB2CCTL1_CCI_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL1_CCIE_BITS_MASK) != ((*reg) & REG_TB2CCTL1_CCIE_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL1_OUTMOD_BITS_MASK) != ((*reg) & REG_TB2CCTL1_OUTMOD_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL1_CAP_BITS_MASK) != ((*reg) & REG_TB2CCTL1_CAP_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL1_CLLD_BITS_MASK) != ((*reg) & REG_TB2CCTL1_CLLD_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL1_SCS_BITS_MASK) != ((*reg) & REG_TB2CCTL1_SCS_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL1_CCIS_BITS_MASK) != ((*reg) & REG_TB2CCTL1_CCIS_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL1_CM_BITS_MASK) != ((*reg) & REG_TB2CCTL1_CM_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: TB2CCTL2
static uint64_t reg_tb2cctl2_read(MSP430_Timer2_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB2CCTL2_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb2cctl2_write(MSP430_Timer2_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB2CCTL2_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_TB2CCTL2_CCIFG_BITS_MASK) != ((*reg) & REG_TB2CCTL2_CCIFG_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL2_COV_BITS_MASK) != ((*reg) & REG_TB2CCTL2_COV_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL2_OUT_BITS_MASK) != ((*reg) & REG_TB2CCTL2_OUT_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL2_CCI_BITS_MASK) != ((*reg) & REG_TB2CCTL2_CCI_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL2_CCIE_BITS_MASK) != ((*reg) & REG_TB2CCTL2_CCIE_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL2_OUTMOD_BITS_MASK) != ((*reg) & REG_TB2CCTL2_OUTMOD_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL2_CAP_BITS_MASK) != ((*reg) & REG_TB2CCTL2_CAP_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL2_CLLD_BITS_MASK) != ((*reg) & REG_TB2CCTL2_CLLD_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL2_SCS_BITS_MASK) != ((*reg) & REG_TB2CCTL2_SCS_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL2_CCIS_BITS_MASK) != ((*reg) & REG_TB2CCTL2_CCIS_BITS_MASK)) {
        }

        if ((new_value & REG_TB2CCTL2_CM_BITS_MASK) != ((*reg) & REG_TB2CCTL2_CM_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: TB2R
static uint64_t reg_tb2r_read(MSP430_Timer2_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB2R_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb2r_write(MSP430_Timer2_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB2R_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: TB2CCR0
static uint64_t reg_tb2ccr0_read(MSP430_Timer2_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB2CCR0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb2ccr0_write(MSP430_Timer2_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB2CCR0_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: TB2CCR1
static uint64_t reg_tb2ccr1_read(MSP430_Timer2_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB2CCR1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb2ccr1_write(MSP430_Timer2_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB2CCR1_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: TB2CCR2
static uint64_t reg_tb2ccr2_read(MSP430_Timer2_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB2CCR2_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb2ccr2_write(MSP430_Timer2_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB2CCR2_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: TB2IV
static uint64_t reg_tb2iv_read(MSP430_Timer2_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB2IV_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb2iv_write(MSP430_Timer2_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB2IV_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: TB2EX0
static uint64_t reg_tb2ex0_read(MSP430_Timer2_B3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TB2EX0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_tb2ex0_write(MSP430_Timer2_B3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TB2EX0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_TB2EX0_TBIDEX_BITS_MASK) != ((*reg) & REG_TB2EX0_TBIDEX_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_Timer2_B3_State *s = MSP430FR5739_TIMER2_B3(opaque);
    uint64_t retvalue = 0;

    if ((addr >= TB2CTL) && ((addr + size) <= (TB2CTL + 2))) {
        retvalue = reg_tb2ctl_read(s, &s->tb2ctl, (addr - TB2CTL));
    } else if ((addr >= TB2CCTL0) && ((addr + size) <= (TB2CCTL0 + 2))) {
        retvalue = reg_tb2cctl0_read(s, &s->tb2cctl0, (addr - TB2CCTL0));
    } else if ((addr >= TB2CCTL1) && ((addr + size) <= (TB2CCTL1 + 2))) {
        retvalue = reg_tb2cctl1_read(s, &s->tb2cctl1, (addr - TB2CCTL1));
    } else if ((addr >= TB2CCTL2) && ((addr + size) <= (TB2CCTL2 + 2))) {
        retvalue = reg_tb2cctl2_read(s, &s->tb2cctl2, (addr - TB2CCTL2));
    } else if ((addr >= TB2R) && ((addr + size) <= (TB2R + 2))) {
        retvalue = reg_tb2r_read(s, &s->tb2r, (addr - TB2R));
    } else if ((addr >= TB2CCR0) && ((addr + size) <= (TB2CCR0 + 2))) {
        retvalue = reg_tb2ccr0_read(s, &s->tb2ccr0, (addr - TB2CCR0));
    } else if ((addr >= TB2CCR1) && ((addr + size) <= (TB2CCR1 + 2))) {
        retvalue = reg_tb2ccr1_read(s, &s->tb2ccr1, (addr - TB2CCR1));
    } else if ((addr >= TB2CCR2) && ((addr + size) <= (TB2CCR2 + 2))) {
        retvalue = reg_tb2ccr2_read(s, &s->tb2ccr2, (addr - TB2CCR2));
    } else if ((addr >= TB2IV) && ((addr + size) <= (TB2IV + 2))) {
        retvalue = reg_tb2iv_read(s, &s->tb2iv, (addr - TB2IV));
    } else if ((addr >= TB2EX0) && ((addr + size) <= (TB2EX0 + 2))) {
        retvalue = reg_tb2ex0_read(s, &s->tb2ex0, (addr - TB2EX0));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_Timer2_B3_State *s = MSP430FR5739_TIMER2_B3(opaque);

    if ((addr >= TB2CTL) && ((addr + size) <= (TB2CTL + 2))) {
        reg_tb2ctl_write(s, &s->tb2ctl, (addr - TB2CTL), value, size);
    } else if ((addr >= TB2CCTL0) && ((addr + size) <= (TB2CCTL0 + 2))) {
        reg_tb2cctl0_write(s, &s->tb2cctl0, (addr - TB2CCTL0), value, size);
    } else if ((addr >= TB2CCTL1) && ((addr + size) <= (TB2CCTL1 + 2))) {
        reg_tb2cctl1_write(s, &s->tb2cctl1, (addr - TB2CCTL1), value, size);
    } else if ((addr >= TB2CCTL2) && ((addr + size) <= (TB2CCTL2 + 2))) {
        reg_tb2cctl2_write(s, &s->tb2cctl2, (addr - TB2CCTL2), value, size);
    } else if ((addr >= TB2R) && ((addr + size) <= (TB2R + 2))) {
        reg_tb2r_write(s, &s->tb2r, (addr - TB2R), value, size);
    } else if ((addr >= TB2CCR0) && ((addr + size) <= (TB2CCR0 + 2))) {
        reg_tb2ccr0_write(s, &s->tb2ccr0, (addr - TB2CCR0), value, size);
    } else if ((addr >= TB2CCR1) && ((addr + size) <= (TB2CCR1 + 2))) {
        reg_tb2ccr1_write(s, &s->tb2ccr1, (addr - TB2CCR1), value, size);
    } else if ((addr >= TB2CCR2) && ((addr + size) <= (TB2CCR2 + 2))) {
        reg_tb2ccr2_write(s, &s->tb2ccr2, (addr - TB2CCR2), value, size);
    } else if ((addr >= TB2IV) && ((addr + size) <= (TB2IV + 2))) {
        reg_tb2iv_write(s, &s->tb2iv, (addr - TB2IV), value, size);
    } else if ((addr >= TB2EX0) && ((addr + size) <= (TB2EX0 + 2))) {
        reg_tb2ex0_write(s, &s->tb2ex0, (addr - TB2EX0), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_Timer2_B3_State *device = MSP430FR5739_TIMER2_B3(dev);

   device->tb2ctl = 0x0;
   device->tb2cctl0 = 0x0;
   device->tb2cctl1 = 0x0;
   device->tb2cctl2 = 0x0;
   device->tb2r = 0;
   device->tb2ccr0 = 0;
   device->tb2ccr1 = 0;
   device->tb2ccr2 = 0;
   device->tb2iv = 0;
   device->tb2ex0 = 0x0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_Timer2_B3_State *s = MSP430FR5739_TIMER2_B3(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_TIMER2_B3, SIZE);
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
    .name          = TYPE_MSP430FR5739_TIMER2_B3,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_Timer2_B3_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_timer2_b3_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_timer2_b3_register_types)
