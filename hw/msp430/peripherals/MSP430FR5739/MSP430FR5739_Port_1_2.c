// Peripheral name: Port_1_2

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_PORT_1_2 "msp430fr5739_port_1_2"
#define SIZE 32
#define MSP430FR5739_PORT_1_2(obj) OBJECT_CHECK(MSP430_Port_1_2_State, (obj), TYPE_MSP430FR5739_PORT_1_2)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x0200

#define P1IN 0
#define P1OUT 2
#define P1DIR 4
#define P1REN 6
#define P1SEL0 10
#define P1SEL1 12
#define P1SELC 22
#define P1IV 14
#define P1IES 24
#define P1IE 26
#define P1IFG 28
#define P2IN 1
#define P2OUT 3
#define P2DIR 5
#define P2REN 7
#define P2SEL0 11
#define P2SEL1 13
#define P2SELC 23
#define P2IV 30
#define P2IES 25
#define P2IE 27
#define P2IFG 29

// REGISTERS RESET VALUE
#define REG_P1IN_RESET_VALUE 0x0
#define REG_P1OUT_RESET_VALUE 0x0
#define REG_P1DIR_RESET_VALUE 0x0
#define REG_P1REN_RESET_VALUE 0x0
#define REG_P1SEL0_RESET_VALUE 0x0
#define REG_P1SEL1_RESET_VALUE 0x0
#define REG_P1SELC_RESET_VALUE 0x0
#define REG_P1IV_RESET_VALUE 0
#define REG_P1IES_RESET_VALUE 0x0
#define REG_P1IE_RESET_VALUE 0x0
#define REG_P1IFG_RESET_VALUE 0x0
#define REG_P2IN_RESET_VALUE 0x0
#define REG_P2OUT_RESET_VALUE 0x0
#define REG_P2DIR_RESET_VALUE 0x0
#define REG_P2REN_RESET_VALUE 0x0
#define REG_P2SEL0_RESET_VALUE 0x0
#define REG_P2SEL1_RESET_VALUE 0x0
#define REG_P2SELC_RESET_VALUE 0x0
#define REG_P2IV_RESET_VALUE 0
#define REG_P2IES_RESET_VALUE 0x0
#define REG_P2IE_RESET_VALUE 0x0
#define REG_P2IFG_RESET_VALUE 0x0

// REGISTERS BITS MASKS
#define REG_P1IN_BITS_MASK 0xff
#define REG_P1OUT_BITS_MASK 0xff
#define REG_P1DIR_BITS_MASK 0xff
#define REG_P1REN_BITS_MASK 0xff
#define REG_P1SEL0_BITS_MASK 0xff
#define REG_P1SEL1_BITS_MASK 0xff
#define REG_P1SELC_BITS_MASK 0xff
#define REG_P1IV_BITS_MASK 0xffff
#define REG_P1IES_BITS_MASK 0xff
#define REG_P1IE_BITS_MASK 0xff
#define REG_P1IFG_BITS_MASK 0xff
#define REG_P2IN_BITS_MASK 0xff
#define REG_P2OUT_BITS_MASK 0xff
#define REG_P2DIR_BITS_MASK 0xff
#define REG_P2REN_BITS_MASK 0xff
#define REG_P2SEL0_BITS_MASK 0xff
#define REG_P2SEL1_BITS_MASK 0xff
#define REG_P2SELC_BITS_MASK 0xff
#define REG_P2IV_BITS_MASK 0xffff
#define REG_P2IES_BITS_MASK 0xff
#define REG_P2IE_BITS_MASK 0xff
#define REG_P2IFG_BITS_MASK 0xff

// FIELDS FOR REGISTER : P1IN
#define REG_P1IN_P1IN0_BITS_MASK (1 << 0)
#define REG_P1IN_P1IN1_BITS_MASK (1 << 1)
#define REG_P1IN_P1IN2_BITS_MASK (1 << 2)
#define REG_P1IN_P1IN3_BITS_MASK (1 << 3)
#define REG_P1IN_P1IN4_BITS_MASK (1 << 4)
#define REG_P1IN_P1IN5_BITS_MASK (1 << 5)
#define REG_P1IN_P1IN6_BITS_MASK (1 << 6)
#define REG_P1IN_P1IN7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P1OUT
#define REG_P1OUT_P1OUT0_BITS_MASK (1 << 0)
#define REG_P1OUT_P1OUT1_BITS_MASK (1 << 1)
#define REG_P1OUT_P1OUT2_BITS_MASK (1 << 2)
#define REG_P1OUT_P1OUT3_BITS_MASK (1 << 3)
#define REG_P1OUT_P1OUT4_BITS_MASK (1 << 4)
#define REG_P1OUT_P1OUT5_BITS_MASK (1 << 5)
#define REG_P1OUT_P1OUT6_BITS_MASK (1 << 6)
#define REG_P1OUT_P1OUT7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P1DIR
#define REG_P1DIR_P1DIR0_BITS_MASK (1 << 0)
#define REG_P1DIR_P1DIR1_BITS_MASK (1 << 1)
#define REG_P1DIR_P1DIR2_BITS_MASK (1 << 2)
#define REG_P1DIR_P1DIR3_BITS_MASK (1 << 3)
#define REG_P1DIR_P1DIR4_BITS_MASK (1 << 4)
#define REG_P1DIR_P1DIR5_BITS_MASK (1 << 5)
#define REG_P1DIR_P1DIR6_BITS_MASK (1 << 6)
#define REG_P1DIR_P1DIR7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P1REN
#define REG_P1REN_P1REN0_BITS_MASK (1 << 0)
#define REG_P1REN_P1REN1_BITS_MASK (1 << 1)
#define REG_P1REN_P1REN2_BITS_MASK (1 << 2)
#define REG_P1REN_P1REN3_BITS_MASK (1 << 3)
#define REG_P1REN_P1REN4_BITS_MASK (1 << 4)
#define REG_P1REN_P1REN5_BITS_MASK (1 << 5)
#define REG_P1REN_P1REN6_BITS_MASK (1 << 6)
#define REG_P1REN_P1REN7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P1SEL0
#define REG_P1SEL0_P1SEL0_0_BITS_MASK (1 << 0)
#define REG_P1SEL0_P1SEL0_1_BITS_MASK (1 << 1)
#define REG_P1SEL0_P1SEL0_2_BITS_MASK (1 << 2)
#define REG_P1SEL0_P1SEL0_3_BITS_MASK (1 << 3)
#define REG_P1SEL0_P1SEL0_4_BITS_MASK (1 << 4)
#define REG_P1SEL0_P1SEL0_5_BITS_MASK (1 << 5)
#define REG_P1SEL0_P1SEL0_6_BITS_MASK (1 << 6)
#define REG_P1SEL0_P1SEL0_7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P1SEL1
#define REG_P1SEL1_P1SEL1_0_BITS_MASK (1 << 0)
#define REG_P1SEL1_P1SEL1_1_BITS_MASK (1 << 1)
#define REG_P1SEL1_P1SEL1_2_BITS_MASK (1 << 2)
#define REG_P1SEL1_P1SEL1_3_BITS_MASK (1 << 3)
#define REG_P1SEL1_P1SEL1_4_BITS_MASK (1 << 4)
#define REG_P1SEL1_P1SEL1_5_BITS_MASK (1 << 5)
#define REG_P1SEL1_P1SEL1_6_BITS_MASK (1 << 6)
#define REG_P1SEL1_P1SEL1_7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P1SELC
#define REG_P1SELC_P1SELC_0_BITS_MASK (1 << 0)
#define REG_P1SELC_P1SELC_1_BITS_MASK (1 << 1)
#define REG_P1SELC_P1SELC_2_BITS_MASK (1 << 2)
#define REG_P1SELC_P1SELC_3_BITS_MASK (1 << 3)
#define REG_P1SELC_P1SELC_4_BITS_MASK (1 << 4)
#define REG_P1SELC_P1SELC_5_BITS_MASK (1 << 5)
#define REG_P1SELC_P1SELC_6_BITS_MASK (1 << 6)
#define REG_P1SELC_P1SELC_7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P1IV

// FIELDS FOR REGISTER : P1IES
#define REG_P1IES_P1IES0_BITS_MASK (1 << 0)
#define REG_P1IES_P1IES1_BITS_MASK (1 << 1)
#define REG_P1IES_P1IES2_BITS_MASK (1 << 2)
#define REG_P1IES_P1IES3_BITS_MASK (1 << 3)
#define REG_P1IES_P1IES4_BITS_MASK (1 << 4)
#define REG_P1IES_P1IES5_BITS_MASK (1 << 5)
#define REG_P1IES_P1IES6_BITS_MASK (1 << 6)
#define REG_P1IES_P1IES7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P1IE
#define REG_P1IE_P1IE0_BITS_MASK (1 << 0)
#define REG_P1IE_P1IE1_BITS_MASK (1 << 1)
#define REG_P1IE_P1IE2_BITS_MASK (1 << 2)
#define REG_P1IE_P1IE3_BITS_MASK (1 << 3)
#define REG_P1IE_P1IE4_BITS_MASK (1 << 4)
#define REG_P1IE_P1IE5_BITS_MASK (1 << 5)
#define REG_P1IE_P1IE6_BITS_MASK (1 << 6)
#define REG_P1IE_P1IE7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P1IFG
#define REG_P1IFG_P1IFG0_BITS_MASK (1 << 0)
#define REG_P1IFG_P1IFG1_BITS_MASK (1 << 1)
#define REG_P1IFG_P1IFG2_BITS_MASK (1 << 2)
#define REG_P1IFG_P1IFG3_BITS_MASK (1 << 3)
#define REG_P1IFG_P1IFG4_BITS_MASK (1 << 4)
#define REG_P1IFG_P1IFG5_BITS_MASK (1 << 5)
#define REG_P1IFG_P1IFG6_BITS_MASK (1 << 6)
#define REG_P1IFG_P1IFG7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P2IN
#define REG_P2IN_P2IN0_BITS_MASK (1 << 0)
#define REG_P2IN_P2IN1_BITS_MASK (1 << 1)
#define REG_P2IN_P2IN2_BITS_MASK (1 << 2)
#define REG_P2IN_P2IN3_BITS_MASK (1 << 3)
#define REG_P2IN_P2IN4_BITS_MASK (1 << 4)
#define REG_P2IN_P2IN5_BITS_MASK (1 << 5)
#define REG_P2IN_P2IN6_BITS_MASK (1 << 6)
#define REG_P2IN_P2IN7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P2OUT
#define REG_P2OUT_P2OUT0_BITS_MASK (1 << 0)
#define REG_P2OUT_P2OUT1_BITS_MASK (1 << 1)
#define REG_P2OUT_P2OUT2_BITS_MASK (1 << 2)
#define REG_P2OUT_P2OUT3_BITS_MASK (1 << 3)
#define REG_P2OUT_P2OUT4_BITS_MASK (1 << 4)
#define REG_P2OUT_P2OUT5_BITS_MASK (1 << 5)
#define REG_P2OUT_P2OUT6_BITS_MASK (1 << 6)
#define REG_P2OUT_P2OUT7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P2DIR
#define REG_P2DIR_P2DIR0_BITS_MASK (1 << 0)
#define REG_P2DIR_P2DIR1_BITS_MASK (1 << 1)
#define REG_P2DIR_P2DIR2_BITS_MASK (1 << 2)
#define REG_P2DIR_P2DIR3_BITS_MASK (1 << 3)
#define REG_P2DIR_P2DIR4_BITS_MASK (1 << 4)
#define REG_P2DIR_P2DIR5_BITS_MASK (1 << 5)
#define REG_P2DIR_P2DIR6_BITS_MASK (1 << 6)
#define REG_P2DIR_P2DIR7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P2REN
#define REG_P2REN_P2REN0_BITS_MASK (1 << 0)
#define REG_P2REN_P2REN1_BITS_MASK (1 << 1)
#define REG_P2REN_P2REN2_BITS_MASK (1 << 2)
#define REG_P2REN_P2REN3_BITS_MASK (1 << 3)
#define REG_P2REN_P2REN4_BITS_MASK (1 << 4)
#define REG_P2REN_P2REN5_BITS_MASK (1 << 5)
#define REG_P2REN_P2REN6_BITS_MASK (1 << 6)
#define REG_P2REN_P2REN7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P2SEL0
#define REG_P2SEL0_P2SEL0_0_BITS_MASK (1 << 0)
#define REG_P2SEL0_P2SEL0_1_BITS_MASK (1 << 1)
#define REG_P2SEL0_P2SEL0_2_BITS_MASK (1 << 2)
#define REG_P2SEL0_P2SEL0_3_BITS_MASK (1 << 3)
#define REG_P2SEL0_P2SEL0_4_BITS_MASK (1 << 4)
#define REG_P2SEL0_P2SEL0_5_BITS_MASK (1 << 5)
#define REG_P2SEL0_P2SEL0_6_BITS_MASK (1 << 6)
#define REG_P2SEL0_P2SEL0_7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P2SEL1
#define REG_P2SEL1_P2SEL1_0_BITS_MASK (1 << 0)
#define REG_P2SEL1_P2SEL1_1_BITS_MASK (1 << 1)
#define REG_P2SEL1_P2SEL1_2_BITS_MASK (1 << 2)
#define REG_P2SEL1_P2SEL1_3_BITS_MASK (1 << 3)
#define REG_P2SEL1_P2SEL1_4_BITS_MASK (1 << 4)
#define REG_P2SEL1_P2SEL1_5_BITS_MASK (1 << 5)
#define REG_P2SEL1_P2SEL1_6_BITS_MASK (1 << 6)
#define REG_P2SEL1_P2SEL1_7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P2SELC
#define REG_P2SELC_P2SELC_0_BITS_MASK (1 << 0)
#define REG_P2SELC_P2SELC_1_BITS_MASK (1 << 1)
#define REG_P2SELC_P2SELC_2_BITS_MASK (1 << 2)
#define REG_P2SELC_P2SELC_3_BITS_MASK (1 << 3)
#define REG_P2SELC_P2SELC_4_BITS_MASK (1 << 4)
#define REG_P2SELC_P2SELC_5_BITS_MASK (1 << 5)
#define REG_P2SELC_P2SELC_6_BITS_MASK (1 << 6)
#define REG_P2SELC_P2SELC_7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P2IV

// FIELDS FOR REGISTER : P2IES
#define REG_P2IES_P2IES0_BITS_MASK (1 << 0)
#define REG_P2IES_P2IES1_BITS_MASK (1 << 1)
#define REG_P2IES_P2IES2_BITS_MASK (1 << 2)
#define REG_P2IES_P2IES3_BITS_MASK (1 << 3)
#define REG_P2IES_P2IES4_BITS_MASK (1 << 4)
#define REG_P2IES_P2IES5_BITS_MASK (1 << 5)
#define REG_P2IES_P2IES6_BITS_MASK (1 << 6)
#define REG_P2IES_P2IES7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P2IE
#define REG_P2IE_P2IE0_BITS_MASK (1 << 0)
#define REG_P2IE_P2IE1_BITS_MASK (1 << 1)
#define REG_P2IE_P2IE2_BITS_MASK (1 << 2)
#define REG_P2IE_P2IE3_BITS_MASK (1 << 3)
#define REG_P2IE_P2IE4_BITS_MASK (1 << 4)
#define REG_P2IE_P2IE5_BITS_MASK (1 << 5)
#define REG_P2IE_P2IE6_BITS_MASK (1 << 6)
#define REG_P2IE_P2IE7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P2IFG
#define REG_P2IFG_P2IFG0_BITS_MASK (1 << 0)
#define REG_P2IFG_P2IFG1_BITS_MASK (1 << 1)
#define REG_P2IFG_P2IFG2_BITS_MASK (1 << 2)
#define REG_P2IFG_P2IFG3_BITS_MASK (1 << 3)
#define REG_P2IFG_P2IFG4_BITS_MASK (1 << 4)
#define REG_P2IFG_P2IFG5_BITS_MASK (1 << 5)
#define REG_P2IFG_P2IFG6_BITS_MASK (1 << 6)
#define REG_P2IFG_P2IFG7_BITS_MASK (1 << 7)




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t p1in;
   uint32_t p1out;
   uint32_t p1dir;
   uint32_t p1ren;
   uint32_t p1sel0;
   uint32_t p1sel1;
   uint32_t p1selc;
   uint32_t p1iv;
   uint32_t p1ies;
   uint32_t p1ie;
   uint32_t p1ifg;
   uint32_t p2in;
   uint32_t p2out;
   uint32_t p2dir;
   uint32_t p2ren;
   uint32_t p2sel0;
   uint32_t p2sel1;
   uint32_t p2selc;
   uint32_t p2iv;
   uint32_t p2ies;
   uint32_t p2ie;
   uint32_t p2ifg;

   // qemu_irq irq_test[8];
} MSP430_Port_1_2_State;




 // Local functions definitions
// REG: P1IN
static uint64_t reg_p1in_read(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P1IN_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p1in_write(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P1IN_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P1IN_P1IN0_BITS_MASK) != ((*reg) & REG_P1IN_P1IN0_BITS_MASK)) {
        }

        if ((new_value & REG_P1IN_P1IN1_BITS_MASK) != ((*reg) & REG_P1IN_P1IN1_BITS_MASK)) {
        }

        if ((new_value & REG_P1IN_P1IN2_BITS_MASK) != ((*reg) & REG_P1IN_P1IN2_BITS_MASK)) {
        }

        if ((new_value & REG_P1IN_P1IN3_BITS_MASK) != ((*reg) & REG_P1IN_P1IN3_BITS_MASK)) {
        }

        if ((new_value & REG_P1IN_P1IN4_BITS_MASK) != ((*reg) & REG_P1IN_P1IN4_BITS_MASK)) {
        }

        if ((new_value & REG_P1IN_P1IN5_BITS_MASK) != ((*reg) & REG_P1IN_P1IN5_BITS_MASK)) {
        }

        if ((new_value & REG_P1IN_P1IN6_BITS_MASK) != ((*reg) & REG_P1IN_P1IN6_BITS_MASK)) {
        }

        if ((new_value & REG_P1IN_P1IN7_BITS_MASK) != ((*reg) & REG_P1IN_P1IN7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P1OUT
static uint64_t reg_p1out_read(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P1OUT_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p1out_write(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P1OUT_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P1OUT_P1OUT0_BITS_MASK) != ((*reg) & REG_P1OUT_P1OUT0_BITS_MASK)) {
//             qemu_set_irq(dev->irq_test, 0);
        }

        if ((new_value & REG_P1OUT_P1OUT1_BITS_MASK) != ((*reg) & REG_P1OUT_P1OUT1_BITS_MASK)) {
        }

        if ((new_value & REG_P1OUT_P1OUT2_BITS_MASK) != ((*reg) & REG_P1OUT_P1OUT2_BITS_MASK)) {
        }

        if ((new_value & REG_P1OUT_P1OUT3_BITS_MASK) != ((*reg) & REG_P1OUT_P1OUT3_BITS_MASK)) {
        }

        if ((new_value & REG_P1OUT_P1OUT4_BITS_MASK) != ((*reg) & REG_P1OUT_P1OUT4_BITS_MASK)) {
        }

        if ((new_value & REG_P1OUT_P1OUT5_BITS_MASK) != ((*reg) & REG_P1OUT_P1OUT5_BITS_MASK)) {
        }

        if ((new_value & REG_P1OUT_P1OUT6_BITS_MASK) != ((*reg) & REG_P1OUT_P1OUT6_BITS_MASK)) {
        }

        if ((new_value & REG_P1OUT_P1OUT7_BITS_MASK) != ((*reg) & REG_P1OUT_P1OUT7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P1DIR
static uint64_t reg_p1dir_read(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P1DIR_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p1dir_write(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P1DIR_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P1DIR_P1DIR0_BITS_MASK) != ((*reg) & REG_P1DIR_P1DIR0_BITS_MASK)) {
        }

        if ((new_value & REG_P1DIR_P1DIR1_BITS_MASK) != ((*reg) & REG_P1DIR_P1DIR1_BITS_MASK)) {
        }

        if ((new_value & REG_P1DIR_P1DIR2_BITS_MASK) != ((*reg) & REG_P1DIR_P1DIR2_BITS_MASK)) {
        }

        if ((new_value & REG_P1DIR_P1DIR3_BITS_MASK) != ((*reg) & REG_P1DIR_P1DIR3_BITS_MASK)) {
        }

        if ((new_value & REG_P1DIR_P1DIR4_BITS_MASK) != ((*reg) & REG_P1DIR_P1DIR4_BITS_MASK)) {
        }

        if ((new_value & REG_P1DIR_P1DIR5_BITS_MASK) != ((*reg) & REG_P1DIR_P1DIR5_BITS_MASK)) {
        }

        if ((new_value & REG_P1DIR_P1DIR6_BITS_MASK) != ((*reg) & REG_P1DIR_P1DIR6_BITS_MASK)) {
        }

        if ((new_value & REG_P1DIR_P1DIR7_BITS_MASK) != ((*reg) & REG_P1DIR_P1DIR7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P1REN
static uint64_t reg_p1ren_read(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P1REN_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p1ren_write(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P1REN_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P1REN_P1REN0_BITS_MASK) != ((*reg) & REG_P1REN_P1REN0_BITS_MASK)) {
        }

        if ((new_value & REG_P1REN_P1REN1_BITS_MASK) != ((*reg) & REG_P1REN_P1REN1_BITS_MASK)) {
        }

        if ((new_value & REG_P1REN_P1REN2_BITS_MASK) != ((*reg) & REG_P1REN_P1REN2_BITS_MASK)) {
        }

        if ((new_value & REG_P1REN_P1REN3_BITS_MASK) != ((*reg) & REG_P1REN_P1REN3_BITS_MASK)) {
        }

        if ((new_value & REG_P1REN_P1REN4_BITS_MASK) != ((*reg) & REG_P1REN_P1REN4_BITS_MASK)) {
        }

        if ((new_value & REG_P1REN_P1REN5_BITS_MASK) != ((*reg) & REG_P1REN_P1REN5_BITS_MASK)) {
        }

        if ((new_value & REG_P1REN_P1REN6_BITS_MASK) != ((*reg) & REG_P1REN_P1REN6_BITS_MASK)) {
        }

        if ((new_value & REG_P1REN_P1REN7_BITS_MASK) != ((*reg) & REG_P1REN_P1REN7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P1SEL0
static uint64_t reg_p1sel0_read(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P1SEL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p1sel0_write(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P1SEL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P1SEL0_P1SEL0_0_BITS_MASK) != ((*reg) & REG_P1SEL0_P1SEL0_0_BITS_MASK)) {
        }

        if ((new_value & REG_P1SEL0_P1SEL0_1_BITS_MASK) != ((*reg) & REG_P1SEL0_P1SEL0_1_BITS_MASK)) {
        }

        if ((new_value & REG_P1SEL0_P1SEL0_2_BITS_MASK) != ((*reg) & REG_P1SEL0_P1SEL0_2_BITS_MASK)) {
        }

        if ((new_value & REG_P1SEL0_P1SEL0_3_BITS_MASK) != ((*reg) & REG_P1SEL0_P1SEL0_3_BITS_MASK)) {
        }

        if ((new_value & REG_P1SEL0_P1SEL0_4_BITS_MASK) != ((*reg) & REG_P1SEL0_P1SEL0_4_BITS_MASK)) {
        }

        if ((new_value & REG_P1SEL0_P1SEL0_5_BITS_MASK) != ((*reg) & REG_P1SEL0_P1SEL0_5_BITS_MASK)) {
        }

        if ((new_value & REG_P1SEL0_P1SEL0_6_BITS_MASK) != ((*reg) & REG_P1SEL0_P1SEL0_6_BITS_MASK)) {
        }

        if ((new_value & REG_P1SEL0_P1SEL0_7_BITS_MASK) != ((*reg) & REG_P1SEL0_P1SEL0_7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P1SEL1
static uint64_t reg_p1sel1_read(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P1SEL1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p1sel1_write(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P1SEL1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P1SEL1_P1SEL1_0_BITS_MASK) != ((*reg) & REG_P1SEL1_P1SEL1_0_BITS_MASK)) {
        }

        if ((new_value & REG_P1SEL1_P1SEL1_1_BITS_MASK) != ((*reg) & REG_P1SEL1_P1SEL1_1_BITS_MASK)) {
        }

        if ((new_value & REG_P1SEL1_P1SEL1_2_BITS_MASK) != ((*reg) & REG_P1SEL1_P1SEL1_2_BITS_MASK)) {
        }

        if ((new_value & REG_P1SEL1_P1SEL1_3_BITS_MASK) != ((*reg) & REG_P1SEL1_P1SEL1_3_BITS_MASK)) {
        }

        if ((new_value & REG_P1SEL1_P1SEL1_4_BITS_MASK) != ((*reg) & REG_P1SEL1_P1SEL1_4_BITS_MASK)) {
        }

        if ((new_value & REG_P1SEL1_P1SEL1_5_BITS_MASK) != ((*reg) & REG_P1SEL1_P1SEL1_5_BITS_MASK)) {
        }

        if ((new_value & REG_P1SEL1_P1SEL1_6_BITS_MASK) != ((*reg) & REG_P1SEL1_P1SEL1_6_BITS_MASK)) {
        }

        if ((new_value & REG_P1SEL1_P1SEL1_7_BITS_MASK) != ((*reg) & REG_P1SEL1_P1SEL1_7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P1SELC
static uint64_t reg_p1selc_read(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P1SELC_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p1selc_write(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P1SELC_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P1SELC_P1SELC_0_BITS_MASK) != ((*reg) & REG_P1SELC_P1SELC_0_BITS_MASK)) {
        }

        if ((new_value & REG_P1SELC_P1SELC_1_BITS_MASK) != ((*reg) & REG_P1SELC_P1SELC_1_BITS_MASK)) {
        }

        if ((new_value & REG_P1SELC_P1SELC_2_BITS_MASK) != ((*reg) & REG_P1SELC_P1SELC_2_BITS_MASK)) {
        }

        if ((new_value & REG_P1SELC_P1SELC_3_BITS_MASK) != ((*reg) & REG_P1SELC_P1SELC_3_BITS_MASK)) {
        }

        if ((new_value & REG_P1SELC_P1SELC_4_BITS_MASK) != ((*reg) & REG_P1SELC_P1SELC_4_BITS_MASK)) {
        }

        if ((new_value & REG_P1SELC_P1SELC_5_BITS_MASK) != ((*reg) & REG_P1SELC_P1SELC_5_BITS_MASK)) {
        }

        if ((new_value & REG_P1SELC_P1SELC_6_BITS_MASK) != ((*reg) & REG_P1SELC_P1SELC_6_BITS_MASK)) {
        }

        if ((new_value & REG_P1SELC_P1SELC_7_BITS_MASK) != ((*reg) & REG_P1SELC_P1SELC_7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P1IV
static uint64_t reg_p1iv_read(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P1IV_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p1iv_write(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P1IV_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: P1IES
static uint64_t reg_p1ies_read(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P1IES_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p1ies_write(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P1IES_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P1IES_P1IES0_BITS_MASK) != ((*reg) & REG_P1IES_P1IES0_BITS_MASK)) {
        }

        if ((new_value & REG_P1IES_P1IES1_BITS_MASK) != ((*reg) & REG_P1IES_P1IES1_BITS_MASK)) {
        }

        if ((new_value & REG_P1IES_P1IES2_BITS_MASK) != ((*reg) & REG_P1IES_P1IES2_BITS_MASK)) {
        }

        if ((new_value & REG_P1IES_P1IES3_BITS_MASK) != ((*reg) & REG_P1IES_P1IES3_BITS_MASK)) {
        }

        if ((new_value & REG_P1IES_P1IES4_BITS_MASK) != ((*reg) & REG_P1IES_P1IES4_BITS_MASK)) {
        }

        if ((new_value & REG_P1IES_P1IES5_BITS_MASK) != ((*reg) & REG_P1IES_P1IES5_BITS_MASK)) {
        }

        if ((new_value & REG_P1IES_P1IES6_BITS_MASK) != ((*reg) & REG_P1IES_P1IES6_BITS_MASK)) {
        }

        if ((new_value & REG_P1IES_P1IES7_BITS_MASK) != ((*reg) & REG_P1IES_P1IES7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P1IE
static uint64_t reg_p1ie_read(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P1IE_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p1ie_write(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P1IE_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P1IE_P1IE0_BITS_MASK) != ((*reg) & REG_P1IE_P1IE0_BITS_MASK)) {
        }

        if ((new_value & REG_P1IE_P1IE1_BITS_MASK) != ((*reg) & REG_P1IE_P1IE1_BITS_MASK)) {
        }

        if ((new_value & REG_P1IE_P1IE2_BITS_MASK) != ((*reg) & REG_P1IE_P1IE2_BITS_MASK)) {
        }

        if ((new_value & REG_P1IE_P1IE3_BITS_MASK) != ((*reg) & REG_P1IE_P1IE3_BITS_MASK)) {
        }

        if ((new_value & REG_P1IE_P1IE4_BITS_MASK) != ((*reg) & REG_P1IE_P1IE4_BITS_MASK)) {
        }

        if ((new_value & REG_P1IE_P1IE5_BITS_MASK) != ((*reg) & REG_P1IE_P1IE5_BITS_MASK)) {
        }

        if ((new_value & REG_P1IE_P1IE6_BITS_MASK) != ((*reg) & REG_P1IE_P1IE6_BITS_MASK)) {
        }

        if ((new_value & REG_P1IE_P1IE7_BITS_MASK) != ((*reg) & REG_P1IE_P1IE7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P1IFG
static uint64_t reg_p1ifg_read(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P1IFG_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p1ifg_write(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P1IFG_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P1IFG_P1IFG0_BITS_MASK) != ((*reg) & REG_P1IFG_P1IFG0_BITS_MASK)) {
        }

        if ((new_value & REG_P1IFG_P1IFG1_BITS_MASK) != ((*reg) & REG_P1IFG_P1IFG1_BITS_MASK)) {
        }

        if ((new_value & REG_P1IFG_P1IFG2_BITS_MASK) != ((*reg) & REG_P1IFG_P1IFG2_BITS_MASK)) {
        }

        if ((new_value & REG_P1IFG_P1IFG3_BITS_MASK) != ((*reg) & REG_P1IFG_P1IFG3_BITS_MASK)) {
        }

        if ((new_value & REG_P1IFG_P1IFG4_BITS_MASK) != ((*reg) & REG_P1IFG_P1IFG4_BITS_MASK)) {
        }

        if ((new_value & REG_P1IFG_P1IFG5_BITS_MASK) != ((*reg) & REG_P1IFG_P1IFG5_BITS_MASK)) {
        }

        if ((new_value & REG_P1IFG_P1IFG6_BITS_MASK) != ((*reg) & REG_P1IFG_P1IFG6_BITS_MASK)) {
        }

        if ((new_value & REG_P1IFG_P1IFG7_BITS_MASK) != ((*reg) & REG_P1IFG_P1IFG7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P2IN
static uint64_t reg_p2in_read(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P2IN_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p2in_write(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P2IN_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P2IN_P2IN0_BITS_MASK) != ((*reg) & REG_P2IN_P2IN0_BITS_MASK)) {
        }

        if ((new_value & REG_P2IN_P2IN1_BITS_MASK) != ((*reg) & REG_P2IN_P2IN1_BITS_MASK)) {
        }

        if ((new_value & REG_P2IN_P2IN2_BITS_MASK) != ((*reg) & REG_P2IN_P2IN2_BITS_MASK)) {
        }

        if ((new_value & REG_P2IN_P2IN3_BITS_MASK) != ((*reg) & REG_P2IN_P2IN3_BITS_MASK)) {
        }

        if ((new_value & REG_P2IN_P2IN4_BITS_MASK) != ((*reg) & REG_P2IN_P2IN4_BITS_MASK)) {
        }

        if ((new_value & REG_P2IN_P2IN5_BITS_MASK) != ((*reg) & REG_P2IN_P2IN5_BITS_MASK)) {
        }

        if ((new_value & REG_P2IN_P2IN6_BITS_MASK) != ((*reg) & REG_P2IN_P2IN6_BITS_MASK)) {
        }

        if ((new_value & REG_P2IN_P2IN7_BITS_MASK) != ((*reg) & REG_P2IN_P2IN7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P2OUT
static uint64_t reg_p2out_read(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P2OUT_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p2out_write(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P2OUT_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P2OUT_P2OUT0_BITS_MASK) != ((*reg) & REG_P2OUT_P2OUT0_BITS_MASK)) {
        }

        if ((new_value & REG_P2OUT_P2OUT1_BITS_MASK) != ((*reg) & REG_P2OUT_P2OUT1_BITS_MASK)) {
        }

        if ((new_value & REG_P2OUT_P2OUT2_BITS_MASK) != ((*reg) & REG_P2OUT_P2OUT2_BITS_MASK)) {
        }

        if ((new_value & REG_P2OUT_P2OUT3_BITS_MASK) != ((*reg) & REG_P2OUT_P2OUT3_BITS_MASK)) {
        }

        if ((new_value & REG_P2OUT_P2OUT4_BITS_MASK) != ((*reg) & REG_P2OUT_P2OUT4_BITS_MASK)) {
        }

        if ((new_value & REG_P2OUT_P2OUT5_BITS_MASK) != ((*reg) & REG_P2OUT_P2OUT5_BITS_MASK)) {
        }

        if ((new_value & REG_P2OUT_P2OUT6_BITS_MASK) != ((*reg) & REG_P2OUT_P2OUT6_BITS_MASK)) {
        }

        if ((new_value & REG_P2OUT_P2OUT7_BITS_MASK) != ((*reg) & REG_P2OUT_P2OUT7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P2DIR
static uint64_t reg_p2dir_read(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P2DIR_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p2dir_write(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P2DIR_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P2DIR_P2DIR0_BITS_MASK) != ((*reg) & REG_P2DIR_P2DIR0_BITS_MASK)) {
        }

        if ((new_value & REG_P2DIR_P2DIR1_BITS_MASK) != ((*reg) & REG_P2DIR_P2DIR1_BITS_MASK)) {
        }

        if ((new_value & REG_P2DIR_P2DIR2_BITS_MASK) != ((*reg) & REG_P2DIR_P2DIR2_BITS_MASK)) {
        }

        if ((new_value & REG_P2DIR_P2DIR3_BITS_MASK) != ((*reg) & REG_P2DIR_P2DIR3_BITS_MASK)) {
        }

        if ((new_value & REG_P2DIR_P2DIR4_BITS_MASK) != ((*reg) & REG_P2DIR_P2DIR4_BITS_MASK)) {
        }

        if ((new_value & REG_P2DIR_P2DIR5_BITS_MASK) != ((*reg) & REG_P2DIR_P2DIR5_BITS_MASK)) {
        }

        if ((new_value & REG_P2DIR_P2DIR6_BITS_MASK) != ((*reg) & REG_P2DIR_P2DIR6_BITS_MASK)) {
        }

        if ((new_value & REG_P2DIR_P2DIR7_BITS_MASK) != ((*reg) & REG_P2DIR_P2DIR7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P2REN
static uint64_t reg_p2ren_read(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P2REN_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p2ren_write(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P2REN_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P2REN_P2REN0_BITS_MASK) != ((*reg) & REG_P2REN_P2REN0_BITS_MASK)) {
        }

        if ((new_value & REG_P2REN_P2REN1_BITS_MASK) != ((*reg) & REG_P2REN_P2REN1_BITS_MASK)) {
        }

        if ((new_value & REG_P2REN_P2REN2_BITS_MASK) != ((*reg) & REG_P2REN_P2REN2_BITS_MASK)) {
        }

        if ((new_value & REG_P2REN_P2REN3_BITS_MASK) != ((*reg) & REG_P2REN_P2REN3_BITS_MASK)) {
        }

        if ((new_value & REG_P2REN_P2REN4_BITS_MASK) != ((*reg) & REG_P2REN_P2REN4_BITS_MASK)) {
        }

        if ((new_value & REG_P2REN_P2REN5_BITS_MASK) != ((*reg) & REG_P2REN_P2REN5_BITS_MASK)) {
        }

        if ((new_value & REG_P2REN_P2REN6_BITS_MASK) != ((*reg) & REG_P2REN_P2REN6_BITS_MASK)) {
        }

        if ((new_value & REG_P2REN_P2REN7_BITS_MASK) != ((*reg) & REG_P2REN_P2REN7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P2SEL0
static uint64_t reg_p2sel0_read(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P2SEL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p2sel0_write(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P2SEL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P2SEL0_P2SEL0_0_BITS_MASK) != ((*reg) & REG_P2SEL0_P2SEL0_0_BITS_MASK)) {
        }

        if ((new_value & REG_P2SEL0_P2SEL0_1_BITS_MASK) != ((*reg) & REG_P2SEL0_P2SEL0_1_BITS_MASK)) {
        }

        if ((new_value & REG_P2SEL0_P2SEL0_2_BITS_MASK) != ((*reg) & REG_P2SEL0_P2SEL0_2_BITS_MASK)) {
        }

        if ((new_value & REG_P2SEL0_P2SEL0_3_BITS_MASK) != ((*reg) & REG_P2SEL0_P2SEL0_3_BITS_MASK)) {
        }

        if ((new_value & REG_P2SEL0_P2SEL0_4_BITS_MASK) != ((*reg) & REG_P2SEL0_P2SEL0_4_BITS_MASK)) {
        }

        if ((new_value & REG_P2SEL0_P2SEL0_5_BITS_MASK) != ((*reg) & REG_P2SEL0_P2SEL0_5_BITS_MASK)) {
        }

        if ((new_value & REG_P2SEL0_P2SEL0_6_BITS_MASK) != ((*reg) & REG_P2SEL0_P2SEL0_6_BITS_MASK)) {
        }

        if ((new_value & REG_P2SEL0_P2SEL0_7_BITS_MASK) != ((*reg) & REG_P2SEL0_P2SEL0_7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P2SEL1
static uint64_t reg_p2sel1_read(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P2SEL1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p2sel1_write(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P2SEL1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P2SEL1_P2SEL1_0_BITS_MASK) != ((*reg) & REG_P2SEL1_P2SEL1_0_BITS_MASK)) {
        }

        if ((new_value & REG_P2SEL1_P2SEL1_1_BITS_MASK) != ((*reg) & REG_P2SEL1_P2SEL1_1_BITS_MASK)) {
        }

        if ((new_value & REG_P2SEL1_P2SEL1_2_BITS_MASK) != ((*reg) & REG_P2SEL1_P2SEL1_2_BITS_MASK)) {
        }

        if ((new_value & REG_P2SEL1_P2SEL1_3_BITS_MASK) != ((*reg) & REG_P2SEL1_P2SEL1_3_BITS_MASK)) {
        }

        if ((new_value & REG_P2SEL1_P2SEL1_4_BITS_MASK) != ((*reg) & REG_P2SEL1_P2SEL1_4_BITS_MASK)) {
        }

        if ((new_value & REG_P2SEL1_P2SEL1_5_BITS_MASK) != ((*reg) & REG_P2SEL1_P2SEL1_5_BITS_MASK)) {
        }

        if ((new_value & REG_P2SEL1_P2SEL1_6_BITS_MASK) != ((*reg) & REG_P2SEL1_P2SEL1_6_BITS_MASK)) {
        }

        if ((new_value & REG_P2SEL1_P2SEL1_7_BITS_MASK) != ((*reg) & REG_P2SEL1_P2SEL1_7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P2SELC
static uint64_t reg_p2selc_read(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P2SELC_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p2selc_write(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P2SELC_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P2SELC_P2SELC_0_BITS_MASK) != ((*reg) & REG_P2SELC_P2SELC_0_BITS_MASK)) {
        }

        if ((new_value & REG_P2SELC_P2SELC_1_BITS_MASK) != ((*reg) & REG_P2SELC_P2SELC_1_BITS_MASK)) {
        }

        if ((new_value & REG_P2SELC_P2SELC_2_BITS_MASK) != ((*reg) & REG_P2SELC_P2SELC_2_BITS_MASK)) {
        }

        if ((new_value & REG_P2SELC_P2SELC_3_BITS_MASK) != ((*reg) & REG_P2SELC_P2SELC_3_BITS_MASK)) {
        }

        if ((new_value & REG_P2SELC_P2SELC_4_BITS_MASK) != ((*reg) & REG_P2SELC_P2SELC_4_BITS_MASK)) {
        }

        if ((new_value & REG_P2SELC_P2SELC_5_BITS_MASK) != ((*reg) & REG_P2SELC_P2SELC_5_BITS_MASK)) {
        }

        if ((new_value & REG_P2SELC_P2SELC_6_BITS_MASK) != ((*reg) & REG_P2SELC_P2SELC_6_BITS_MASK)) {
        }

        if ((new_value & REG_P2SELC_P2SELC_7_BITS_MASK) != ((*reg) & REG_P2SELC_P2SELC_7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P2IV
static uint64_t reg_p2iv_read(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P2IV_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p2iv_write(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P2IV_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: P2IES
static uint64_t reg_p2ies_read(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P2IES_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p2ies_write(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P2IES_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P2IES_P2IES0_BITS_MASK) != ((*reg) & REG_P2IES_P2IES0_BITS_MASK)) {
        }

        if ((new_value & REG_P2IES_P2IES1_BITS_MASK) != ((*reg) & REG_P2IES_P2IES1_BITS_MASK)) {
        }

        if ((new_value & REG_P2IES_P2IES2_BITS_MASK) != ((*reg) & REG_P2IES_P2IES2_BITS_MASK)) {
        }

        if ((new_value & REG_P2IES_P2IES3_BITS_MASK) != ((*reg) & REG_P2IES_P2IES3_BITS_MASK)) {
        }

        if ((new_value & REG_P2IES_P2IES4_BITS_MASK) != ((*reg) & REG_P2IES_P2IES4_BITS_MASK)) {
        }

        if ((new_value & REG_P2IES_P2IES5_BITS_MASK) != ((*reg) & REG_P2IES_P2IES5_BITS_MASK)) {
        }

        if ((new_value & REG_P2IES_P2IES6_BITS_MASK) != ((*reg) & REG_P2IES_P2IES6_BITS_MASK)) {
        }

        if ((new_value & REG_P2IES_P2IES7_BITS_MASK) != ((*reg) & REG_P2IES_P2IES7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P2IE
static uint64_t reg_p2ie_read(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P2IE_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p2ie_write(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P2IE_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P2IE_P2IE0_BITS_MASK) != ((*reg) & REG_P2IE_P2IE0_BITS_MASK)) {
        }

        if ((new_value & REG_P2IE_P2IE1_BITS_MASK) != ((*reg) & REG_P2IE_P2IE1_BITS_MASK)) {
        }

        if ((new_value & REG_P2IE_P2IE2_BITS_MASK) != ((*reg) & REG_P2IE_P2IE2_BITS_MASK)) {
        }

        if ((new_value & REG_P2IE_P2IE3_BITS_MASK) != ((*reg) & REG_P2IE_P2IE3_BITS_MASK)) {
        }

        if ((new_value & REG_P2IE_P2IE4_BITS_MASK) != ((*reg) & REG_P2IE_P2IE4_BITS_MASK)) {
        }

        if ((new_value & REG_P2IE_P2IE5_BITS_MASK) != ((*reg) & REG_P2IE_P2IE5_BITS_MASK)) {
        }

        if ((new_value & REG_P2IE_P2IE6_BITS_MASK) != ((*reg) & REG_P2IE_P2IE6_BITS_MASK)) {
        }

        if ((new_value & REG_P2IE_P2IE7_BITS_MASK) != ((*reg) & REG_P2IE_P2IE7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P2IFG
static uint64_t reg_p2ifg_read(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P2IFG_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p2ifg_write(MSP430_Port_1_2_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P2IFG_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P2IFG_P2IFG0_BITS_MASK) != ((*reg) & REG_P2IFG_P2IFG0_BITS_MASK)) {
        }

        if ((new_value & REG_P2IFG_P2IFG1_BITS_MASK) != ((*reg) & REG_P2IFG_P2IFG1_BITS_MASK)) {
        }

        if ((new_value & REG_P2IFG_P2IFG2_BITS_MASK) != ((*reg) & REG_P2IFG_P2IFG2_BITS_MASK)) {
        }

        if ((new_value & REG_P2IFG_P2IFG3_BITS_MASK) != ((*reg) & REG_P2IFG_P2IFG3_BITS_MASK)) {
        }

        if ((new_value & REG_P2IFG_P2IFG4_BITS_MASK) != ((*reg) & REG_P2IFG_P2IFG4_BITS_MASK)) {
        }

        if ((new_value & REG_P2IFG_P2IFG5_BITS_MASK) != ((*reg) & REG_P2IFG_P2IFG5_BITS_MASK)) {
        }

        if ((new_value & REG_P2IFG_P2IFG6_BITS_MASK) != ((*reg) & REG_P2IFG_P2IFG6_BITS_MASK)) {
        }

        if ((new_value & REG_P2IFG_P2IFG7_BITS_MASK) != ((*reg) & REG_P2IFG_P2IFG7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_Port_1_2_State *s = MSP430FR5739_PORT_1_2(opaque);
    uint64_t retvalue = 0;

    if ((addr >= P1IN) && ((addr + size) <= (P1IN + 1))) {
        retvalue = reg_p1in_read(s, &s->p1in, (addr - P1IN));
    } else if ((addr >= P1OUT) && ((addr + size) <= (P1OUT + 1))) {
        retvalue = reg_p1out_read(s, &s->p1out, (addr - P1OUT));
    } else if ((addr >= P1DIR) && ((addr + size) <= (P1DIR + 1))) {
        retvalue = reg_p1dir_read(s, &s->p1dir, (addr - P1DIR));
    } else if ((addr >= P1REN) && ((addr + size) <= (P1REN + 1))) {
        retvalue = reg_p1ren_read(s, &s->p1ren, (addr - P1REN));
    } else if ((addr >= P1SEL0) && ((addr + size) <= (P1SEL0 + 1))) {
        retvalue = reg_p1sel0_read(s, &s->p1sel0, (addr - P1SEL0));
    } else if ((addr >= P1SEL1) && ((addr + size) <= (P1SEL1 + 1))) {
        retvalue = reg_p1sel1_read(s, &s->p1sel1, (addr - P1SEL1));
    } else if ((addr >= P1SELC) && ((addr + size) <= (P1SELC + 1))) {
        retvalue = reg_p1selc_read(s, &s->p1selc, (addr - P1SELC));
    } else if ((addr >= P1IV) && ((addr + size) <= (P1IV + 2))) {
        retvalue = reg_p1iv_read(s, &s->p1iv, (addr - P1IV));
    } else if ((addr >= P1IES) && ((addr + size) <= (P1IES + 1))) {
        retvalue = reg_p1ies_read(s, &s->p1ies, (addr - P1IES));
    } else if ((addr >= P1IE) && ((addr + size) <= (P1IE + 1))) {
        retvalue = reg_p1ie_read(s, &s->p1ie, (addr - P1IE));
    } else if ((addr >= P1IFG) && ((addr + size) <= (P1IFG + 1))) {
        retvalue = reg_p1ifg_read(s, &s->p1ifg, (addr - P1IFG));
    } else if ((addr >= P2IN) && ((addr + size) <= (P2IN + 1))) {
        retvalue = reg_p2in_read(s, &s->p2in, (addr - P2IN));
    } else if ((addr >= P2OUT) && ((addr + size) <= (P2OUT + 1))) {
        retvalue = reg_p2out_read(s, &s->p2out, (addr - P2OUT));
    } else if ((addr >= P2DIR) && ((addr + size) <= (P2DIR + 1))) {
        retvalue = reg_p2dir_read(s, &s->p2dir, (addr - P2DIR));
    } else if ((addr >= P2REN) && ((addr + size) <= (P2REN + 1))) {
        retvalue = reg_p2ren_read(s, &s->p2ren, (addr - P2REN));
    } else if ((addr >= P2SEL0) && ((addr + size) <= (P2SEL0 + 1))) {
        retvalue = reg_p2sel0_read(s, &s->p2sel0, (addr - P2SEL0));
    } else if ((addr >= P2SEL1) && ((addr + size) <= (P2SEL1 + 1))) {
        retvalue = reg_p2sel1_read(s, &s->p2sel1, (addr - P2SEL1));
    } else if ((addr >= P2SELC) && ((addr + size) <= (P2SELC + 1))) {
        retvalue = reg_p2selc_read(s, &s->p2selc, (addr - P2SELC));
    } else if ((addr >= P2IV) && ((addr + size) <= (P2IV + 2))) {
        retvalue = reg_p2iv_read(s, &s->p2iv, (addr - P2IV));
    } else if ((addr >= P2IES) && ((addr + size) <= (P2IES + 1))) {
        retvalue = reg_p2ies_read(s, &s->p2ies, (addr - P2IES));
    } else if ((addr >= P2IE) && ((addr + size) <= (P2IE + 1))) {
        retvalue = reg_p2ie_read(s, &s->p2ie, (addr - P2IE));
    } else if ((addr >= P2IFG) && ((addr + size) <= (P2IFG + 1))) {
        retvalue = reg_p2ifg_read(s, &s->p2ifg, (addr - P2IFG));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_Port_1_2_State *s = MSP430FR5739_PORT_1_2(opaque);

    if ((addr >= P1IN) && ((addr + size) <= (P1IN + 1))) {
        reg_p1in_write(s, &s->p1in, (addr - P1IN), value, size);
    } else if ((addr >= P1OUT) && ((addr + size) <= (P1OUT + 1))) {
        reg_p1out_write(s, &s->p1out, (addr - P1OUT), value, size);
    } else if ((addr >= P1DIR) && ((addr + size) <= (P1DIR + 1))) {
        reg_p1dir_write(s, &s->p1dir, (addr - P1DIR), value, size);
    } else if ((addr >= P1REN) && ((addr + size) <= (P1REN + 1))) {
        reg_p1ren_write(s, &s->p1ren, (addr - P1REN), value, size);
    } else if ((addr >= P1SEL0) && ((addr + size) <= (P1SEL0 + 1))) {
        reg_p1sel0_write(s, &s->p1sel0, (addr - P1SEL0), value, size);
    } else if ((addr >= P1SEL1) && ((addr + size) <= (P1SEL1 + 1))) {
        reg_p1sel1_write(s, &s->p1sel1, (addr - P1SEL1), value, size);
    } else if ((addr >= P1SELC) && ((addr + size) <= (P1SELC + 1))) {
        reg_p1selc_write(s, &s->p1selc, (addr - P1SELC), value, size);
    } else if ((addr >= P1IV) && ((addr + size) <= (P1IV + 2))) {
        reg_p1iv_write(s, &s->p1iv, (addr - P1IV), value, size);
    } else if ((addr >= P1IES) && ((addr + size) <= (P1IES + 1))) {
        reg_p1ies_write(s, &s->p1ies, (addr - P1IES), value, size);
    } else if ((addr >= P1IE) && ((addr + size) <= (P1IE + 1))) {
        reg_p1ie_write(s, &s->p1ie, (addr - P1IE), value, size);
    } else if ((addr >= P1IFG) && ((addr + size) <= (P1IFG + 1))) {
        reg_p1ifg_write(s, &s->p1ifg, (addr - P1IFG), value, size);
    } else if ((addr >= P2IN) && ((addr + size) <= (P2IN + 1))) {
        reg_p2in_write(s, &s->p2in, (addr - P2IN), value, size);
    } else if ((addr >= P2OUT) && ((addr + size) <= (P2OUT + 1))) {
        reg_p2out_write(s, &s->p2out, (addr - P2OUT), value, size);
    } else if ((addr >= P2DIR) && ((addr + size) <= (P2DIR + 1))) {
        reg_p2dir_write(s, &s->p2dir, (addr - P2DIR), value, size);
    } else if ((addr >= P2REN) && ((addr + size) <= (P2REN + 1))) {
        reg_p2ren_write(s, &s->p2ren, (addr - P2REN), value, size);
    } else if ((addr >= P2SEL0) && ((addr + size) <= (P2SEL0 + 1))) {
        reg_p2sel0_write(s, &s->p2sel0, (addr - P2SEL0), value, size);
    } else if ((addr >= P2SEL1) && ((addr + size) <= (P2SEL1 + 1))) {
        reg_p2sel1_write(s, &s->p2sel1, (addr - P2SEL1), value, size);
    } else if ((addr >= P2SELC) && ((addr + size) <= (P2SELC + 1))) {
        reg_p2selc_write(s, &s->p2selc, (addr - P2SELC), value, size);
    } else if ((addr >= P2IV) && ((addr + size) <= (P2IV + 2))) {
        reg_p2iv_write(s, &s->p2iv, (addr - P2IV), value, size);
    } else if ((addr >= P2IES) && ((addr + size) <= (P2IES + 1))) {
        reg_p2ies_write(s, &s->p2ies, (addr - P2IES), value, size);
    } else if ((addr >= P2IE) && ((addr + size) <= (P2IE + 1))) {
        reg_p2ie_write(s, &s->p2ie, (addr - P2IE), value, size);
    } else if ((addr >= P2IFG) && ((addr + size) <= (P2IFG + 1))) {
        reg_p2ifg_write(s, &s->p2ifg, (addr - P2IFG), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_Port_1_2_State *device = MSP430FR5739_PORT_1_2(dev);

   device->p1in = 0x0;
   device->p1out = 0x0;
   device->p1dir = 0x0;
   device->p1ren = 0x0;
   device->p1sel0 = 0x0;
   device->p1sel1 = 0x0;
   device->p1selc = 0x0;
   device->p1iv = 0;
   device->p1ies = 0x0;
   device->p1ie = 0x0;
   device->p1ifg = 0x0;
   device->p2in = 0x0;
   device->p2out = 0x0;
   device->p2dir = 0x0;
   device->p2ren = 0x0;
   device->p2sel0 = 0x0;
   device->p2sel1 = 0x0;
   device->p2selc = 0x0;
   device->p2iv = 0;
   device->p2ies = 0x0;
   device->p2ie = 0x0;
   device->p2ifg = 0x0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

// static void handle_irq_test(void *opaque, int irq, int req)
// {
//     printf("PORT IRQ Handled irq= %d, req= %d\n");
// }


static void device_init_callback(Object *obj) {
    MSP430_Port_1_2_State *s = MSP430FR5739_PORT_1_2(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_PORT_1_2, SIZE);
    sysbus_init_mmio(SYS_BUS_DEVICE(obj), &s->region);

//    sysbus_init_irq(SYS_BUS_DEVICE(obj), s->irq_test);

    // qdev_init_gpio_out_named(DEVICE(obj), s->irq_test, "port_1_2-out", 8);
    // qdev_init_gpio_in_named(DEVICE(obj), &handle_irq_test, "port_1_2-in", 8);

    // qemu_irq irq_in = qdev_get_gpio_in_named(DEVICE(obj), "port_1_2-in", 0);
    // qdev_connect_gpio_out_named(DEVICE(obj), "port_1_2-out", 1, irq_in);
}

static void device_release_callback(DeviceState *dev, Error **errp) {
}

static void class_init(ObjectClass *klass, void *data) {
        DeviceClass *dc = DEVICE_CLASS(klass);

        dc->reset = device_reset_callback;
        dc->realize = device_release_callback;
}

static const TypeInfo info = {
    .name          = TYPE_MSP430FR5739_PORT_1_2,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_Port_1_2_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_port_1_2_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_port_1_2_register_types)
