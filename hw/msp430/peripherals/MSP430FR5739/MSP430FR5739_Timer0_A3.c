// Peripheral name: Timer0_A3

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_TIMER0_A3 "msp430fr5739_timer0_a3"
#define SIZE 48
#define MSP430FR5739_TIMER0_A3(obj) OBJECT_CHECK(MSP430_Timer0_A3_State, (obj), TYPE_MSP430FR5739_TIMER0_A3)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x0340

#define TA0CTL 0
#define TA0CCTL0 2
#define TA0CCTL1 4
#define TA0CCTL2 6
#define TA0R 16
#define TA0CCR0 18
#define TA0CCR1 20
#define TA0CCR2 22
#define TA0IV 46
#define TA0EX0 32

// REGISTERS RESET VALUE
#define REG_TA0CTL_RESET_VALUE 0x0
#define REG_TA0CCTL0_RESET_VALUE 0x0
#define REG_TA0CCTL1_RESET_VALUE 0x0
#define REG_TA0CCTL2_RESET_VALUE 0x0
#define REG_TA0R_RESET_VALUE 0
#define REG_TA0CCR0_RESET_VALUE 0
#define REG_TA0CCR1_RESET_VALUE 0
#define REG_TA0CCR2_RESET_VALUE 0
#define REG_TA0IV_RESET_VALUE 0
#define REG_TA0EX0_RESET_VALUE 0x0

// REGISTERS BITS MASKS
#define REG_TA0CTL_BITS_MASK 0x3f7
#define REG_TA0CCTL0_BITS_MASK 0xfdff
#define REG_TA0CCTL1_BITS_MASK 0xfdff
#define REG_TA0CCTL2_BITS_MASK 0xfdff
#define REG_TA0R_BITS_MASK 0xffff
#define REG_TA0CCR0_BITS_MASK 0xffff
#define REG_TA0CCR1_BITS_MASK 0xffff
#define REG_TA0CCR2_BITS_MASK 0xffff
#define REG_TA0IV_BITS_MASK 0xffff
#define REG_TA0EX0_BITS_MASK 0x7

// FIELDS FOR REGISTER : TA0CTL
#define REG_TA0CTL_TAIFG_BITS_MASK (1 << 0)
#define REG_TA0CTL_TAIE_BITS_MASK (1 << 1)
#define REG_TA0CTL_TACLR_BITS_MASK (1 << 2)
#define REG_TA0CTL_MC_BITS_MASK (3 << 4)
#define REG_TA0CTL_ID_BITS_MASK (3 << 6)
#define REG_TA0CTL_TASSEL_BITS_MASK (3 << 8)

// FIELDS FOR REGISTER : TA0CCTL0
#define REG_TA0CCTL0_CCIFG_BITS_MASK (1 << 0)
#define REG_TA0CCTL0_COV_BITS_MASK (1 << 1)
#define REG_TA0CCTL0_OUT_BITS_MASK (1 << 2)
#define REG_TA0CCTL0_CCI_BITS_MASK (1 << 3)
#define REG_TA0CCTL0_CCIE_BITS_MASK (1 << 4)
#define REG_TA0CCTL0_OUTMOD_BITS_MASK (7 << 5)
#define REG_TA0CCTL0_CAP_BITS_MASK (1 << 8)
#define REG_TA0CCTL0_SCCI_BITS_MASK (1 << 10)
#define REG_TA0CCTL0_SCS_BITS_MASK (1 << 11)
#define REG_TA0CCTL0_CCIS_BITS_MASK (3 << 12)
#define REG_TA0CCTL0_CM_BITS_MASK (3 << 14)

// FIELDS FOR REGISTER : TA0CCTL1
#define REG_TA0CCTL1_CCIFG_BITS_MASK (1 << 0)
#define REG_TA0CCTL1_COV_BITS_MASK (1 << 1)
#define REG_TA0CCTL1_OUT_BITS_MASK (1 << 2)
#define REG_TA0CCTL1_CCI_BITS_MASK (1 << 3)
#define REG_TA0CCTL1_CCIE_BITS_MASK (1 << 4)
#define REG_TA0CCTL1_OUTMOD_BITS_MASK (7 << 5)
#define REG_TA0CCTL1_CAP_BITS_MASK (1 << 8)
#define REG_TA0CCTL1_SCCI_BITS_MASK (1 << 10)
#define REG_TA0CCTL1_SCS_BITS_MASK (1 << 11)
#define REG_TA0CCTL1_CCIS_BITS_MASK (3 << 12)
#define REG_TA0CCTL1_CM_BITS_MASK (3 << 14)

// FIELDS FOR REGISTER : TA0CCTL2
#define REG_TA0CCTL2_CCIFG_BITS_MASK (1 << 0)
#define REG_TA0CCTL2_COV_BITS_MASK (1 << 1)
#define REG_TA0CCTL2_OUT_BITS_MASK (1 << 2)
#define REG_TA0CCTL2_CCI_BITS_MASK (1 << 3)
#define REG_TA0CCTL2_CCIE_BITS_MASK (1 << 4)
#define REG_TA0CCTL2_OUTMOD_BITS_MASK (7 << 5)
#define REG_TA0CCTL2_CAP_BITS_MASK (1 << 8)
#define REG_TA0CCTL2_SCCI_BITS_MASK (1 << 10)
#define REG_TA0CCTL2_SCS_BITS_MASK (1 << 11)
#define REG_TA0CCTL2_CCIS_BITS_MASK (3 << 12)
#define REG_TA0CCTL2_CM_BITS_MASK (3 << 14)

// FIELDS FOR REGISTER : TA0R

// FIELDS FOR REGISTER : TA0CCR0

// FIELDS FOR REGISTER : TA0CCR1

// FIELDS FOR REGISTER : TA0CCR2

// FIELDS FOR REGISTER : TA0IV

// FIELDS FOR REGISTER : TA0EX0
#define REG_TA0EX0_TAIDEX_BITS_MASK (7 << 0)




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t ta0ctl;
   uint32_t ta0cctl0;
   uint32_t ta0cctl1;
   uint32_t ta0cctl2;
   uint32_t ta0r;
   uint32_t ta0ccr0;
   uint32_t ta0ccr1;
   uint32_t ta0ccr2;
   uint32_t ta0iv;
   uint32_t ta0ex0;
} MSP430_Timer0_A3_State;




 // Local functions definitions
// REG: TA0CTL
static uint64_t reg_ta0ctl_read(MSP430_Timer0_A3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TA0CTL_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ta0ctl_write(MSP430_Timer0_A3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TA0CTL_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_TA0CTL_TAIFG_BITS_MASK) != ((*reg) & REG_TA0CTL_TAIFG_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CTL_TAIE_BITS_MASK) != ((*reg) & REG_TA0CTL_TAIE_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CTL_TACLR_BITS_MASK) != ((*reg) & REG_TA0CTL_TACLR_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CTL_MC_BITS_MASK) != ((*reg) & REG_TA0CTL_MC_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CTL_ID_BITS_MASK) != ((*reg) & REG_TA0CTL_ID_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CTL_TASSEL_BITS_MASK) != ((*reg) & REG_TA0CTL_TASSEL_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: TA0CCTL0
static uint64_t reg_ta0cctl0_read(MSP430_Timer0_A3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TA0CCTL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ta0cctl0_write(MSP430_Timer0_A3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TA0CCTL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_TA0CCTL0_CCIFG_BITS_MASK) != ((*reg) & REG_TA0CCTL0_CCIFG_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL0_COV_BITS_MASK) != ((*reg) & REG_TA0CCTL0_COV_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL0_OUT_BITS_MASK) != ((*reg) & REG_TA0CCTL0_OUT_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL0_CCI_BITS_MASK) != ((*reg) & REG_TA0CCTL0_CCI_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL0_CCIE_BITS_MASK) != ((*reg) & REG_TA0CCTL0_CCIE_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL0_OUTMOD_BITS_MASK) != ((*reg) & REG_TA0CCTL0_OUTMOD_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL0_CAP_BITS_MASK) != ((*reg) & REG_TA0CCTL0_CAP_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL0_SCCI_BITS_MASK) != ((*reg) & REG_TA0CCTL0_SCCI_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL0_SCS_BITS_MASK) != ((*reg) & REG_TA0CCTL0_SCS_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL0_CCIS_BITS_MASK) != ((*reg) & REG_TA0CCTL0_CCIS_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL0_CM_BITS_MASK) != ((*reg) & REG_TA0CCTL0_CM_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: TA0CCTL1
static uint64_t reg_ta0cctl1_read(MSP430_Timer0_A3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TA0CCTL1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ta0cctl1_write(MSP430_Timer0_A3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TA0CCTL1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_TA0CCTL1_CCIFG_BITS_MASK) != ((*reg) & REG_TA0CCTL1_CCIFG_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL1_COV_BITS_MASK) != ((*reg) & REG_TA0CCTL1_COV_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL1_OUT_BITS_MASK) != ((*reg) & REG_TA0CCTL1_OUT_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL1_CCI_BITS_MASK) != ((*reg) & REG_TA0CCTL1_CCI_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL1_CCIE_BITS_MASK) != ((*reg) & REG_TA0CCTL1_CCIE_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL1_OUTMOD_BITS_MASK) != ((*reg) & REG_TA0CCTL1_OUTMOD_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL1_CAP_BITS_MASK) != ((*reg) & REG_TA0CCTL1_CAP_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL1_SCCI_BITS_MASK) != ((*reg) & REG_TA0CCTL1_SCCI_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL1_SCS_BITS_MASK) != ((*reg) & REG_TA0CCTL1_SCS_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL1_CCIS_BITS_MASK) != ((*reg) & REG_TA0CCTL1_CCIS_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL1_CM_BITS_MASK) != ((*reg) & REG_TA0CCTL1_CM_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: TA0CCTL2
static uint64_t reg_ta0cctl2_read(MSP430_Timer0_A3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TA0CCTL2_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ta0cctl2_write(MSP430_Timer0_A3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TA0CCTL2_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_TA0CCTL2_CCIFG_BITS_MASK) != ((*reg) & REG_TA0CCTL2_CCIFG_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL2_COV_BITS_MASK) != ((*reg) & REG_TA0CCTL2_COV_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL2_OUT_BITS_MASK) != ((*reg) & REG_TA0CCTL2_OUT_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL2_CCI_BITS_MASK) != ((*reg) & REG_TA0CCTL2_CCI_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL2_CCIE_BITS_MASK) != ((*reg) & REG_TA0CCTL2_CCIE_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL2_OUTMOD_BITS_MASK) != ((*reg) & REG_TA0CCTL2_OUTMOD_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL2_CAP_BITS_MASK) != ((*reg) & REG_TA0CCTL2_CAP_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL2_SCCI_BITS_MASK) != ((*reg) & REG_TA0CCTL2_SCCI_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL2_SCS_BITS_MASK) != ((*reg) & REG_TA0CCTL2_SCS_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL2_CCIS_BITS_MASK) != ((*reg) & REG_TA0CCTL2_CCIS_BITS_MASK)) {
        }

        if ((new_value & REG_TA0CCTL2_CM_BITS_MASK) != ((*reg) & REG_TA0CCTL2_CM_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: TA0R
static uint64_t reg_ta0r_read(MSP430_Timer0_A3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TA0R_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ta0r_write(MSP430_Timer0_A3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TA0R_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: TA0CCR0
static uint64_t reg_ta0ccr0_read(MSP430_Timer0_A3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TA0CCR0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ta0ccr0_write(MSP430_Timer0_A3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TA0CCR0_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: TA0CCR1
static uint64_t reg_ta0ccr1_read(MSP430_Timer0_A3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TA0CCR1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ta0ccr1_write(MSP430_Timer0_A3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TA0CCR1_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: TA0CCR2
static uint64_t reg_ta0ccr2_read(MSP430_Timer0_A3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TA0CCR2_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ta0ccr2_write(MSP430_Timer0_A3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TA0CCR2_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: TA0IV
static uint64_t reg_ta0iv_read(MSP430_Timer0_A3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TA0IV_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ta0iv_write(MSP430_Timer0_A3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TA0IV_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: TA0EX0
static uint64_t reg_ta0ex0_read(MSP430_Timer0_A3_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_TA0EX0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ta0ex0_write(MSP430_Timer0_A3_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_TA0EX0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_TA0EX0_TAIDEX_BITS_MASK) != ((*reg) & REG_TA0EX0_TAIDEX_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_Timer0_A3_State *s = MSP430FR5739_TIMER0_A3(opaque);
    uint64_t retvalue = 0;

    if ((addr >= TA0CTL) && ((addr + size) <= (TA0CTL + 2))) {
        retvalue = reg_ta0ctl_read(s, &s->ta0ctl, (addr - TA0CTL));
    } else if ((addr >= TA0CCTL0) && ((addr + size) <= (TA0CCTL0 + 2))) {
        retvalue = reg_ta0cctl0_read(s, &s->ta0cctl0, (addr - TA0CCTL0));
    } else if ((addr >= TA0CCTL1) && ((addr + size) <= (TA0CCTL1 + 2))) {
        retvalue = reg_ta0cctl1_read(s, &s->ta0cctl1, (addr - TA0CCTL1));
    } else if ((addr >= TA0CCTL2) && ((addr + size) <= (TA0CCTL2 + 2))) {
        retvalue = reg_ta0cctl2_read(s, &s->ta0cctl2, (addr - TA0CCTL2));
    } else if ((addr >= TA0R) && ((addr + size) <= (TA0R + 2))) {
        retvalue = reg_ta0r_read(s, &s->ta0r, (addr - TA0R));
    } else if ((addr >= TA0CCR0) && ((addr + size) <= (TA0CCR0 + 2))) {
        retvalue = reg_ta0ccr0_read(s, &s->ta0ccr0, (addr - TA0CCR0));
    } else if ((addr >= TA0CCR1) && ((addr + size) <= (TA0CCR1 + 2))) {
        retvalue = reg_ta0ccr1_read(s, &s->ta0ccr1, (addr - TA0CCR1));
    } else if ((addr >= TA0CCR2) && ((addr + size) <= (TA0CCR2 + 2))) {
        retvalue = reg_ta0ccr2_read(s, &s->ta0ccr2, (addr - TA0CCR2));
    } else if ((addr >= TA0IV) && ((addr + size) <= (TA0IV + 2))) {
        retvalue = reg_ta0iv_read(s, &s->ta0iv, (addr - TA0IV));
    } else if ((addr >= TA0EX0) && ((addr + size) <= (TA0EX0 + 2))) {
        retvalue = reg_ta0ex0_read(s, &s->ta0ex0, (addr - TA0EX0));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_Timer0_A3_State *s = MSP430FR5739_TIMER0_A3(opaque);

    if ((addr >= TA0CTL) && ((addr + size) <= (TA0CTL + 2))) {
        reg_ta0ctl_write(s, &s->ta0ctl, (addr - TA0CTL), value, size);
    } else if ((addr >= TA0CCTL0) && ((addr + size) <= (TA0CCTL0 + 2))) {
        reg_ta0cctl0_write(s, &s->ta0cctl0, (addr - TA0CCTL0), value, size);
    } else if ((addr >= TA0CCTL1) && ((addr + size) <= (TA0CCTL1 + 2))) {
        reg_ta0cctl1_write(s, &s->ta0cctl1, (addr - TA0CCTL1), value, size);
    } else if ((addr >= TA0CCTL2) && ((addr + size) <= (TA0CCTL2 + 2))) {
        reg_ta0cctl2_write(s, &s->ta0cctl2, (addr - TA0CCTL2), value, size);
    } else if ((addr >= TA0R) && ((addr + size) <= (TA0R + 2))) {
        reg_ta0r_write(s, &s->ta0r, (addr - TA0R), value, size);
    } else if ((addr >= TA0CCR0) && ((addr + size) <= (TA0CCR0 + 2))) {
        reg_ta0ccr0_write(s, &s->ta0ccr0, (addr - TA0CCR0), value, size);
    } else if ((addr >= TA0CCR1) && ((addr + size) <= (TA0CCR1 + 2))) {
        reg_ta0ccr1_write(s, &s->ta0ccr1, (addr - TA0CCR1), value, size);
    } else if ((addr >= TA0CCR2) && ((addr + size) <= (TA0CCR2 + 2))) {
        reg_ta0ccr2_write(s, &s->ta0ccr2, (addr - TA0CCR2), value, size);
    } else if ((addr >= TA0IV) && ((addr + size) <= (TA0IV + 2))) {
        reg_ta0iv_write(s, &s->ta0iv, (addr - TA0IV), value, size);
    } else if ((addr >= TA0EX0) && ((addr + size) <= (TA0EX0 + 2))) {
        reg_ta0ex0_write(s, &s->ta0ex0, (addr - TA0EX0), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_Timer0_A3_State *device = MSP430FR5739_TIMER0_A3(dev);

   device->ta0ctl = 0x0;
   device->ta0cctl0 = 0x0;
   device->ta0cctl1 = 0x0;
   device->ta0cctl2 = 0x0;
   device->ta0r = 0;
   device->ta0ccr0 = 0;
   device->ta0ccr1 = 0;
   device->ta0ccr2 = 0;
   device->ta0iv = 0;
   device->ta0ex0 = 0x0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_Timer0_A3_State *s = MSP430FR5739_TIMER0_A3(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_TIMER0_A3, SIZE);
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
    .name          = TYPE_MSP430FR5739_TIMER0_A3,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_Timer0_A3_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_timer0_a3_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_timer0_a3_register_types)
