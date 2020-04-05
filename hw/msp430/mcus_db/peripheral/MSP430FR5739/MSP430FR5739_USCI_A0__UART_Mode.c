// Peripheral name: USCI_A0__UART_Mode

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_USCI_A0__UART_MODE "msp430fr5739_usci_a0__uart_mode"
#define SIZE 32
#define MSP430FR5739_USCI_A0__UART_MODE(obj) OBJECT_CHECK(MSP430_USCI_A0__UART_Mode_State, (obj), TYPE_MSP430FR5739_USCI_A0__UART_MODE)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x05C0

#define UCA0CTLW0 0
#define UCA0CTLW1 2
#define UCA0BRW 6
#define UCA0MCTLW 8
#define UCA0STATW 10
#define UCA0RXBUF 12
#define UCA0TXBUF 14
#define UCA0ABCTL 16
#define UCA0IRCTL 18
#define UCA0IE__UART 26
#define UCA0IFG__UART 28
#define UCA0IV 30

// REGISTERS RESET VALUE
#define REG_UCA0CTLW0_RESET_VALUE 0x0
#define REG_UCA0CTLW1_RESET_VALUE 0x0
#define REG_UCA0BRW_RESET_VALUE 0
#define REG_UCA0MCTLW_RESET_VALUE 0x0
#define REG_UCA0STATW_RESET_VALUE 0x0
#define REG_UCA0RXBUF_RESET_VALUE 0
#define REG_UCA0TXBUF_RESET_VALUE 0
#define REG_UCA0ABCTL_RESET_VALUE 0x0
#define REG_UCA0IRCTL_RESET_VALUE 0x0
#define REG_UCA0IE__UART_RESET_VALUE 0x0
#define REG_UCA0IFG__UART_RESET_VALUE 0x0
#define REG_UCA0IV_RESET_VALUE 0

// REGISTERS BITS MASKS
#define REG_UCA0CTLW0_BITS_MASK 0xffff
#define REG_UCA0CTLW1_BITS_MASK 0x3
#define REG_UCA0BRW_BITS_MASK 0xffff
#define REG_UCA0MCTLW_BITS_MASK 0xfff1
#define REG_UCA0STATW_BITS_MASK 0xff
#define REG_UCA0RXBUF_BITS_MASK 0xffff
#define REG_UCA0TXBUF_BITS_MASK 0xffff
#define REG_UCA0ABCTL_BITS_MASK 0x3d
#define REG_UCA0IRCTL_BITS_MASK 0xffff
#define REG_UCA0IE__UART_BITS_MASK 0xf
#define REG_UCA0IFG__UART_BITS_MASK 0xf
#define REG_UCA0IV_BITS_MASK 0xffff

// FIELDS FOR REGISTER : UCA0CTLW0
#define REG_UCA0CTLW0_UCSWRST_BITS_MASK (1 << 0)
#define REG_UCA0CTLW0_UCTXBRK_BITS_MASK (1 << 1)
#define REG_UCA0CTLW0_UCTXADDR_BITS_MASK (1 << 2)
#define REG_UCA0CTLW0_UCDORM_BITS_MASK (1 << 3)
#define REG_UCA0CTLW0_UCBRKIE_BITS_MASK (1 << 4)
#define REG_UCA0CTLW0_UCRXEIE_BITS_MASK (1 << 5)
#define REG_UCA0CTLW0_UCSSEL_BITS_MASK (3 << 6)
#define REG_UCA0CTLW0_UCSYNC_BITS_MASK (1 << 8)
#define REG_UCA0CTLW0_UCMODE_BITS_MASK (3 << 9)
#define REG_UCA0CTLW0_UCSPB_BITS_MASK (1 << 11)
#define REG_UCA0CTLW0_UC7BIT_BITS_MASK (1 << 12)
#define REG_UCA0CTLW0_UCMSB_BITS_MASK (1 << 13)
#define REG_UCA0CTLW0_UCPAR_BITS_MASK (1 << 14)
#define REG_UCA0CTLW0_UCPEN_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : UCA0CTL0

// FIELDS FOR REGISTER : UCA0CTL1

// FIELDS FOR REGISTER : UCA0CTLW1
#define REG_UCA0CTLW1_UCGLIT_BITS_MASK (3 << 0)

// FIELDS FOR REGISTER : UCA0BRW

// FIELDS FOR REGISTER : UCA0BR0

// FIELDS FOR REGISTER : UCA0BR1

// FIELDS FOR REGISTER : UCA0MCTLW
#define REG_UCA0MCTLW_UCOS16_BITS_MASK (1 << 0)
#define REG_UCA0MCTLW_UCBRF_BITS_MASK (15 << 4)
#define REG_UCA0MCTLW_UCBRS0_BITS_MASK (1 << 8)
#define REG_UCA0MCTLW_UCBRS1_BITS_MASK (1 << 9)
#define REG_UCA0MCTLW_UCBRS2_BITS_MASK (1 << 10)
#define REG_UCA0MCTLW_UCBRS3_BITS_MASK (1 << 11)
#define REG_UCA0MCTLW_UCBRS4_BITS_MASK (1 << 12)
#define REG_UCA0MCTLW_UCBRS5_BITS_MASK (1 << 13)
#define REG_UCA0MCTLW_UCBRS6_BITS_MASK (1 << 14)
#define REG_UCA0MCTLW_UCBRS7_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : UCA0STATW
#define REG_UCA0STATW_UCBUSY_BITS_MASK (1 << 0)
#define REG_UCA0STATW_UCADDR_BITS_MASK (1 << 1)
#define REG_UCA0STATW_UCRXERR_BITS_MASK (1 << 2)
#define REG_UCA0STATW_UCBRK_BITS_MASK (1 << 3)
#define REG_UCA0STATW_UCPE_BITS_MASK (1 << 4)
#define REG_UCA0STATW_UCOE_BITS_MASK (1 << 5)
#define REG_UCA0STATW_UCFE_BITS_MASK (1 << 6)
#define REG_UCA0STATW_UCLISTEN_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : UCA0RXBUF

// FIELDS FOR REGISTER : UCA0TXBUF

// FIELDS FOR REGISTER : UCA0ABCTL
#define REG_UCA0ABCTL_UCABDEN_BITS_MASK (1 << 0)
#define REG_UCA0ABCTL_UCBTOE_BITS_MASK (1 << 2)
#define REG_UCA0ABCTL_UCSTOE_BITS_MASK (1 << 3)
#define REG_UCA0ABCTL_UCDELIM0_BITS_MASK (1 << 4)
#define REG_UCA0ABCTL_UCDELIM1_BITS_MASK (1 << 5)

// FIELDS FOR REGISTER : UCA0IRCTL
#define REG_UCA0IRCTL_UCIREN_BITS_MASK (1 << 0)
#define REG_UCA0IRCTL_UCIRTXCLK_BITS_MASK (1 << 1)
#define REG_UCA0IRCTL_UCIRTXPL0_BITS_MASK (1 << 2)
#define REG_UCA0IRCTL_UCIRTXPL1_BITS_MASK (1 << 3)
#define REG_UCA0IRCTL_UCIRTXPL2_BITS_MASK (1 << 4)
#define REG_UCA0IRCTL_UCIRTXPL3_BITS_MASK (1 << 5)
#define REG_UCA0IRCTL_UCIRTXPL4_BITS_MASK (1 << 6)
#define REG_UCA0IRCTL_UCIRTXPL5_BITS_MASK (1 << 7)
#define REG_UCA0IRCTL_UCIRRXFE_BITS_MASK (1 << 8)
#define REG_UCA0IRCTL_UCIRRXPL_BITS_MASK (1 << 9)
#define REG_UCA0IRCTL_UCIRRXFL0_BITS_MASK (1 << 10)
#define REG_UCA0IRCTL_UCIRRXFL1_BITS_MASK (1 << 11)
#define REG_UCA0IRCTL_UCIRRXFL2_BITS_MASK (1 << 12)
#define REG_UCA0IRCTL_UCIRRXFL3_BITS_MASK (1 << 13)
#define REG_UCA0IRCTL_UCIRRXFL4_BITS_MASK (1 << 14)
#define REG_UCA0IRCTL_UCIRRXFL5_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : UCA0IRTCTL

// FIELDS FOR REGISTER : UCA0IRRCTL

// FIELDS FOR REGISTER : UCA0IE

// FIELDS FOR REGISTER : UCA0IFG

// FIELDS FOR REGISTER : UCA0IE__UART
#define REG_UCA0IE__UART_UCRXIE_BITS_MASK (1 << 0)
#define REG_UCA0IE__UART_UCTXIE_BITS_MASK (1 << 1)
#define REG_UCA0IE__UART_UCSTTIE_BITS_MASK (1 << 2)
#define REG_UCA0IE__UART_UCTXCPTIE_BITS_MASK (1 << 3)

// FIELDS FOR REGISTER : UCA0IFG__UART
#define REG_UCA0IFG__UART_UCRXIFG_BITS_MASK (1 << 0)
#define REG_UCA0IFG__UART_UCTXIFG_BITS_MASK (1 << 1)
#define REG_UCA0IFG__UART_UCSTTIFG_BITS_MASK (1 << 2)
#define REG_UCA0IFG__UART_UCTXCPTIFG_BITS_MASK (1 << 3)

// FIELDS FOR REGISTER : UCA0IV




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t uca0ctlw0;
   uint32_t uca0ctlw1;
   uint32_t uca0brw;
   uint32_t uca0mctlw;
   uint32_t uca0statw;
   uint32_t uca0rxbuf;
   uint32_t uca0txbuf;
   uint32_t uca0abctl;
   uint32_t uca0irctl;
   uint32_t uca0ie__uart;
   uint32_t uca0ifg__uart;
   uint32_t uca0iv;
} MSP430_USCI_A0__UART_Mode_State;




 // Local functions definitions
// REG: UCA0CTLW0
static uint64_t reg_uca0ctlw0_read(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA0CTLW0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca0ctlw0_write(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA0CTLW0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA0CTLW0_UCSWRST_BITS_MASK) != ((*reg) & REG_UCA0CTLW0_UCSWRST_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0CTLW0_UCTXBRK_BITS_MASK) != ((*reg) & REG_UCA0CTLW0_UCTXBRK_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0CTLW0_UCTXADDR_BITS_MASK) != ((*reg) & REG_UCA0CTLW0_UCTXADDR_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0CTLW0_UCDORM_BITS_MASK) != ((*reg) & REG_UCA0CTLW0_UCDORM_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0CTLW0_UCBRKIE_BITS_MASK) != ((*reg) & REG_UCA0CTLW0_UCBRKIE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0CTLW0_UCRXEIE_BITS_MASK) != ((*reg) & REG_UCA0CTLW0_UCRXEIE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0CTLW0_UCSSEL_BITS_MASK) != ((*reg) & REG_UCA0CTLW0_UCSSEL_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0CTLW0_UCSYNC_BITS_MASK) != ((*reg) & REG_UCA0CTLW0_UCSYNC_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0CTLW0_UCMODE_BITS_MASK) != ((*reg) & REG_UCA0CTLW0_UCMODE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0CTLW0_UCSPB_BITS_MASK) != ((*reg) & REG_UCA0CTLW0_UCSPB_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0CTLW0_UC7BIT_BITS_MASK) != ((*reg) & REG_UCA0CTLW0_UC7BIT_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0CTLW0_UCMSB_BITS_MASK) != ((*reg) & REG_UCA0CTLW0_UCMSB_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0CTLW0_UCPAR_BITS_MASK) != ((*reg) & REG_UCA0CTLW0_UCPAR_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0CTLW0_UCPEN_BITS_MASK) != ((*reg) & REG_UCA0CTLW0_UCPEN_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA0CTLW1
static uint64_t reg_uca0ctlw1_read(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA0CTLW1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca0ctlw1_write(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA0CTLW1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA0CTLW1_UCGLIT_BITS_MASK) != ((*reg) & REG_UCA0CTLW1_UCGLIT_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA0BRW
static uint64_t reg_uca0brw_read(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA0BRW_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca0brw_write(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA0BRW_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: UCA0MCTLW
static uint64_t reg_uca0mctlw_read(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA0MCTLW_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca0mctlw_write(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA0MCTLW_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA0MCTLW_UCOS16_BITS_MASK) != ((*reg) & REG_UCA0MCTLW_UCOS16_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0MCTLW_UCBRF_BITS_MASK) != ((*reg) & REG_UCA0MCTLW_UCBRF_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0MCTLW_UCBRS0_BITS_MASK) != ((*reg) & REG_UCA0MCTLW_UCBRS0_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0MCTLW_UCBRS1_BITS_MASK) != ((*reg) & REG_UCA0MCTLW_UCBRS1_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0MCTLW_UCBRS2_BITS_MASK) != ((*reg) & REG_UCA0MCTLW_UCBRS2_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0MCTLW_UCBRS3_BITS_MASK) != ((*reg) & REG_UCA0MCTLW_UCBRS3_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0MCTLW_UCBRS4_BITS_MASK) != ((*reg) & REG_UCA0MCTLW_UCBRS4_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0MCTLW_UCBRS5_BITS_MASK) != ((*reg) & REG_UCA0MCTLW_UCBRS5_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0MCTLW_UCBRS6_BITS_MASK) != ((*reg) & REG_UCA0MCTLW_UCBRS6_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0MCTLW_UCBRS7_BITS_MASK) != ((*reg) & REG_UCA0MCTLW_UCBRS7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA0STATW
static uint64_t reg_uca0statw_read(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA0STATW_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca0statw_write(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA0STATW_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA0STATW_UCBUSY_BITS_MASK) != ((*reg) & REG_UCA0STATW_UCBUSY_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0STATW_UCADDR_BITS_MASK) != ((*reg) & REG_UCA0STATW_UCADDR_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0STATW_UCRXERR_BITS_MASK) != ((*reg) & REG_UCA0STATW_UCRXERR_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0STATW_UCBRK_BITS_MASK) != ((*reg) & REG_UCA0STATW_UCBRK_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0STATW_UCPE_BITS_MASK) != ((*reg) & REG_UCA0STATW_UCPE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0STATW_UCOE_BITS_MASK) != ((*reg) & REG_UCA0STATW_UCOE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0STATW_UCFE_BITS_MASK) != ((*reg) & REG_UCA0STATW_UCFE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0STATW_UCLISTEN_BITS_MASK) != ((*reg) & REG_UCA0STATW_UCLISTEN_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA0RXBUF
static uint64_t reg_uca0rxbuf_read(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA0RXBUF_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca0rxbuf_write(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA0RXBUF_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: UCA0TXBUF
static uint64_t reg_uca0txbuf_read(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA0TXBUF_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca0txbuf_write(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA0TXBUF_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: UCA0ABCTL
static uint64_t reg_uca0abctl_read(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA0ABCTL_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca0abctl_write(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA0ABCTL_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA0ABCTL_UCABDEN_BITS_MASK) != ((*reg) & REG_UCA0ABCTL_UCABDEN_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0ABCTL_UCBTOE_BITS_MASK) != ((*reg) & REG_UCA0ABCTL_UCBTOE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0ABCTL_UCSTOE_BITS_MASK) != ((*reg) & REG_UCA0ABCTL_UCSTOE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0ABCTL_UCDELIM0_BITS_MASK) != ((*reg) & REG_UCA0ABCTL_UCDELIM0_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0ABCTL_UCDELIM1_BITS_MASK) != ((*reg) & REG_UCA0ABCTL_UCDELIM1_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA0IRCTL
static uint64_t reg_uca0irctl_read(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA0IRCTL_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca0irctl_write(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA0IRCTL_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA0IRCTL_UCIREN_BITS_MASK) != ((*reg) & REG_UCA0IRCTL_UCIREN_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IRCTL_UCIRTXCLK_BITS_MASK) != ((*reg) & REG_UCA0IRCTL_UCIRTXCLK_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IRCTL_UCIRTXPL0_BITS_MASK) != ((*reg) & REG_UCA0IRCTL_UCIRTXPL0_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IRCTL_UCIRTXPL1_BITS_MASK) != ((*reg) & REG_UCA0IRCTL_UCIRTXPL1_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IRCTL_UCIRTXPL2_BITS_MASK) != ((*reg) & REG_UCA0IRCTL_UCIRTXPL2_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IRCTL_UCIRTXPL3_BITS_MASK) != ((*reg) & REG_UCA0IRCTL_UCIRTXPL3_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IRCTL_UCIRTXPL4_BITS_MASK) != ((*reg) & REG_UCA0IRCTL_UCIRTXPL4_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IRCTL_UCIRTXPL5_BITS_MASK) != ((*reg) & REG_UCA0IRCTL_UCIRTXPL5_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IRCTL_UCIRRXFE_BITS_MASK) != ((*reg) & REG_UCA0IRCTL_UCIRRXFE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IRCTL_UCIRRXPL_BITS_MASK) != ((*reg) & REG_UCA0IRCTL_UCIRRXPL_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IRCTL_UCIRRXFL0_BITS_MASK) != ((*reg) & REG_UCA0IRCTL_UCIRRXFL0_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IRCTL_UCIRRXFL1_BITS_MASK) != ((*reg) & REG_UCA0IRCTL_UCIRRXFL1_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IRCTL_UCIRRXFL2_BITS_MASK) != ((*reg) & REG_UCA0IRCTL_UCIRRXFL2_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IRCTL_UCIRRXFL3_BITS_MASK) != ((*reg) & REG_UCA0IRCTL_UCIRRXFL3_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IRCTL_UCIRRXFL4_BITS_MASK) != ((*reg) & REG_UCA0IRCTL_UCIRRXFL4_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IRCTL_UCIRRXFL5_BITS_MASK) != ((*reg) & REG_UCA0IRCTL_UCIRRXFL5_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA0IE__UART
static uint64_t reg_uca0ie__uart_read(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA0IE__UART_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca0ie__uart_write(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA0IE__UART_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA0IE__UART_UCRXIE_BITS_MASK) != ((*reg) & REG_UCA0IE__UART_UCRXIE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IE__UART_UCTXIE_BITS_MASK) != ((*reg) & REG_UCA0IE__UART_UCTXIE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IE__UART_UCSTTIE_BITS_MASK) != ((*reg) & REG_UCA0IE__UART_UCSTTIE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IE__UART_UCTXCPTIE_BITS_MASK) != ((*reg) & REG_UCA0IE__UART_UCTXCPTIE_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA0IFG__UART
static uint64_t reg_uca0ifg__uart_read(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA0IFG__UART_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca0ifg__uart_write(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA0IFG__UART_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA0IFG__UART_UCRXIFG_BITS_MASK) != ((*reg) & REG_UCA0IFG__UART_UCRXIFG_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IFG__UART_UCTXIFG_BITS_MASK) != ((*reg) & REG_UCA0IFG__UART_UCTXIFG_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IFG__UART_UCSTTIFG_BITS_MASK) != ((*reg) & REG_UCA0IFG__UART_UCSTTIFG_BITS_MASK)) {
        }

        if ((new_value & REG_UCA0IFG__UART_UCTXCPTIFG_BITS_MASK) != ((*reg) & REG_UCA0IFG__UART_UCTXCPTIFG_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA0IV
static uint64_t reg_uca0iv_read(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA0IV_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca0iv_write(MSP430_USCI_A0__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA0IV_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_USCI_A0__UART_Mode_State *s = MSP430FR5739_USCI_A0__UART_MODE(opaque);
    uint64_t retvalue = 0;

    if ((addr >= UCA0CTLW0) && ((addr + size) <= (UCA0CTLW0 + 2))) {
        retvalue = reg_uca0ctlw0_read(s, &s->uca0ctlw0, (addr - UCA0CTLW0));
    } else if ((addr >= UCA0CTLW1) && ((addr + size) <= (UCA0CTLW1 + 2))) {
        retvalue = reg_uca0ctlw1_read(s, &s->uca0ctlw1, (addr - UCA0CTLW1));
    } else if ((addr >= UCA0BRW) && ((addr + size) <= (UCA0BRW + 2))) {
        retvalue = reg_uca0brw_read(s, &s->uca0brw, (addr - UCA0BRW));
    } else if ((addr >= UCA0MCTLW) && ((addr + size) <= (UCA0MCTLW + 2))) {
        retvalue = reg_uca0mctlw_read(s, &s->uca0mctlw, (addr - UCA0MCTLW));
    } else if ((addr >= UCA0STATW) && ((addr + size) <= (UCA0STATW + 1))) {
        retvalue = reg_uca0statw_read(s, &s->uca0statw, (addr - UCA0STATW));
    } else if ((addr >= UCA0RXBUF) && ((addr + size) <= (UCA0RXBUF + 2))) {
        retvalue = reg_uca0rxbuf_read(s, &s->uca0rxbuf, (addr - UCA0RXBUF));
    } else if ((addr >= UCA0TXBUF) && ((addr + size) <= (UCA0TXBUF + 2))) {
        retvalue = reg_uca0txbuf_read(s, &s->uca0txbuf, (addr - UCA0TXBUF));
    } else if ((addr >= UCA0ABCTL) && ((addr + size) <= (UCA0ABCTL + 1))) {
        retvalue = reg_uca0abctl_read(s, &s->uca0abctl, (addr - UCA0ABCTL));
    } else if ((addr >= UCA0IRCTL) && ((addr + size) <= (UCA0IRCTL + 2))) {
        retvalue = reg_uca0irctl_read(s, &s->uca0irctl, (addr - UCA0IRCTL));
    } else if ((addr >= UCA0IE__UART) && ((addr + size) <= (UCA0IE__UART + 2))) {
        retvalue = reg_uca0ie__uart_read(s, &s->uca0ie__uart, (addr - UCA0IE__UART));
    } else if ((addr >= UCA0IFG__UART) && ((addr + size) <= (UCA0IFG__UART + 2))) {
        retvalue = reg_uca0ifg__uart_read(s, &s->uca0ifg__uart, (addr - UCA0IFG__UART));
    } else if ((addr >= UCA0IV) && ((addr + size) <= (UCA0IV + 2))) {
        retvalue = reg_uca0iv_read(s, &s->uca0iv, (addr - UCA0IV));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_USCI_A0__UART_Mode_State *s = MSP430FR5739_USCI_A0__UART_MODE(opaque);

    if ((addr >= UCA0CTLW0) && ((addr + size) <= (UCA0CTLW0 + 2))) {
        reg_uca0ctlw0_write(s, &s->uca0ctlw0, (addr - UCA0CTLW0), value, size);
    } else if ((addr >= UCA0CTLW1) && ((addr + size) <= (UCA0CTLW1 + 2))) {
        reg_uca0ctlw1_write(s, &s->uca0ctlw1, (addr - UCA0CTLW1), value, size);
    } else if ((addr >= UCA0BRW) && ((addr + size) <= (UCA0BRW + 2))) {
        reg_uca0brw_write(s, &s->uca0brw, (addr - UCA0BRW), value, size);
    } else if ((addr >= UCA0MCTLW) && ((addr + size) <= (UCA0MCTLW + 2))) {
        reg_uca0mctlw_write(s, &s->uca0mctlw, (addr - UCA0MCTLW), value, size);
    } else if ((addr >= UCA0STATW) && ((addr + size) <= (UCA0STATW + 1))) {
        reg_uca0statw_write(s, &s->uca0statw, (addr - UCA0STATW), value, size);
    } else if ((addr >= UCA0RXBUF) && ((addr + size) <= (UCA0RXBUF + 2))) {
        reg_uca0rxbuf_write(s, &s->uca0rxbuf, (addr - UCA0RXBUF), value, size);
    } else if ((addr >= UCA0TXBUF) && ((addr + size) <= (UCA0TXBUF + 2))) {
        reg_uca0txbuf_write(s, &s->uca0txbuf, (addr - UCA0TXBUF), value, size);
    } else if ((addr >= UCA0ABCTL) && ((addr + size) <= (UCA0ABCTL + 1))) {
        reg_uca0abctl_write(s, &s->uca0abctl, (addr - UCA0ABCTL), value, size);
    } else if ((addr >= UCA0IRCTL) && ((addr + size) <= (UCA0IRCTL + 2))) {
        reg_uca0irctl_write(s, &s->uca0irctl, (addr - UCA0IRCTL), value, size);
    } else if ((addr >= UCA0IE__UART) && ((addr + size) <= (UCA0IE__UART + 2))) {
        reg_uca0ie__uart_write(s, &s->uca0ie__uart, (addr - UCA0IE__UART), value, size);
    } else if ((addr >= UCA0IFG__UART) && ((addr + size) <= (UCA0IFG__UART + 2))) {
        reg_uca0ifg__uart_write(s, &s->uca0ifg__uart, (addr - UCA0IFG__UART), value, size);
    } else if ((addr >= UCA0IV) && ((addr + size) <= (UCA0IV + 2))) {
        reg_uca0iv_write(s, &s->uca0iv, (addr - UCA0IV), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_USCI_A0__UART_Mode_State *device = MSP430FR5739_USCI_A0__UART_MODE(dev);

   device->uca0ctlw0 = 0x0;
   device->uca0ctlw1 = 0x0;
   device->uca0brw = 0;
   device->uca0mctlw = 0x0;
   device->uca0statw = 0x0;
   device->uca0rxbuf = 0;
   device->uca0txbuf = 0;
   device->uca0abctl = 0x0;
   device->uca0irctl = 0x0;
   device->uca0ie__uart = 0x0;
   device->uca0ifg__uart = 0x0;
   device->uca0iv = 0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_USCI_A0__UART_Mode_State *s = MSP430FR5739_USCI_A0__UART_MODE(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_USCI_A0__UART_MODE, SIZE);
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
    .name          = TYPE_MSP430FR5739_USCI_A0__UART_MODE,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_USCI_A0__UART_Mode_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_usci_a0__uart_mode_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_usci_a0__uart_mode_register_types)
