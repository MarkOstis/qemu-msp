// Peripheral name: USCI_B0__I2C_Mode

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_USCI_B0__I2C_MODE "msp430fr5739_usci_b0__i2c_mode"
#define SIZE 48
#define MSP430FR5739_USCI_B0__I2C_MODE(obj) OBJECT_CHECK(MSP430_USCI_B0__I2C_Mode_State, (obj), TYPE_MSP430FR5739_USCI_B0__I2C_MODE)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x0640

#define UCB0CTLW0 0
#define UCB0CTLW1 2
#define UCB0BRW 6
#define UCB0STATW__I2C 8
#define UCB0TBCNT 10
#define UCB0RXBUF 12
#define UCB0TXBUF 14
#define UCB0I2COA0 20
#define UCB0I2COA1 22
#define UCB0I2COA2 24
#define UCB0I2COA3 26
#define UCB0ADDRX 28
#define UCB0ADDMASK 30
#define UCB0I2CSA 32
#define UCB0IE__I2C 42
#define UCB0IFG__I2C 44
#define UCB0IV 46

// REGISTERS RESET VALUE
#define REG_UCB0CTLW0_RESET_VALUE 0x0
#define REG_UCB0CTLW1_RESET_VALUE 0x0
#define REG_UCB0BRW_RESET_VALUE 0
#define REG_UCB0STATW__I2C_RESET_VALUE 0x0
#define REG_UCB0TBCNT_RESET_VALUE 0
#define REG_UCB0RXBUF_RESET_VALUE 0
#define REG_UCB0TXBUF_RESET_VALUE 0
#define REG_UCB0I2COA0_RESET_VALUE 0x0
#define REG_UCB0I2COA1_RESET_VALUE 0x0
#define REG_UCB0I2COA2_RESET_VALUE 0x0
#define REG_UCB0I2COA3_RESET_VALUE 0x0
#define REG_UCB0ADDRX_RESET_VALUE 0x0
#define REG_UCB0ADDMASK_RESET_VALUE 0x0
#define REG_UCB0I2CSA_RESET_VALUE 0x0
#define REG_UCB0IE__I2C_RESET_VALUE 0x0
#define REG_UCB0IFG__I2C_RESET_VALUE 0x0
#define REG_UCB0IV_RESET_VALUE 0

// REGISTERS BITS MASKS
#define REG_UCB0CTLW0_BITS_MASK 0xeeff
#define REG_UCB0CTLW1_BITS_MASK 0x1ff
#define REG_UCB0BRW_BITS_MASK 0xffff
#define REG_UCB0STATW__I2C_BITS_MASK 0xff70
#define REG_UCB0TBCNT_BITS_MASK 0xffff
#define REG_UCB0RXBUF_BITS_MASK 0xffff
#define REG_UCB0TXBUF_BITS_MASK 0xffff
#define REG_UCB0I2COA0_BITS_MASK 0x87ff
#define REG_UCB0I2COA1_BITS_MASK 0x7ff
#define REG_UCB0I2COA2_BITS_MASK 0x7ff
#define REG_UCB0I2COA3_BITS_MASK 0x7ff
#define REG_UCB0ADDRX_BITS_MASK 0x3ff
#define REG_UCB0ADDMASK_BITS_MASK 0x3ff
#define REG_UCB0I2CSA_BITS_MASK 0x3ff
#define REG_UCB0IE__I2C_BITS_MASK 0x7fff
#define REG_UCB0IFG__I2C_BITS_MASK 0x7fff
#define REG_UCB0IV_BITS_MASK 0xffff

// FIELDS FOR REGISTER : UCB0CTLW0
#define REG_UCB0CTLW0_UCSWRST_BITS_MASK (1 << 0)
#define REG_UCB0CTLW0_UCTXSTT_BITS_MASK (1 << 1)
#define REG_UCB0CTLW0_UCTXSTP_BITS_MASK (1 << 2)
#define REG_UCB0CTLW0_UCTXNACK_BITS_MASK (1 << 3)
#define REG_UCB0CTLW0_UCTR_BITS_MASK (1 << 4)
#define REG_UCB0CTLW0_UCTXACK_BITS_MASK (1 << 5)
#define REG_UCB0CTLW0_UCSSEL_BITS_MASK (3 << 6)
#define REG_UCB0CTLW0_UCMODE_BITS_MASK (3 << 9)
#define REG_UCB0CTLW0_UCMST_BITS_MASK (1 << 11)
#define REG_UCB0CTLW0_UCMM_BITS_MASK (1 << 13)
#define REG_UCB0CTLW0_UCSLA10_BITS_MASK (1 << 14)
#define REG_UCB0CTLW0_UCA10_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : UCB0CTL0

// FIELDS FOR REGISTER : UCB0CTL1

// FIELDS FOR REGISTER : UCB0CTLW1
#define REG_UCB0CTLW1_UCGLIT_BITS_MASK (3 << 0)
#define REG_UCB0CTLW1_UCASTP_BITS_MASK (3 << 2)
#define REG_UCB0CTLW1_UCSWACK_BITS_MASK (1 << 4)
#define REG_UCB0CTLW1_UCSTPNACK_BITS_MASK (1 << 5)
#define REG_UCB0CTLW1_UCCLTO_BITS_MASK (3 << 6)
#define REG_UCB0CTLW1_UCETXINT_BITS_MASK (1 << 8)

// FIELDS FOR REGISTER : UCB0BRW

// FIELDS FOR REGISTER : UCB0BR0

// FIELDS FOR REGISTER : UCB0BR1

// FIELDS FOR REGISTER : UCB0STATW

// FIELDS FOR REGISTER : UCB0STATW__I2C
#define REG_UCB0STATW__I2C_UCBBUSY_BITS_MASK (1 << 4)
#define REG_UCB0STATW__I2C_UCGC_BITS_MASK (1 << 5)
#define REG_UCB0STATW__I2C_UCSCLLOW_BITS_MASK (1 << 6)
#define REG_UCB0STATW__I2C_UCBCNT0_BITS_MASK (1 << 8)
#define REG_UCB0STATW__I2C_UCBCNT1_BITS_MASK (1 << 9)
#define REG_UCB0STATW__I2C_UCBCNT2_BITS_MASK (1 << 10)
#define REG_UCB0STATW__I2C_UCBCNT3_BITS_MASK (1 << 11)
#define REG_UCB0STATW__I2C_UCBCNT4_BITS_MASK (1 << 12)
#define REG_UCB0STATW__I2C_UCBCNT5_BITS_MASK (1 << 13)
#define REG_UCB0STATW__I2C_UCBCNT6_BITS_MASK (1 << 14)
#define REG_UCB0STATW__I2C_UCBCNT7_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : UCB0STAT__I2C
#define REG_UCB0STAT__I2C_UCBBUSY_BITS_MASK (1 << 4)
#define REG_UCB0STAT__I2C_UCGC_BITS_MASK (1 << 5)
#define REG_UCB0STAT__I2C_UCSCLLOW_BITS_MASK (1 << 6)

// FIELDS FOR REGISTER : UCB0BCNT__I2C
#define REG_UCB0BCNT__I2C_UCBCNT0_BITS_MASK (1 << 8)
#define REG_UCB0BCNT__I2C_UCBCNT1_BITS_MASK (1 << 9)
#define REG_UCB0BCNT__I2C_UCBCNT2_BITS_MASK (1 << 10)
#define REG_UCB0BCNT__I2C_UCBCNT3_BITS_MASK (1 << 11)
#define REG_UCB0BCNT__I2C_UCBCNT4_BITS_MASK (1 << 12)
#define REG_UCB0BCNT__I2C_UCBCNT5_BITS_MASK (1 << 13)
#define REG_UCB0BCNT__I2C_UCBCNT6_BITS_MASK (1 << 14)
#define REG_UCB0BCNT__I2C_UCBCNT7_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : UCB0TBCNT

// FIELDS FOR REGISTER : UCB0RXBUF

// FIELDS FOR REGISTER : UCB0TXBUF

// FIELDS FOR REGISTER : UCB0I2COA0
#define REG_UCB0I2COA0_UCOA0_BITS_MASK (1 << 0)
#define REG_UCB0I2COA0_UCOA1_BITS_MASK (1 << 1)
#define REG_UCB0I2COA0_UCOA2_BITS_MASK (1 << 2)
#define REG_UCB0I2COA0_UCOA3_BITS_MASK (1 << 3)
#define REG_UCB0I2COA0_UCOA4_BITS_MASK (1 << 4)
#define REG_UCB0I2COA0_UCOA5_BITS_MASK (1 << 5)
#define REG_UCB0I2COA0_UCOA6_BITS_MASK (1 << 6)
#define REG_UCB0I2COA0_UCOA7_BITS_MASK (1 << 7)
#define REG_UCB0I2COA0_UCOA8_BITS_MASK (1 << 8)
#define REG_UCB0I2COA0_UCOA9_BITS_MASK (1 << 9)
#define REG_UCB0I2COA0_UCOAEN_BITS_MASK (1 << 10)
#define REG_UCB0I2COA0_UCGCEN_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : UCB0I2COA1
#define REG_UCB0I2COA1_UCOA0_BITS_MASK (1 << 0)
#define REG_UCB0I2COA1_UCOA1_BITS_MASK (1 << 1)
#define REG_UCB0I2COA1_UCOA2_BITS_MASK (1 << 2)
#define REG_UCB0I2COA1_UCOA3_BITS_MASK (1 << 3)
#define REG_UCB0I2COA1_UCOA4_BITS_MASK (1 << 4)
#define REG_UCB0I2COA1_UCOA5_BITS_MASK (1 << 5)
#define REG_UCB0I2COA1_UCOA6_BITS_MASK (1 << 6)
#define REG_UCB0I2COA1_UCOA7_BITS_MASK (1 << 7)
#define REG_UCB0I2COA1_UCOA8_BITS_MASK (1 << 8)
#define REG_UCB0I2COA1_UCOA9_BITS_MASK (1 << 9)
#define REG_UCB0I2COA1_UCOAEN_BITS_MASK (1 << 10)

// FIELDS FOR REGISTER : UCB0I2COA2
#define REG_UCB0I2COA2_UCOA0_BITS_MASK (1 << 0)
#define REG_UCB0I2COA2_UCOA1_BITS_MASK (1 << 1)
#define REG_UCB0I2COA2_UCOA2_BITS_MASK (1 << 2)
#define REG_UCB0I2COA2_UCOA3_BITS_MASK (1 << 3)
#define REG_UCB0I2COA2_UCOA4_BITS_MASK (1 << 4)
#define REG_UCB0I2COA2_UCOA5_BITS_MASK (1 << 5)
#define REG_UCB0I2COA2_UCOA6_BITS_MASK (1 << 6)
#define REG_UCB0I2COA2_UCOA7_BITS_MASK (1 << 7)
#define REG_UCB0I2COA2_UCOA8_BITS_MASK (1 << 8)
#define REG_UCB0I2COA2_UCOA9_BITS_MASK (1 << 9)
#define REG_UCB0I2COA2_UCOAEN_BITS_MASK (1 << 10)

// FIELDS FOR REGISTER : UCB0I2COA3
#define REG_UCB0I2COA3_UCOA0_BITS_MASK (1 << 0)
#define REG_UCB0I2COA3_UCOA1_BITS_MASK (1 << 1)
#define REG_UCB0I2COA3_UCOA2_BITS_MASK (1 << 2)
#define REG_UCB0I2COA3_UCOA3_BITS_MASK (1 << 3)
#define REG_UCB0I2COA3_UCOA4_BITS_MASK (1 << 4)
#define REG_UCB0I2COA3_UCOA5_BITS_MASK (1 << 5)
#define REG_UCB0I2COA3_UCOA6_BITS_MASK (1 << 6)
#define REG_UCB0I2COA3_UCOA7_BITS_MASK (1 << 7)
#define REG_UCB0I2COA3_UCOA8_BITS_MASK (1 << 8)
#define REG_UCB0I2COA3_UCOA9_BITS_MASK (1 << 9)
#define REG_UCB0I2COA3_UCOAEN_BITS_MASK (1 << 10)

// FIELDS FOR REGISTER : UCB0ADDRX
#define REG_UCB0ADDRX_UCADDRX0_BITS_MASK (1 << 0)
#define REG_UCB0ADDRX_UCADDRX1_BITS_MASK (1 << 1)
#define REG_UCB0ADDRX_UCADDRX2_BITS_MASK (1 << 2)
#define REG_UCB0ADDRX_UCADDRX3_BITS_MASK (1 << 3)
#define REG_UCB0ADDRX_UCADDRX4_BITS_MASK (1 << 4)
#define REG_UCB0ADDRX_UCADDRX5_BITS_MASK (1 << 5)
#define REG_UCB0ADDRX_UCADDRX6_BITS_MASK (1 << 6)
#define REG_UCB0ADDRX_UCADDRX7_BITS_MASK (1 << 7)
#define REG_UCB0ADDRX_UCADDRX8_BITS_MASK (1 << 8)
#define REG_UCB0ADDRX_UCADDRX9_BITS_MASK (1 << 9)

// FIELDS FOR REGISTER : UCB0ADDMASK
#define REG_UCB0ADDMASK_UCADDMASK0_BITS_MASK (1 << 0)
#define REG_UCB0ADDMASK_UCADDMASK1_BITS_MASK (1 << 1)
#define REG_UCB0ADDMASK_UCADDMASK2_BITS_MASK (1 << 2)
#define REG_UCB0ADDMASK_UCADDMASK3_BITS_MASK (1 << 3)
#define REG_UCB0ADDMASK_UCADDMASK4_BITS_MASK (1 << 4)
#define REG_UCB0ADDMASK_UCADDMASK5_BITS_MASK (1 << 5)
#define REG_UCB0ADDMASK_UCADDMASK6_BITS_MASK (1 << 6)
#define REG_UCB0ADDMASK_UCADDMASK7_BITS_MASK (1 << 7)
#define REG_UCB0ADDMASK_UCADDMASK8_BITS_MASK (1 << 8)
#define REG_UCB0ADDMASK_UCADDMASK9_BITS_MASK (1 << 9)

// FIELDS FOR REGISTER : UCB0I2CSA
#define REG_UCB0I2CSA_UCSA0_BITS_MASK (1 << 0)
#define REG_UCB0I2CSA_UCSA1_BITS_MASK (1 << 1)
#define REG_UCB0I2CSA_UCSA2_BITS_MASK (1 << 2)
#define REG_UCB0I2CSA_UCSA3_BITS_MASK (1 << 3)
#define REG_UCB0I2CSA_UCSA4_BITS_MASK (1 << 4)
#define REG_UCB0I2CSA_UCSA5_BITS_MASK (1 << 5)
#define REG_UCB0I2CSA_UCSA6_BITS_MASK (1 << 6)
#define REG_UCB0I2CSA_UCSA7_BITS_MASK (1 << 7)
#define REG_UCB0I2CSA_UCSA8_BITS_MASK (1 << 8)
#define REG_UCB0I2CSA_UCSA9_BITS_MASK (1 << 9)

// FIELDS FOR REGISTER : UCB0IE

// FIELDS FOR REGISTER : UCB0IFG

// FIELDS FOR REGISTER : UCB0IE__I2C
#define REG_UCB0IE__I2C_UCRXIE0_BITS_MASK (1 << 0)
#define REG_UCB0IE__I2C_UCTXIE0_BITS_MASK (1 << 1)
#define REG_UCB0IE__I2C_UCSTTIE_BITS_MASK (1 << 2)
#define REG_UCB0IE__I2C_UCSTPIE_BITS_MASK (1 << 3)
#define REG_UCB0IE__I2C_UCALIE_BITS_MASK (1 << 4)
#define REG_UCB0IE__I2C_UCNACKIE_BITS_MASK (1 << 5)
#define REG_UCB0IE__I2C_UCBCNTIE_BITS_MASK (1 << 6)
#define REG_UCB0IE__I2C_UCCLTOIE_BITS_MASK (1 << 7)
#define REG_UCB0IE__I2C_UCRXIE1_BITS_MASK (1 << 8)
#define REG_UCB0IE__I2C_UCTXIE1_BITS_MASK (1 << 9)
#define REG_UCB0IE__I2C_UCRXIE2_BITS_MASK (1 << 10)
#define REG_UCB0IE__I2C_UCTXIE2_BITS_MASK (1 << 11)
#define REG_UCB0IE__I2C_UCRXIE3_BITS_MASK (1 << 12)
#define REG_UCB0IE__I2C_UCTXIE3_BITS_MASK (1 << 13)
#define REG_UCB0IE__I2C_UCBIT9IE_BITS_MASK (1 << 14)

// FIELDS FOR REGISTER : UCB0IFG__I2C
#define REG_UCB0IFG__I2C_UCRXIFG0_BITS_MASK (1 << 0)
#define REG_UCB0IFG__I2C_UCTXIFG0_BITS_MASK (1 << 1)
#define REG_UCB0IFG__I2C_UCSTTIFG_BITS_MASK (1 << 2)
#define REG_UCB0IFG__I2C_UCSTPIFG_BITS_MASK (1 << 3)
#define REG_UCB0IFG__I2C_UCALIFG_BITS_MASK (1 << 4)
#define REG_UCB0IFG__I2C_UCNACKIFG_BITS_MASK (1 << 5)
#define REG_UCB0IFG__I2C_UCBCNTIFG_BITS_MASK (1 << 6)
#define REG_UCB0IFG__I2C_UCCLTOIFG_BITS_MASK (1 << 7)
#define REG_UCB0IFG__I2C_UCRXIFG1_BITS_MASK (1 << 8)
#define REG_UCB0IFG__I2C_UCTXIFG1_BITS_MASK (1 << 9)
#define REG_UCB0IFG__I2C_UCRXIFG2_BITS_MASK (1 << 10)
#define REG_UCB0IFG__I2C_UCTXIFG2_BITS_MASK (1 << 11)
#define REG_UCB0IFG__I2C_UCRXIFG3_BITS_MASK (1 << 12)
#define REG_UCB0IFG__I2C_UCTXIFG3_BITS_MASK (1 << 13)
#define REG_UCB0IFG__I2C_UCBIT9IFG_BITS_MASK (1 << 14)

// FIELDS FOR REGISTER : UCB0IV




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t ucb0ctlw0;
   uint32_t ucb0ctlw1;
   uint32_t ucb0brw;
   uint32_t ucb0statw__i2c;
   uint32_t ucb0tbcnt;
   uint32_t ucb0rxbuf;
   uint32_t ucb0txbuf;
   uint32_t ucb0i2coa0;
   uint32_t ucb0i2coa1;
   uint32_t ucb0i2coa2;
   uint32_t ucb0i2coa3;
   uint32_t ucb0addrx;
   uint32_t ucb0addmask;
   uint32_t ucb0i2csa;
   uint32_t ucb0ie__i2c;
   uint32_t ucb0ifg__i2c;
   uint32_t ucb0iv;
} MSP430_USCI_B0__I2C_Mode_State;




 // Local functions definitions
// REG: UCB0CTLW0
static uint64_t reg_ucb0ctlw0_read(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCB0CTLW0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ucb0ctlw0_write(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCB0CTLW0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCB0CTLW0_UCSWRST_BITS_MASK) != ((*reg) & REG_UCB0CTLW0_UCSWRST_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0CTLW0_UCTXSTT_BITS_MASK) != ((*reg) & REG_UCB0CTLW0_UCTXSTT_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0CTLW0_UCTXSTP_BITS_MASK) != ((*reg) & REG_UCB0CTLW0_UCTXSTP_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0CTLW0_UCTXNACK_BITS_MASK) != ((*reg) & REG_UCB0CTLW0_UCTXNACK_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0CTLW0_UCTR_BITS_MASK) != ((*reg) & REG_UCB0CTLW0_UCTR_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0CTLW0_UCTXACK_BITS_MASK) != ((*reg) & REG_UCB0CTLW0_UCTXACK_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0CTLW0_UCSSEL_BITS_MASK) != ((*reg) & REG_UCB0CTLW0_UCSSEL_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0CTLW0_UCMODE_BITS_MASK) != ((*reg) & REG_UCB0CTLW0_UCMODE_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0CTLW0_UCMST_BITS_MASK) != ((*reg) & REG_UCB0CTLW0_UCMST_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0CTLW0_UCMM_BITS_MASK) != ((*reg) & REG_UCB0CTLW0_UCMM_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0CTLW0_UCSLA10_BITS_MASK) != ((*reg) & REG_UCB0CTLW0_UCSLA10_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0CTLW0_UCA10_BITS_MASK) != ((*reg) & REG_UCB0CTLW0_UCA10_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCB0CTLW1
static uint64_t reg_ucb0ctlw1_read(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCB0CTLW1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ucb0ctlw1_write(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCB0CTLW1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCB0CTLW1_UCGLIT_BITS_MASK) != ((*reg) & REG_UCB0CTLW1_UCGLIT_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0CTLW1_UCASTP_BITS_MASK) != ((*reg) & REG_UCB0CTLW1_UCASTP_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0CTLW1_UCSWACK_BITS_MASK) != ((*reg) & REG_UCB0CTLW1_UCSWACK_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0CTLW1_UCSTPNACK_BITS_MASK) != ((*reg) & REG_UCB0CTLW1_UCSTPNACK_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0CTLW1_UCCLTO_BITS_MASK) != ((*reg) & REG_UCB0CTLW1_UCCLTO_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0CTLW1_UCETXINT_BITS_MASK) != ((*reg) & REG_UCB0CTLW1_UCETXINT_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCB0BRW
static uint64_t reg_ucb0brw_read(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCB0BRW_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ucb0brw_write(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCB0BRW_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: UCB0STATW__I2C
static uint64_t reg_ucb0statw__i2c_read(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCB0STATW__I2C_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ucb0statw__i2c_write(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCB0STATW__I2C_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCB0STATW__I2C_UCBBUSY_BITS_MASK) != ((*reg) & REG_UCB0STATW__I2C_UCBBUSY_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0STATW__I2C_UCGC_BITS_MASK) != ((*reg) & REG_UCB0STATW__I2C_UCGC_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0STATW__I2C_UCSCLLOW_BITS_MASK) != ((*reg) & REG_UCB0STATW__I2C_UCSCLLOW_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0STATW__I2C_UCBCNT0_BITS_MASK) != ((*reg) & REG_UCB0STATW__I2C_UCBCNT0_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0STATW__I2C_UCBCNT1_BITS_MASK) != ((*reg) & REG_UCB0STATW__I2C_UCBCNT1_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0STATW__I2C_UCBCNT2_BITS_MASK) != ((*reg) & REG_UCB0STATW__I2C_UCBCNT2_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0STATW__I2C_UCBCNT3_BITS_MASK) != ((*reg) & REG_UCB0STATW__I2C_UCBCNT3_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0STATW__I2C_UCBCNT4_BITS_MASK) != ((*reg) & REG_UCB0STATW__I2C_UCBCNT4_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0STATW__I2C_UCBCNT5_BITS_MASK) != ((*reg) & REG_UCB0STATW__I2C_UCBCNT5_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0STATW__I2C_UCBCNT6_BITS_MASK) != ((*reg) & REG_UCB0STATW__I2C_UCBCNT6_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0STATW__I2C_UCBCNT7_BITS_MASK) != ((*reg) & REG_UCB0STATW__I2C_UCBCNT7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCB0TBCNT
static uint64_t reg_ucb0tbcnt_read(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCB0TBCNT_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ucb0tbcnt_write(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCB0TBCNT_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: UCB0RXBUF
static uint64_t reg_ucb0rxbuf_read(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCB0RXBUF_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ucb0rxbuf_write(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCB0RXBUF_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: UCB0TXBUF
static uint64_t reg_ucb0txbuf_read(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCB0TXBUF_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ucb0txbuf_write(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCB0TXBUF_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: UCB0I2COA0
static uint64_t reg_ucb0i2coa0_read(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCB0I2COA0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ucb0i2coa0_write(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCB0I2COA0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCB0I2COA0_UCOA0_BITS_MASK) != ((*reg) & REG_UCB0I2COA0_UCOA0_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA0_UCOA1_BITS_MASK) != ((*reg) & REG_UCB0I2COA0_UCOA1_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA0_UCOA2_BITS_MASK) != ((*reg) & REG_UCB0I2COA0_UCOA2_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA0_UCOA3_BITS_MASK) != ((*reg) & REG_UCB0I2COA0_UCOA3_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA0_UCOA4_BITS_MASK) != ((*reg) & REG_UCB0I2COA0_UCOA4_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA0_UCOA5_BITS_MASK) != ((*reg) & REG_UCB0I2COA0_UCOA5_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA0_UCOA6_BITS_MASK) != ((*reg) & REG_UCB0I2COA0_UCOA6_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA0_UCOA7_BITS_MASK) != ((*reg) & REG_UCB0I2COA0_UCOA7_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA0_UCOA8_BITS_MASK) != ((*reg) & REG_UCB0I2COA0_UCOA8_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA0_UCOA9_BITS_MASK) != ((*reg) & REG_UCB0I2COA0_UCOA9_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA0_UCOAEN_BITS_MASK) != ((*reg) & REG_UCB0I2COA0_UCOAEN_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA0_UCGCEN_BITS_MASK) != ((*reg) & REG_UCB0I2COA0_UCGCEN_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCB0I2COA1
static uint64_t reg_ucb0i2coa1_read(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCB0I2COA1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ucb0i2coa1_write(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCB0I2COA1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCB0I2COA1_UCOA0_BITS_MASK) != ((*reg) & REG_UCB0I2COA1_UCOA0_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA1_UCOA1_BITS_MASK) != ((*reg) & REG_UCB0I2COA1_UCOA1_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA1_UCOA2_BITS_MASK) != ((*reg) & REG_UCB0I2COA1_UCOA2_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA1_UCOA3_BITS_MASK) != ((*reg) & REG_UCB0I2COA1_UCOA3_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA1_UCOA4_BITS_MASK) != ((*reg) & REG_UCB0I2COA1_UCOA4_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA1_UCOA5_BITS_MASK) != ((*reg) & REG_UCB0I2COA1_UCOA5_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA1_UCOA6_BITS_MASK) != ((*reg) & REG_UCB0I2COA1_UCOA6_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA1_UCOA7_BITS_MASK) != ((*reg) & REG_UCB0I2COA1_UCOA7_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA1_UCOA8_BITS_MASK) != ((*reg) & REG_UCB0I2COA1_UCOA8_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA1_UCOA9_BITS_MASK) != ((*reg) & REG_UCB0I2COA1_UCOA9_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA1_UCOAEN_BITS_MASK) != ((*reg) & REG_UCB0I2COA1_UCOAEN_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCB0I2COA2
static uint64_t reg_ucb0i2coa2_read(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCB0I2COA2_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ucb0i2coa2_write(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCB0I2COA2_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCB0I2COA2_UCOA0_BITS_MASK) != ((*reg) & REG_UCB0I2COA2_UCOA0_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA2_UCOA1_BITS_MASK) != ((*reg) & REG_UCB0I2COA2_UCOA1_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA2_UCOA2_BITS_MASK) != ((*reg) & REG_UCB0I2COA2_UCOA2_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA2_UCOA3_BITS_MASK) != ((*reg) & REG_UCB0I2COA2_UCOA3_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA2_UCOA4_BITS_MASK) != ((*reg) & REG_UCB0I2COA2_UCOA4_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA2_UCOA5_BITS_MASK) != ((*reg) & REG_UCB0I2COA2_UCOA5_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA2_UCOA6_BITS_MASK) != ((*reg) & REG_UCB0I2COA2_UCOA6_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA2_UCOA7_BITS_MASK) != ((*reg) & REG_UCB0I2COA2_UCOA7_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA2_UCOA8_BITS_MASK) != ((*reg) & REG_UCB0I2COA2_UCOA8_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA2_UCOA9_BITS_MASK) != ((*reg) & REG_UCB0I2COA2_UCOA9_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA2_UCOAEN_BITS_MASK) != ((*reg) & REG_UCB0I2COA2_UCOAEN_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCB0I2COA3
static uint64_t reg_ucb0i2coa3_read(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCB0I2COA3_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ucb0i2coa3_write(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCB0I2COA3_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCB0I2COA3_UCOA0_BITS_MASK) != ((*reg) & REG_UCB0I2COA3_UCOA0_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA3_UCOA1_BITS_MASK) != ((*reg) & REG_UCB0I2COA3_UCOA1_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA3_UCOA2_BITS_MASK) != ((*reg) & REG_UCB0I2COA3_UCOA2_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA3_UCOA3_BITS_MASK) != ((*reg) & REG_UCB0I2COA3_UCOA3_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA3_UCOA4_BITS_MASK) != ((*reg) & REG_UCB0I2COA3_UCOA4_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA3_UCOA5_BITS_MASK) != ((*reg) & REG_UCB0I2COA3_UCOA5_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA3_UCOA6_BITS_MASK) != ((*reg) & REG_UCB0I2COA3_UCOA6_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA3_UCOA7_BITS_MASK) != ((*reg) & REG_UCB0I2COA3_UCOA7_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA3_UCOA8_BITS_MASK) != ((*reg) & REG_UCB0I2COA3_UCOA8_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA3_UCOA9_BITS_MASK) != ((*reg) & REG_UCB0I2COA3_UCOA9_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2COA3_UCOAEN_BITS_MASK) != ((*reg) & REG_UCB0I2COA3_UCOAEN_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCB0ADDRX
static uint64_t reg_ucb0addrx_read(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCB0ADDRX_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ucb0addrx_write(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCB0ADDRX_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCB0ADDRX_UCADDRX0_BITS_MASK) != ((*reg) & REG_UCB0ADDRX_UCADDRX0_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0ADDRX_UCADDRX1_BITS_MASK) != ((*reg) & REG_UCB0ADDRX_UCADDRX1_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0ADDRX_UCADDRX2_BITS_MASK) != ((*reg) & REG_UCB0ADDRX_UCADDRX2_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0ADDRX_UCADDRX3_BITS_MASK) != ((*reg) & REG_UCB0ADDRX_UCADDRX3_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0ADDRX_UCADDRX4_BITS_MASK) != ((*reg) & REG_UCB0ADDRX_UCADDRX4_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0ADDRX_UCADDRX5_BITS_MASK) != ((*reg) & REG_UCB0ADDRX_UCADDRX5_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0ADDRX_UCADDRX6_BITS_MASK) != ((*reg) & REG_UCB0ADDRX_UCADDRX6_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0ADDRX_UCADDRX7_BITS_MASK) != ((*reg) & REG_UCB0ADDRX_UCADDRX7_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0ADDRX_UCADDRX8_BITS_MASK) != ((*reg) & REG_UCB0ADDRX_UCADDRX8_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0ADDRX_UCADDRX9_BITS_MASK) != ((*reg) & REG_UCB0ADDRX_UCADDRX9_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCB0ADDMASK
static uint64_t reg_ucb0addmask_read(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCB0ADDMASK_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ucb0addmask_write(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCB0ADDMASK_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCB0ADDMASK_UCADDMASK0_BITS_MASK) != ((*reg) & REG_UCB0ADDMASK_UCADDMASK0_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0ADDMASK_UCADDMASK1_BITS_MASK) != ((*reg) & REG_UCB0ADDMASK_UCADDMASK1_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0ADDMASK_UCADDMASK2_BITS_MASK) != ((*reg) & REG_UCB0ADDMASK_UCADDMASK2_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0ADDMASK_UCADDMASK3_BITS_MASK) != ((*reg) & REG_UCB0ADDMASK_UCADDMASK3_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0ADDMASK_UCADDMASK4_BITS_MASK) != ((*reg) & REG_UCB0ADDMASK_UCADDMASK4_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0ADDMASK_UCADDMASK5_BITS_MASK) != ((*reg) & REG_UCB0ADDMASK_UCADDMASK5_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0ADDMASK_UCADDMASK6_BITS_MASK) != ((*reg) & REG_UCB0ADDMASK_UCADDMASK6_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0ADDMASK_UCADDMASK7_BITS_MASK) != ((*reg) & REG_UCB0ADDMASK_UCADDMASK7_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0ADDMASK_UCADDMASK8_BITS_MASK) != ((*reg) & REG_UCB0ADDMASK_UCADDMASK8_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0ADDMASK_UCADDMASK9_BITS_MASK) != ((*reg) & REG_UCB0ADDMASK_UCADDMASK9_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCB0I2CSA
static uint64_t reg_ucb0i2csa_read(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCB0I2CSA_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ucb0i2csa_write(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCB0I2CSA_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCB0I2CSA_UCSA0_BITS_MASK) != ((*reg) & REG_UCB0I2CSA_UCSA0_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2CSA_UCSA1_BITS_MASK) != ((*reg) & REG_UCB0I2CSA_UCSA1_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2CSA_UCSA2_BITS_MASK) != ((*reg) & REG_UCB0I2CSA_UCSA2_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2CSA_UCSA3_BITS_MASK) != ((*reg) & REG_UCB0I2CSA_UCSA3_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2CSA_UCSA4_BITS_MASK) != ((*reg) & REG_UCB0I2CSA_UCSA4_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2CSA_UCSA5_BITS_MASK) != ((*reg) & REG_UCB0I2CSA_UCSA5_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2CSA_UCSA6_BITS_MASK) != ((*reg) & REG_UCB0I2CSA_UCSA6_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2CSA_UCSA7_BITS_MASK) != ((*reg) & REG_UCB0I2CSA_UCSA7_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2CSA_UCSA8_BITS_MASK) != ((*reg) & REG_UCB0I2CSA_UCSA8_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0I2CSA_UCSA9_BITS_MASK) != ((*reg) & REG_UCB0I2CSA_UCSA9_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCB0IE__I2C
static uint64_t reg_ucb0ie__i2c_read(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCB0IE__I2C_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ucb0ie__i2c_write(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCB0IE__I2C_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCB0IE__I2C_UCRXIE0_BITS_MASK) != ((*reg) & REG_UCB0IE__I2C_UCRXIE0_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IE__I2C_UCTXIE0_BITS_MASK) != ((*reg) & REG_UCB0IE__I2C_UCTXIE0_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IE__I2C_UCSTTIE_BITS_MASK) != ((*reg) & REG_UCB0IE__I2C_UCSTTIE_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IE__I2C_UCSTPIE_BITS_MASK) != ((*reg) & REG_UCB0IE__I2C_UCSTPIE_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IE__I2C_UCALIE_BITS_MASK) != ((*reg) & REG_UCB0IE__I2C_UCALIE_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IE__I2C_UCNACKIE_BITS_MASK) != ((*reg) & REG_UCB0IE__I2C_UCNACKIE_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IE__I2C_UCBCNTIE_BITS_MASK) != ((*reg) & REG_UCB0IE__I2C_UCBCNTIE_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IE__I2C_UCCLTOIE_BITS_MASK) != ((*reg) & REG_UCB0IE__I2C_UCCLTOIE_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IE__I2C_UCRXIE1_BITS_MASK) != ((*reg) & REG_UCB0IE__I2C_UCRXIE1_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IE__I2C_UCTXIE1_BITS_MASK) != ((*reg) & REG_UCB0IE__I2C_UCTXIE1_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IE__I2C_UCRXIE2_BITS_MASK) != ((*reg) & REG_UCB0IE__I2C_UCRXIE2_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IE__I2C_UCTXIE2_BITS_MASK) != ((*reg) & REG_UCB0IE__I2C_UCTXIE2_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IE__I2C_UCRXIE3_BITS_MASK) != ((*reg) & REG_UCB0IE__I2C_UCRXIE3_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IE__I2C_UCTXIE3_BITS_MASK) != ((*reg) & REG_UCB0IE__I2C_UCTXIE3_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IE__I2C_UCBIT9IE_BITS_MASK) != ((*reg) & REG_UCB0IE__I2C_UCBIT9IE_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCB0IFG__I2C
static uint64_t reg_ucb0ifg__i2c_read(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCB0IFG__I2C_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ucb0ifg__i2c_write(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCB0IFG__I2C_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCB0IFG__I2C_UCRXIFG0_BITS_MASK) != ((*reg) & REG_UCB0IFG__I2C_UCRXIFG0_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IFG__I2C_UCTXIFG0_BITS_MASK) != ((*reg) & REG_UCB0IFG__I2C_UCTXIFG0_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IFG__I2C_UCSTTIFG_BITS_MASK) != ((*reg) & REG_UCB0IFG__I2C_UCSTTIFG_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IFG__I2C_UCSTPIFG_BITS_MASK) != ((*reg) & REG_UCB0IFG__I2C_UCSTPIFG_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IFG__I2C_UCALIFG_BITS_MASK) != ((*reg) & REG_UCB0IFG__I2C_UCALIFG_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IFG__I2C_UCNACKIFG_BITS_MASK) != ((*reg) & REG_UCB0IFG__I2C_UCNACKIFG_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IFG__I2C_UCBCNTIFG_BITS_MASK) != ((*reg) & REG_UCB0IFG__I2C_UCBCNTIFG_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IFG__I2C_UCCLTOIFG_BITS_MASK) != ((*reg) & REG_UCB0IFG__I2C_UCCLTOIFG_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IFG__I2C_UCRXIFG1_BITS_MASK) != ((*reg) & REG_UCB0IFG__I2C_UCRXIFG1_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IFG__I2C_UCTXIFG1_BITS_MASK) != ((*reg) & REG_UCB0IFG__I2C_UCTXIFG1_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IFG__I2C_UCRXIFG2_BITS_MASK) != ((*reg) & REG_UCB0IFG__I2C_UCRXIFG2_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IFG__I2C_UCTXIFG2_BITS_MASK) != ((*reg) & REG_UCB0IFG__I2C_UCTXIFG2_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IFG__I2C_UCRXIFG3_BITS_MASK) != ((*reg) & REG_UCB0IFG__I2C_UCRXIFG3_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IFG__I2C_UCTXIFG3_BITS_MASK) != ((*reg) & REG_UCB0IFG__I2C_UCTXIFG3_BITS_MASK)) {
        }

        if ((new_value & REG_UCB0IFG__I2C_UCBIT9IFG_BITS_MASK) != ((*reg) & REG_UCB0IFG__I2C_UCBIT9IFG_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCB0IV
static uint64_t reg_ucb0iv_read(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCB0IV_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_ucb0iv_write(MSP430_USCI_B0__I2C_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCB0IV_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_USCI_B0__I2C_Mode_State *s = MSP430FR5739_USCI_B0__I2C_MODE(opaque);
    uint64_t retvalue = 0;

    if ((addr >= UCB0CTLW0) && ((addr + size) <= (UCB0CTLW0 + 2))) {
        retvalue = reg_ucb0ctlw0_read(s, &s->ucb0ctlw0, (addr - UCB0CTLW0));
    } else if ((addr >= UCB0CTLW1) && ((addr + size) <= (UCB0CTLW1 + 2))) {
        retvalue = reg_ucb0ctlw1_read(s, &s->ucb0ctlw1, (addr - UCB0CTLW1));
    } else if ((addr >= UCB0BRW) && ((addr + size) <= (UCB0BRW + 2))) {
        retvalue = reg_ucb0brw_read(s, &s->ucb0brw, (addr - UCB0BRW));
    } else if ((addr >= UCB0STATW__I2C) && ((addr + size) <= (UCB0STATW__I2C + 2))) {
        retvalue = reg_ucb0statw__i2c_read(s, &s->ucb0statw__i2c, (addr - UCB0STATW__I2C));
    } else if ((addr >= UCB0TBCNT) && ((addr + size) <= (UCB0TBCNT + 2))) {
        retvalue = reg_ucb0tbcnt_read(s, &s->ucb0tbcnt, (addr - UCB0TBCNT));
    } else if ((addr >= UCB0RXBUF) && ((addr + size) <= (UCB0RXBUF + 2))) {
        retvalue = reg_ucb0rxbuf_read(s, &s->ucb0rxbuf, (addr - UCB0RXBUF));
    } else if ((addr >= UCB0TXBUF) && ((addr + size) <= (UCB0TXBUF + 2))) {
        retvalue = reg_ucb0txbuf_read(s, &s->ucb0txbuf, (addr - UCB0TXBUF));
    } else if ((addr >= UCB0I2COA0) && ((addr + size) <= (UCB0I2COA0 + 2))) {
        retvalue = reg_ucb0i2coa0_read(s, &s->ucb0i2coa0, (addr - UCB0I2COA0));
    } else if ((addr >= UCB0I2COA1) && ((addr + size) <= (UCB0I2COA1 + 2))) {
        retvalue = reg_ucb0i2coa1_read(s, &s->ucb0i2coa1, (addr - UCB0I2COA1));
    } else if ((addr >= UCB0I2COA2) && ((addr + size) <= (UCB0I2COA2 + 2))) {
        retvalue = reg_ucb0i2coa2_read(s, &s->ucb0i2coa2, (addr - UCB0I2COA2));
    } else if ((addr >= UCB0I2COA3) && ((addr + size) <= (UCB0I2COA3 + 2))) {
        retvalue = reg_ucb0i2coa3_read(s, &s->ucb0i2coa3, (addr - UCB0I2COA3));
    } else if ((addr >= UCB0ADDRX) && ((addr + size) <= (UCB0ADDRX + 2))) {
        retvalue = reg_ucb0addrx_read(s, &s->ucb0addrx, (addr - UCB0ADDRX));
    } else if ((addr >= UCB0ADDMASK) && ((addr + size) <= (UCB0ADDMASK + 2))) {
        retvalue = reg_ucb0addmask_read(s, &s->ucb0addmask, (addr - UCB0ADDMASK));
    } else if ((addr >= UCB0I2CSA) && ((addr + size) <= (UCB0I2CSA + 2))) {
        retvalue = reg_ucb0i2csa_read(s, &s->ucb0i2csa, (addr - UCB0I2CSA));
    } else if ((addr >= UCB0IE__I2C) && ((addr + size) <= (UCB0IE__I2C + 2))) {
        retvalue = reg_ucb0ie__i2c_read(s, &s->ucb0ie__i2c, (addr - UCB0IE__I2C));
    } else if ((addr >= UCB0IFG__I2C) && ((addr + size) <= (UCB0IFG__I2C + 2))) {
        retvalue = reg_ucb0ifg__i2c_read(s, &s->ucb0ifg__i2c, (addr - UCB0IFG__I2C));
    } else if ((addr >= UCB0IV) && ((addr + size) <= (UCB0IV + 2))) {
        retvalue = reg_ucb0iv_read(s, &s->ucb0iv, (addr - UCB0IV));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_USCI_B0__I2C_Mode_State *s = MSP430FR5739_USCI_B0__I2C_MODE(opaque);

    if ((addr >= UCB0CTLW0) && ((addr + size) <= (UCB0CTLW0 + 2))) {
        reg_ucb0ctlw0_write(s, &s->ucb0ctlw0, (addr - UCB0CTLW0), value, size);
    } else if ((addr >= UCB0CTLW1) && ((addr + size) <= (UCB0CTLW1 + 2))) {
        reg_ucb0ctlw1_write(s, &s->ucb0ctlw1, (addr - UCB0CTLW1), value, size);
    } else if ((addr >= UCB0BRW) && ((addr + size) <= (UCB0BRW + 2))) {
        reg_ucb0brw_write(s, &s->ucb0brw, (addr - UCB0BRW), value, size);
    } else if ((addr >= UCB0STATW__I2C) && ((addr + size) <= (UCB0STATW__I2C + 2))) {
        reg_ucb0statw__i2c_write(s, &s->ucb0statw__i2c, (addr - UCB0STATW__I2C), value, size);
    } else if ((addr >= UCB0TBCNT) && ((addr + size) <= (UCB0TBCNT + 2))) {
        reg_ucb0tbcnt_write(s, &s->ucb0tbcnt, (addr - UCB0TBCNT), value, size);
    } else if ((addr >= UCB0RXBUF) && ((addr + size) <= (UCB0RXBUF + 2))) {
        reg_ucb0rxbuf_write(s, &s->ucb0rxbuf, (addr - UCB0RXBUF), value, size);
    } else if ((addr >= UCB0TXBUF) && ((addr + size) <= (UCB0TXBUF + 2))) {
        reg_ucb0txbuf_write(s, &s->ucb0txbuf, (addr - UCB0TXBUF), value, size);
    } else if ((addr >= UCB0I2COA0) && ((addr + size) <= (UCB0I2COA0 + 2))) {
        reg_ucb0i2coa0_write(s, &s->ucb0i2coa0, (addr - UCB0I2COA0), value, size);
    } else if ((addr >= UCB0I2COA1) && ((addr + size) <= (UCB0I2COA1 + 2))) {
        reg_ucb0i2coa1_write(s, &s->ucb0i2coa1, (addr - UCB0I2COA1), value, size);
    } else if ((addr >= UCB0I2COA2) && ((addr + size) <= (UCB0I2COA2 + 2))) {
        reg_ucb0i2coa2_write(s, &s->ucb0i2coa2, (addr - UCB0I2COA2), value, size);
    } else if ((addr >= UCB0I2COA3) && ((addr + size) <= (UCB0I2COA3 + 2))) {
        reg_ucb0i2coa3_write(s, &s->ucb0i2coa3, (addr - UCB0I2COA3), value, size);
    } else if ((addr >= UCB0ADDRX) && ((addr + size) <= (UCB0ADDRX + 2))) {
        reg_ucb0addrx_write(s, &s->ucb0addrx, (addr - UCB0ADDRX), value, size);
    } else if ((addr >= UCB0ADDMASK) && ((addr + size) <= (UCB0ADDMASK + 2))) {
        reg_ucb0addmask_write(s, &s->ucb0addmask, (addr - UCB0ADDMASK), value, size);
    } else if ((addr >= UCB0I2CSA) && ((addr + size) <= (UCB0I2CSA + 2))) {
        reg_ucb0i2csa_write(s, &s->ucb0i2csa, (addr - UCB0I2CSA), value, size);
    } else if ((addr >= UCB0IE__I2C) && ((addr + size) <= (UCB0IE__I2C + 2))) {
        reg_ucb0ie__i2c_write(s, &s->ucb0ie__i2c, (addr - UCB0IE__I2C), value, size);
    } else if ((addr >= UCB0IFG__I2C) && ((addr + size) <= (UCB0IFG__I2C + 2))) {
        reg_ucb0ifg__i2c_write(s, &s->ucb0ifg__i2c, (addr - UCB0IFG__I2C), value, size);
    } else if ((addr >= UCB0IV) && ((addr + size) <= (UCB0IV + 2))) {
        reg_ucb0iv_write(s, &s->ucb0iv, (addr - UCB0IV), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_USCI_B0__I2C_Mode_State *device = MSP430FR5739_USCI_B0__I2C_MODE(dev);

   device->ucb0ctlw0 = 0x0;
   device->ucb0ctlw1 = 0x0;
   device->ucb0brw = 0;
   device->ucb0statw__i2c = 0x0;
   device->ucb0tbcnt = 0;
   device->ucb0rxbuf = 0;
   device->ucb0txbuf = 0;
   device->ucb0i2coa0 = 0x0;
   device->ucb0i2coa1 = 0x0;
   device->ucb0i2coa2 = 0x0;
   device->ucb0i2coa3 = 0x0;
   device->ucb0addrx = 0x0;
   device->ucb0addmask = 0x0;
   device->ucb0i2csa = 0x0;
   device->ucb0ie__i2c = 0x0;
   device->ucb0ifg__i2c = 0x0;
   device->ucb0iv = 0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_USCI_B0__I2C_Mode_State *s = MSP430FR5739_USCI_B0__I2C_MODE(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_USCI_B0__I2C_MODE, SIZE);
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
    .name          = TYPE_MSP430FR5739_USCI_B0__I2C_MODE,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_USCI_B0__I2C_Mode_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_usci_b0__i2c_mode_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_usci_b0__i2c_mode_register_types)
