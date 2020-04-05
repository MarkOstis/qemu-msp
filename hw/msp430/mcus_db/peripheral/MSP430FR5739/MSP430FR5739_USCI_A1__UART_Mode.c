// Peripheral name: USCI_A1__UART_Mode

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_USCI_A1__UART_MODE "msp430fr5739_usci_a1__uart_mode"
#define SIZE 32
#define MSP430FR5739_USCI_A1__UART_MODE(obj) OBJECT_CHECK(MSP430_USCI_A1__UART_Mode_State, (obj), TYPE_MSP430FR5739_USCI_A1__UART_MODE)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x05E0

#define UCA1CTLW0 0
#define UCA1CTLW1 2
#define UCA1BRW 6
#define UCA1MCTLW 8
#define UCA1STATW 10
#define UCA1RXBUF 12
#define UCA1TXBUF 14
#define UCA1ABCTL 16
#define UCA1IRCTL 18
#define UCA1IE__UART 26
#define UCA1IFG__UART 28
#define UCA1IV 30

// REGISTERS RESET VALUE
#define REG_UCA1CTLW0_RESET_VALUE 0x0
#define REG_UCA1CTLW1_RESET_VALUE 0x0
#define REG_UCA1BRW_RESET_VALUE 0
#define REG_UCA1MCTLW_RESET_VALUE 0x0
#define REG_UCA1STATW_RESET_VALUE 0x0
#define REG_UCA1RXBUF_RESET_VALUE 0
#define REG_UCA1TXBUF_RESET_VALUE 0
#define REG_UCA1ABCTL_RESET_VALUE 0x0
#define REG_UCA1IRCTL_RESET_VALUE 0x0
#define REG_UCA1IE__UART_RESET_VALUE 0x0
#define REG_UCA1IFG__UART_RESET_VALUE 0x0
#define REG_UCA1IV_RESET_VALUE 0

// REGISTERS BITS MASKS
#define REG_UCA1CTLW0_BITS_MASK 0xffff
#define REG_UCA1CTLW1_BITS_MASK 0x3
#define REG_UCA1BRW_BITS_MASK 0xffff
#define REG_UCA1MCTLW_BITS_MASK 0xfff1
#define REG_UCA1STATW_BITS_MASK 0xff
#define REG_UCA1RXBUF_BITS_MASK 0xffff
#define REG_UCA1TXBUF_BITS_MASK 0xffff
#define REG_UCA1ABCTL_BITS_MASK 0x3d
#define REG_UCA1IRCTL_BITS_MASK 0xffff
#define REG_UCA1IE__UART_BITS_MASK 0xf
#define REG_UCA1IFG__UART_BITS_MASK 0xf
#define REG_UCA1IV_BITS_MASK 0xffff

// FIELDS FOR REGISTER : UCA1CTLW0
#define REG_UCA1CTLW0_UCSWRST_BITS_MASK (1 << 0)
#define REG_UCA1CTLW0_UCTXBRK_BITS_MASK (1 << 1)
#define REG_UCA1CTLW0_UCTXADDR_BITS_MASK (1 << 2)
#define REG_UCA1CTLW0_UCDORM_BITS_MASK (1 << 3)
#define REG_UCA1CTLW0_UCBRKIE_BITS_MASK (1 << 4)
#define REG_UCA1CTLW0_UCRXEIE_BITS_MASK (1 << 5)
#define REG_UCA1CTLW0_UCSSEL_BITS_MASK (3 << 6)
#define REG_UCA1CTLW0_UCSYNC_BITS_MASK (1 << 8)
#define REG_UCA1CTLW0_UCMODE_BITS_MASK (3 << 9)
#define REG_UCA1CTLW0_UCSPB_BITS_MASK (1 << 11)
#define REG_UCA1CTLW0_UC7BIT_BITS_MASK (1 << 12)
#define REG_UCA1CTLW0_UCMSB_BITS_MASK (1 << 13)
#define REG_UCA1CTLW0_UCPAR_BITS_MASK (1 << 14)
#define REG_UCA1CTLW0_UCPEN_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : UCA1CTL0

// FIELDS FOR REGISTER : UCA1CTL1

// FIELDS FOR REGISTER : UCA1CTLW1
#define REG_UCA1CTLW1_UCGLIT_BITS_MASK (3 << 0)

// FIELDS FOR REGISTER : UCA1BRW

// FIELDS FOR REGISTER : UCA1BR0

// FIELDS FOR REGISTER : UCA1BR1

// FIELDS FOR REGISTER : UCA1MCTLW
#define REG_UCA1MCTLW_UCOS16_BITS_MASK (1 << 0)
#define REG_UCA1MCTLW_UCBRF_BITS_MASK (15 << 4)
#define REG_UCA1MCTLW_UCBRS0_BITS_MASK (1 << 8)
#define REG_UCA1MCTLW_UCBRS1_BITS_MASK (1 << 9)
#define REG_UCA1MCTLW_UCBRS2_BITS_MASK (1 << 10)
#define REG_UCA1MCTLW_UCBRS3_BITS_MASK (1 << 11)
#define REG_UCA1MCTLW_UCBRS4_BITS_MASK (1 << 12)
#define REG_UCA1MCTLW_UCBRS5_BITS_MASK (1 << 13)
#define REG_UCA1MCTLW_UCBRS6_BITS_MASK (1 << 14)
#define REG_UCA1MCTLW_UCBRS7_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : UCA1STATW
#define REG_UCA1STATW_UCBUSY_BITS_MASK (1 << 0)
#define REG_UCA1STATW_UCADDR_BITS_MASK (1 << 1)
#define REG_UCA1STATW_UCRXERR_BITS_MASK (1 << 2)
#define REG_UCA1STATW_UCBRK_BITS_MASK (1 << 3)
#define REG_UCA1STATW_UCPE_BITS_MASK (1 << 4)
#define REG_UCA1STATW_UCOE_BITS_MASK (1 << 5)
#define REG_UCA1STATW_UCFE_BITS_MASK (1 << 6)
#define REG_UCA1STATW_UCLISTEN_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : UCA1RXBUF

// FIELDS FOR REGISTER : UCA1TXBUF

// FIELDS FOR REGISTER : UCA1ABCTL
#define REG_UCA1ABCTL_UCABDEN_BITS_MASK (1 << 0)
#define REG_UCA1ABCTL_UCBTOE_BITS_MASK (1 << 2)
#define REG_UCA1ABCTL_UCSTOE_BITS_MASK (1 << 3)
#define REG_UCA1ABCTL_UCDELIM0_BITS_MASK (1 << 4)
#define REG_UCA1ABCTL_UCDELIM1_BITS_MASK (1 << 5)

// FIELDS FOR REGISTER : UCA1IRCTL
#define REG_UCA1IRCTL_UCIREN_BITS_MASK (1 << 0)
#define REG_UCA1IRCTL_UCIRTXCLK_BITS_MASK (1 << 1)
#define REG_UCA1IRCTL_UCIRTXPL0_BITS_MASK (1 << 2)
#define REG_UCA1IRCTL_UCIRTXPL1_BITS_MASK (1 << 3)
#define REG_UCA1IRCTL_UCIRTXPL2_BITS_MASK (1 << 4)
#define REG_UCA1IRCTL_UCIRTXPL3_BITS_MASK (1 << 5)
#define REG_UCA1IRCTL_UCIRTXPL4_BITS_MASK (1 << 6)
#define REG_UCA1IRCTL_UCIRTXPL5_BITS_MASK (1 << 7)
#define REG_UCA1IRCTL_UCIRRXFE_BITS_MASK (1 << 8)
#define REG_UCA1IRCTL_UCIRRXPL_BITS_MASK (1 << 9)
#define REG_UCA1IRCTL_UCIRRXFL0_BITS_MASK (1 << 10)
#define REG_UCA1IRCTL_UCIRRXFL1_BITS_MASK (1 << 11)
#define REG_UCA1IRCTL_UCIRRXFL2_BITS_MASK (1 << 12)
#define REG_UCA1IRCTL_UCIRRXFL3_BITS_MASK (1 << 13)
#define REG_UCA1IRCTL_UCIRRXFL4_BITS_MASK (1 << 14)
#define REG_UCA1IRCTL_UCIRRXFL5_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : UCA1IRTCTL

// FIELDS FOR REGISTER : UCA1IRRCTL

// FIELDS FOR REGISTER : UCA1IE

// FIELDS FOR REGISTER : UCA1IFG

// FIELDS FOR REGISTER : UCA1IE__UART
#define REG_UCA1IE__UART_UCRXIE_BITS_MASK (1 << 0)
#define REG_UCA1IE__UART_UCTXIE_BITS_MASK (1 << 1)
#define REG_UCA1IE__UART_UCSTTIE_BITS_MASK (1 << 2)
#define REG_UCA1IE__UART_UCTXCPTIE_BITS_MASK (1 << 3)

// FIELDS FOR REGISTER : UCA1IFG__UART
#define REG_UCA1IFG__UART_UCRXIFG_BITS_MASK (1 << 0)
#define REG_UCA1IFG__UART_UCTXIFG_BITS_MASK (1 << 1)
#define REG_UCA1IFG__UART_UCSTTIFG_BITS_MASK (1 << 2)
#define REG_UCA1IFG__UART_UCTXCPTIFG_BITS_MASK (1 << 3)

// FIELDS FOR REGISTER : UCA1IV




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t uca1ctlw0;
   uint32_t uca1ctlw1;
   uint32_t uca1brw;
   uint32_t uca1mctlw;
   uint32_t uca1statw;
   uint32_t uca1rxbuf;
   uint32_t uca1txbuf;
   uint32_t uca1abctl;
   uint32_t uca1irctl;
   uint32_t uca1ie__uart;
   uint32_t uca1ifg__uart;
   uint32_t uca1iv;
} MSP430_USCI_A1__UART_Mode_State;




 // Local functions definitions
// REG: UCA1CTLW0
static uint64_t reg_uca1ctlw0_read(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA1CTLW0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca1ctlw0_write(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA1CTLW0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA1CTLW0_UCSWRST_BITS_MASK) != ((*reg) & REG_UCA1CTLW0_UCSWRST_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1CTLW0_UCTXBRK_BITS_MASK) != ((*reg) & REG_UCA1CTLW0_UCTXBRK_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1CTLW0_UCTXADDR_BITS_MASK) != ((*reg) & REG_UCA1CTLW0_UCTXADDR_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1CTLW0_UCDORM_BITS_MASK) != ((*reg) & REG_UCA1CTLW0_UCDORM_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1CTLW0_UCBRKIE_BITS_MASK) != ((*reg) & REG_UCA1CTLW0_UCBRKIE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1CTLW0_UCRXEIE_BITS_MASK) != ((*reg) & REG_UCA1CTLW0_UCRXEIE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1CTLW0_UCSSEL_BITS_MASK) != ((*reg) & REG_UCA1CTLW0_UCSSEL_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1CTLW0_UCSYNC_BITS_MASK) != ((*reg) & REG_UCA1CTLW0_UCSYNC_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1CTLW0_UCMODE_BITS_MASK) != ((*reg) & REG_UCA1CTLW0_UCMODE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1CTLW0_UCSPB_BITS_MASK) != ((*reg) & REG_UCA1CTLW0_UCSPB_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1CTLW0_UC7BIT_BITS_MASK) != ((*reg) & REG_UCA1CTLW0_UC7BIT_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1CTLW0_UCMSB_BITS_MASK) != ((*reg) & REG_UCA1CTLW0_UCMSB_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1CTLW0_UCPAR_BITS_MASK) != ((*reg) & REG_UCA1CTLW0_UCPAR_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1CTLW0_UCPEN_BITS_MASK) != ((*reg) & REG_UCA1CTLW0_UCPEN_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA1CTLW1
static uint64_t reg_uca1ctlw1_read(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA1CTLW1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca1ctlw1_write(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA1CTLW1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA1CTLW1_UCGLIT_BITS_MASK) != ((*reg) & REG_UCA1CTLW1_UCGLIT_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA1BRW
static uint64_t reg_uca1brw_read(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA1BRW_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca1brw_write(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA1BRW_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: UCA1MCTLW
static uint64_t reg_uca1mctlw_read(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA1MCTLW_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca1mctlw_write(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA1MCTLW_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA1MCTLW_UCOS16_BITS_MASK) != ((*reg) & REG_UCA1MCTLW_UCOS16_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1MCTLW_UCBRF_BITS_MASK) != ((*reg) & REG_UCA1MCTLW_UCBRF_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1MCTLW_UCBRS0_BITS_MASK) != ((*reg) & REG_UCA1MCTLW_UCBRS0_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1MCTLW_UCBRS1_BITS_MASK) != ((*reg) & REG_UCA1MCTLW_UCBRS1_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1MCTLW_UCBRS2_BITS_MASK) != ((*reg) & REG_UCA1MCTLW_UCBRS2_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1MCTLW_UCBRS3_BITS_MASK) != ((*reg) & REG_UCA1MCTLW_UCBRS3_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1MCTLW_UCBRS4_BITS_MASK) != ((*reg) & REG_UCA1MCTLW_UCBRS4_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1MCTLW_UCBRS5_BITS_MASK) != ((*reg) & REG_UCA1MCTLW_UCBRS5_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1MCTLW_UCBRS6_BITS_MASK) != ((*reg) & REG_UCA1MCTLW_UCBRS6_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1MCTLW_UCBRS7_BITS_MASK) != ((*reg) & REG_UCA1MCTLW_UCBRS7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA1STATW
static uint64_t reg_uca1statw_read(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA1STATW_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca1statw_write(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA1STATW_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA1STATW_UCBUSY_BITS_MASK) != ((*reg) & REG_UCA1STATW_UCBUSY_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1STATW_UCADDR_BITS_MASK) != ((*reg) & REG_UCA1STATW_UCADDR_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1STATW_UCRXERR_BITS_MASK) != ((*reg) & REG_UCA1STATW_UCRXERR_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1STATW_UCBRK_BITS_MASK) != ((*reg) & REG_UCA1STATW_UCBRK_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1STATW_UCPE_BITS_MASK) != ((*reg) & REG_UCA1STATW_UCPE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1STATW_UCOE_BITS_MASK) != ((*reg) & REG_UCA1STATW_UCOE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1STATW_UCFE_BITS_MASK) != ((*reg) & REG_UCA1STATW_UCFE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1STATW_UCLISTEN_BITS_MASK) != ((*reg) & REG_UCA1STATW_UCLISTEN_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA1RXBUF
static uint64_t reg_uca1rxbuf_read(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA1RXBUF_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca1rxbuf_write(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA1RXBUF_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: UCA1TXBUF
static uint64_t reg_uca1txbuf_read(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA1TXBUF_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca1txbuf_write(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA1TXBUF_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: UCA1ABCTL
static uint64_t reg_uca1abctl_read(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA1ABCTL_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca1abctl_write(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA1ABCTL_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA1ABCTL_UCABDEN_BITS_MASK) != ((*reg) & REG_UCA1ABCTL_UCABDEN_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1ABCTL_UCBTOE_BITS_MASK) != ((*reg) & REG_UCA1ABCTL_UCBTOE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1ABCTL_UCSTOE_BITS_MASK) != ((*reg) & REG_UCA1ABCTL_UCSTOE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1ABCTL_UCDELIM0_BITS_MASK) != ((*reg) & REG_UCA1ABCTL_UCDELIM0_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1ABCTL_UCDELIM1_BITS_MASK) != ((*reg) & REG_UCA1ABCTL_UCDELIM1_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA1IRCTL
static uint64_t reg_uca1irctl_read(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA1IRCTL_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca1irctl_write(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA1IRCTL_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA1IRCTL_UCIREN_BITS_MASK) != ((*reg) & REG_UCA1IRCTL_UCIREN_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IRCTL_UCIRTXCLK_BITS_MASK) != ((*reg) & REG_UCA1IRCTL_UCIRTXCLK_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IRCTL_UCIRTXPL0_BITS_MASK) != ((*reg) & REG_UCA1IRCTL_UCIRTXPL0_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IRCTL_UCIRTXPL1_BITS_MASK) != ((*reg) & REG_UCA1IRCTL_UCIRTXPL1_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IRCTL_UCIRTXPL2_BITS_MASK) != ((*reg) & REG_UCA1IRCTL_UCIRTXPL2_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IRCTL_UCIRTXPL3_BITS_MASK) != ((*reg) & REG_UCA1IRCTL_UCIRTXPL3_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IRCTL_UCIRTXPL4_BITS_MASK) != ((*reg) & REG_UCA1IRCTL_UCIRTXPL4_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IRCTL_UCIRTXPL5_BITS_MASK) != ((*reg) & REG_UCA1IRCTL_UCIRTXPL5_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IRCTL_UCIRRXFE_BITS_MASK) != ((*reg) & REG_UCA1IRCTL_UCIRRXFE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IRCTL_UCIRRXPL_BITS_MASK) != ((*reg) & REG_UCA1IRCTL_UCIRRXPL_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IRCTL_UCIRRXFL0_BITS_MASK) != ((*reg) & REG_UCA1IRCTL_UCIRRXFL0_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IRCTL_UCIRRXFL1_BITS_MASK) != ((*reg) & REG_UCA1IRCTL_UCIRRXFL1_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IRCTL_UCIRRXFL2_BITS_MASK) != ((*reg) & REG_UCA1IRCTL_UCIRRXFL2_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IRCTL_UCIRRXFL3_BITS_MASK) != ((*reg) & REG_UCA1IRCTL_UCIRRXFL3_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IRCTL_UCIRRXFL4_BITS_MASK) != ((*reg) & REG_UCA1IRCTL_UCIRRXFL4_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IRCTL_UCIRRXFL5_BITS_MASK) != ((*reg) & REG_UCA1IRCTL_UCIRRXFL5_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA1IE__UART
static uint64_t reg_uca1ie__uart_read(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA1IE__UART_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca1ie__uart_write(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA1IE__UART_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA1IE__UART_UCRXIE_BITS_MASK) != ((*reg) & REG_UCA1IE__UART_UCRXIE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IE__UART_UCTXIE_BITS_MASK) != ((*reg) & REG_UCA1IE__UART_UCTXIE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IE__UART_UCSTTIE_BITS_MASK) != ((*reg) & REG_UCA1IE__UART_UCSTTIE_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IE__UART_UCTXCPTIE_BITS_MASK) != ((*reg) & REG_UCA1IE__UART_UCTXCPTIE_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA1IFG__UART
static uint64_t reg_uca1ifg__uart_read(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA1IFG__UART_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca1ifg__uart_write(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA1IFG__UART_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_UCA1IFG__UART_UCRXIFG_BITS_MASK) != ((*reg) & REG_UCA1IFG__UART_UCRXIFG_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IFG__UART_UCTXIFG_BITS_MASK) != ((*reg) & REG_UCA1IFG__UART_UCTXIFG_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IFG__UART_UCSTTIFG_BITS_MASK) != ((*reg) & REG_UCA1IFG__UART_UCSTTIFG_BITS_MASK)) {
        }

        if ((new_value & REG_UCA1IFG__UART_UCTXCPTIFG_BITS_MASK) != ((*reg) & REG_UCA1IFG__UART_UCTXCPTIFG_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: UCA1IV
static uint64_t reg_uca1iv_read(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_UCA1IV_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_uca1iv_write(MSP430_USCI_A1__UART_Mode_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_UCA1IV_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_USCI_A1__UART_Mode_State *s = MSP430FR5739_USCI_A1__UART_MODE(opaque);
    uint64_t retvalue = 0;

    if ((addr >= UCA1CTLW0) && ((addr + size) <= (UCA1CTLW0 + 2))) {
        retvalue = reg_uca1ctlw0_read(s, &s->uca1ctlw0, (addr - UCA1CTLW0));
    } else if ((addr >= UCA1CTLW1) && ((addr + size) <= (UCA1CTLW1 + 2))) {
        retvalue = reg_uca1ctlw1_read(s, &s->uca1ctlw1, (addr - UCA1CTLW1));
    } else if ((addr >= UCA1BRW) && ((addr + size) <= (UCA1BRW + 2))) {
        retvalue = reg_uca1brw_read(s, &s->uca1brw, (addr - UCA1BRW));
    } else if ((addr >= UCA1MCTLW) && ((addr + size) <= (UCA1MCTLW + 2))) {
        retvalue = reg_uca1mctlw_read(s, &s->uca1mctlw, (addr - UCA1MCTLW));
    } else if ((addr >= UCA1STATW) && ((addr + size) <= (UCA1STATW + 1))) {
        retvalue = reg_uca1statw_read(s, &s->uca1statw, (addr - UCA1STATW));
    } else if ((addr >= UCA1RXBUF) && ((addr + size) <= (UCA1RXBUF + 2))) {
        retvalue = reg_uca1rxbuf_read(s, &s->uca1rxbuf, (addr - UCA1RXBUF));
    } else if ((addr >= UCA1TXBUF) && ((addr + size) <= (UCA1TXBUF + 2))) {
        retvalue = reg_uca1txbuf_read(s, &s->uca1txbuf, (addr - UCA1TXBUF));
    } else if ((addr >= UCA1ABCTL) && ((addr + size) <= (UCA1ABCTL + 1))) {
        retvalue = reg_uca1abctl_read(s, &s->uca1abctl, (addr - UCA1ABCTL));
    } else if ((addr >= UCA1IRCTL) && ((addr + size) <= (UCA1IRCTL + 2))) {
        retvalue = reg_uca1irctl_read(s, &s->uca1irctl, (addr - UCA1IRCTL));
    } else if ((addr >= UCA1IE__UART) && ((addr + size) <= (UCA1IE__UART + 2))) {
        retvalue = reg_uca1ie__uart_read(s, &s->uca1ie__uart, (addr - UCA1IE__UART));
    } else if ((addr >= UCA1IFG__UART) && ((addr + size) <= (UCA1IFG__UART + 2))) {
        retvalue = reg_uca1ifg__uart_read(s, &s->uca1ifg__uart, (addr - UCA1IFG__UART));
    } else if ((addr >= UCA1IV) && ((addr + size) <= (UCA1IV + 2))) {
        retvalue = reg_uca1iv_read(s, &s->uca1iv, (addr - UCA1IV));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_USCI_A1__UART_Mode_State *s = MSP430FR5739_USCI_A1__UART_MODE(opaque);

    if ((addr >= UCA1CTLW0) && ((addr + size) <= (UCA1CTLW0 + 2))) {
        reg_uca1ctlw0_write(s, &s->uca1ctlw0, (addr - UCA1CTLW0), value, size);
    } else if ((addr >= UCA1CTLW1) && ((addr + size) <= (UCA1CTLW1 + 2))) {
        reg_uca1ctlw1_write(s, &s->uca1ctlw1, (addr - UCA1CTLW1), value, size);
    } else if ((addr >= UCA1BRW) && ((addr + size) <= (UCA1BRW + 2))) {
        reg_uca1brw_write(s, &s->uca1brw, (addr - UCA1BRW), value, size);
    } else if ((addr >= UCA1MCTLW) && ((addr + size) <= (UCA1MCTLW + 2))) {
        reg_uca1mctlw_write(s, &s->uca1mctlw, (addr - UCA1MCTLW), value, size);
    } else if ((addr >= UCA1STATW) && ((addr + size) <= (UCA1STATW + 1))) {
        reg_uca1statw_write(s, &s->uca1statw, (addr - UCA1STATW), value, size);
    } else if ((addr >= UCA1RXBUF) && ((addr + size) <= (UCA1RXBUF + 2))) {
        reg_uca1rxbuf_write(s, &s->uca1rxbuf, (addr - UCA1RXBUF), value, size);
    } else if ((addr >= UCA1TXBUF) && ((addr + size) <= (UCA1TXBUF + 2))) {
        reg_uca1txbuf_write(s, &s->uca1txbuf, (addr - UCA1TXBUF), value, size);
    } else if ((addr >= UCA1ABCTL) && ((addr + size) <= (UCA1ABCTL + 1))) {
        reg_uca1abctl_write(s, &s->uca1abctl, (addr - UCA1ABCTL), value, size);
    } else if ((addr >= UCA1IRCTL) && ((addr + size) <= (UCA1IRCTL + 2))) {
        reg_uca1irctl_write(s, &s->uca1irctl, (addr - UCA1IRCTL), value, size);
    } else if ((addr >= UCA1IE__UART) && ((addr + size) <= (UCA1IE__UART + 2))) {
        reg_uca1ie__uart_write(s, &s->uca1ie__uart, (addr - UCA1IE__UART), value, size);
    } else if ((addr >= UCA1IFG__UART) && ((addr + size) <= (UCA1IFG__UART + 2))) {
        reg_uca1ifg__uart_write(s, &s->uca1ifg__uart, (addr - UCA1IFG__UART), value, size);
    } else if ((addr >= UCA1IV) && ((addr + size) <= (UCA1IV + 2))) {
        reg_uca1iv_write(s, &s->uca1iv, (addr - UCA1IV), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_USCI_A1__UART_Mode_State *device = MSP430FR5739_USCI_A1__UART_MODE(dev);

   device->uca1ctlw0 = 0x0;
   device->uca1ctlw1 = 0x0;
   device->uca1brw = 0;
   device->uca1mctlw = 0x0;
   device->uca1statw = 0x0;
   device->uca1rxbuf = 0;
   device->uca1txbuf = 0;
   device->uca1abctl = 0x0;
   device->uca1irctl = 0x0;
   device->uca1ie__uart = 0x0;
   device->uca1ifg__uart = 0x0;
   device->uca1iv = 0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_USCI_A1__UART_Mode_State *s = MSP430FR5739_USCI_A1__UART_MODE(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_USCI_A1__UART_MODE, SIZE);
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
    .name          = TYPE_MSP430FR5739_USCI_A1__UART_MODE,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_USCI_A1__UART_Mode_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_usci_a1__uart_mode_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_usci_a1__uart_mode_register_types)
