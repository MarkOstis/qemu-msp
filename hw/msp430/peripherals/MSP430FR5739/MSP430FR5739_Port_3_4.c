// Peripheral name: Port_3_4

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_PORT_3_4 "msp430fr5739_port_3_4"
#define SIZE 32
#define MSP430FR5739_PORT_3_4(obj) OBJECT_CHECK(MSP430_Port_3_4_State, (obj), TYPE_MSP430FR5739_PORT_3_4)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x0220

#define P3IN 0
#define P3OUT 2
#define P3DIR 4
#define P3REN 6
#define P3SEL0 10
#define P3SEL1 12
#define P3SELC 22
#define P3IV 14
#define P3IES 24
#define P3IE 26
#define P3IFG 28
#define P4IN 1
#define P4OUT 3
#define P4DIR 5
#define P4REN 7
#define P4SEL0 11
#define P4SEL1 13
#define P4SELC 23
#define P4IV 30
#define P4IES 25
#define P4IE 27
#define P4IFG 29

// REGISTERS RESET VALUE
#define REG_P3IN_RESET_VALUE 0x0
#define REG_P3OUT_RESET_VALUE 0x0
#define REG_P3DIR_RESET_VALUE 0x0
#define REG_P3REN_RESET_VALUE 0x0
#define REG_P3SEL0_RESET_VALUE 0x0
#define REG_P3SEL1_RESET_VALUE 0x0
#define REG_P3SELC_RESET_VALUE 0x0
#define REG_P3IV_RESET_VALUE 0
#define REG_P3IES_RESET_VALUE 0x0
#define REG_P3IE_RESET_VALUE 0x0
#define REG_P3IFG_RESET_VALUE 0x0
#define REG_P4IN_RESET_VALUE 0x0
#define REG_P4OUT_RESET_VALUE 0x0
#define REG_P4DIR_RESET_VALUE 0x0
#define REG_P4REN_RESET_VALUE 0x0
#define REG_P4SEL0_RESET_VALUE 0x0
#define REG_P4SEL1_RESET_VALUE 0x0
#define REG_P4SELC_RESET_VALUE 0x0
#define REG_P4IV_RESET_VALUE 0
#define REG_P4IES_RESET_VALUE 0x0
#define REG_P4IE_RESET_VALUE 0x0
#define REG_P4IFG_RESET_VALUE 0x0

// REGISTERS BITS MASKS
#define REG_P3IN_BITS_MASK 0xff
#define REG_P3OUT_BITS_MASK 0xff
#define REG_P3DIR_BITS_MASK 0xff
#define REG_P3REN_BITS_MASK 0xff
#define REG_P3SEL0_BITS_MASK 0xff
#define REG_P3SEL1_BITS_MASK 0xff
#define REG_P3SELC_BITS_MASK 0xff
#define REG_P3IV_BITS_MASK 0xffff
#define REG_P3IES_BITS_MASK 0xff
#define REG_P3IE_BITS_MASK 0xff
#define REG_P3IFG_BITS_MASK 0xff
#define REG_P4IN_BITS_MASK 0xff
#define REG_P4OUT_BITS_MASK 0xff
#define REG_P4DIR_BITS_MASK 0xff
#define REG_P4REN_BITS_MASK 0xff
#define REG_P4SEL0_BITS_MASK 0xff
#define REG_P4SEL1_BITS_MASK 0xff
#define REG_P4SELC_BITS_MASK 0xff
#define REG_P4IV_BITS_MASK 0xffff
#define REG_P4IES_BITS_MASK 0xff
#define REG_P4IE_BITS_MASK 0xff
#define REG_P4IFG_BITS_MASK 0xff

// FIELDS FOR REGISTER : P3IN
#define REG_P3IN_P3IN0_BITS_MASK (1 << 0)
#define REG_P3IN_P3IN1_BITS_MASK (1 << 1)
#define REG_P3IN_P3IN2_BITS_MASK (1 << 2)
#define REG_P3IN_P3IN3_BITS_MASK (1 << 3)
#define REG_P3IN_P3IN4_BITS_MASK (1 << 4)
#define REG_P3IN_P3IN5_BITS_MASK (1 << 5)
#define REG_P3IN_P3IN6_BITS_MASK (1 << 6)
#define REG_P3IN_P3IN7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P3OUT
#define REG_P3OUT_P3OUT0_BITS_MASK (1 << 0)
#define REG_P3OUT_P3OUT1_BITS_MASK (1 << 1)
#define REG_P3OUT_P3OUT2_BITS_MASK (1 << 2)
#define REG_P3OUT_P3OUT3_BITS_MASK (1 << 3)
#define REG_P3OUT_P3OUT4_BITS_MASK (1 << 4)
#define REG_P3OUT_P3OUT5_BITS_MASK (1 << 5)
#define REG_P3OUT_P3OUT6_BITS_MASK (1 << 6)
#define REG_P3OUT_P3OUT7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P3DIR
#define REG_P3DIR_P3DIR0_BITS_MASK (1 << 0)
#define REG_P3DIR_P3DIR1_BITS_MASK (1 << 1)
#define REG_P3DIR_P3DIR2_BITS_MASK (1 << 2)
#define REG_P3DIR_P3DIR3_BITS_MASK (1 << 3)
#define REG_P3DIR_P3DIR4_BITS_MASK (1 << 4)
#define REG_P3DIR_P3DIR5_BITS_MASK (1 << 5)
#define REG_P3DIR_P3DIR6_BITS_MASK (1 << 6)
#define REG_P3DIR_P3DIR7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P3REN
#define REG_P3REN_P3REN0_BITS_MASK (1 << 0)
#define REG_P3REN_P3REN1_BITS_MASK (1 << 1)
#define REG_P3REN_P3REN2_BITS_MASK (1 << 2)
#define REG_P3REN_P3REN3_BITS_MASK (1 << 3)
#define REG_P3REN_P3REN4_BITS_MASK (1 << 4)
#define REG_P3REN_P3REN5_BITS_MASK (1 << 5)
#define REG_P3REN_P3REN6_BITS_MASK (1 << 6)
#define REG_P3REN_P3REN7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P3SEL0
#define REG_P3SEL0_P3SEL0_0_BITS_MASK (1 << 0)
#define REG_P3SEL0_P3SEL0_1_BITS_MASK (1 << 1)
#define REG_P3SEL0_P3SEL0_2_BITS_MASK (1 << 2)
#define REG_P3SEL0_P3SEL0_3_BITS_MASK (1 << 3)
#define REG_P3SEL0_P3SEL0_4_BITS_MASK (1 << 4)
#define REG_P3SEL0_P3SEL0_5_BITS_MASK (1 << 5)
#define REG_P3SEL0_P3SEL0_6_BITS_MASK (1 << 6)
#define REG_P3SEL0_P3SEL0_7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P3SEL1
#define REG_P3SEL1_P3SEL1_0_BITS_MASK (1 << 0)
#define REG_P3SEL1_P3SEL1_1_BITS_MASK (1 << 1)
#define REG_P3SEL1_P3SEL1_2_BITS_MASK (1 << 2)
#define REG_P3SEL1_P3SEL1_3_BITS_MASK (1 << 3)
#define REG_P3SEL1_P3SEL1_4_BITS_MASK (1 << 4)
#define REG_P3SEL1_P3SEL1_5_BITS_MASK (1 << 5)
#define REG_P3SEL1_P3SEL1_6_BITS_MASK (1 << 6)
#define REG_P3SEL1_P3SEL1_7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P3SELC
#define REG_P3SELC_P3SELC_0_BITS_MASK (1 << 0)
#define REG_P3SELC_P3SELC_1_BITS_MASK (1 << 1)
#define REG_P3SELC_P3SELC_2_BITS_MASK (1 << 2)
#define REG_P3SELC_P3SELC_3_BITS_MASK (1 << 3)
#define REG_P3SELC_P3SELC_4_BITS_MASK (1 << 4)
#define REG_P3SELC_P3SELC_5_BITS_MASK (1 << 5)
#define REG_P3SELC_P3SELC_6_BITS_MASK (1 << 6)
#define REG_P3SELC_P3SELC_7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P3IV

// FIELDS FOR REGISTER : P3IES
#define REG_P3IES_P3IES0_BITS_MASK (1 << 0)
#define REG_P3IES_P3IES1_BITS_MASK (1 << 1)
#define REG_P3IES_P3IES2_BITS_MASK (1 << 2)
#define REG_P3IES_P3IES3_BITS_MASK (1 << 3)
#define REG_P3IES_P3IES4_BITS_MASK (1 << 4)
#define REG_P3IES_P3IES5_BITS_MASK (1 << 5)
#define REG_P3IES_P3IES6_BITS_MASK (1 << 6)
#define REG_P3IES_P3IES7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P3IE
#define REG_P3IE_P3IE0_BITS_MASK (1 << 0)
#define REG_P3IE_P3IE1_BITS_MASK (1 << 1)
#define REG_P3IE_P3IE2_BITS_MASK (1 << 2)
#define REG_P3IE_P3IE3_BITS_MASK (1 << 3)
#define REG_P3IE_P3IE4_BITS_MASK (1 << 4)
#define REG_P3IE_P3IE5_BITS_MASK (1 << 5)
#define REG_P3IE_P3IE6_BITS_MASK (1 << 6)
#define REG_P3IE_P3IE7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P3IFG
#define REG_P3IFG_P3IFG0_BITS_MASK (1 << 0)
#define REG_P3IFG_P3IFG1_BITS_MASK (1 << 1)
#define REG_P3IFG_P3IFG2_BITS_MASK (1 << 2)
#define REG_P3IFG_P3IFG3_BITS_MASK (1 << 3)
#define REG_P3IFG_P3IFG4_BITS_MASK (1 << 4)
#define REG_P3IFG_P3IFG5_BITS_MASK (1 << 5)
#define REG_P3IFG_P3IFG6_BITS_MASK (1 << 6)
#define REG_P3IFG_P3IFG7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P4IN
#define REG_P4IN_P4IN0_BITS_MASK (1 << 0)
#define REG_P4IN_P4IN1_BITS_MASK (1 << 1)
#define REG_P4IN_P4IN2_BITS_MASK (1 << 2)
#define REG_P4IN_P4IN3_BITS_MASK (1 << 3)
#define REG_P4IN_P4IN4_BITS_MASK (1 << 4)
#define REG_P4IN_P4IN5_BITS_MASK (1 << 5)
#define REG_P4IN_P4IN6_BITS_MASK (1 << 6)
#define REG_P4IN_P4IN7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P4OUT
#define REG_P4OUT_P4OUT0_BITS_MASK (1 << 0)
#define REG_P4OUT_P4OUT1_BITS_MASK (1 << 1)
#define REG_P4OUT_P4OUT2_BITS_MASK (1 << 2)
#define REG_P4OUT_P4OUT3_BITS_MASK (1 << 3)
#define REG_P4OUT_P4OUT4_BITS_MASK (1 << 4)
#define REG_P4OUT_P4OUT5_BITS_MASK (1 << 5)
#define REG_P4OUT_P4OUT6_BITS_MASK (1 << 6)
#define REG_P4OUT_P4OUT7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P4DIR
#define REG_P4DIR_P4DIR0_BITS_MASK (1 << 0)
#define REG_P4DIR_P4DIR1_BITS_MASK (1 << 1)
#define REG_P4DIR_P4DIR2_BITS_MASK (1 << 2)
#define REG_P4DIR_P4DIR3_BITS_MASK (1 << 3)
#define REG_P4DIR_P4DIR4_BITS_MASK (1 << 4)
#define REG_P4DIR_P4DIR5_BITS_MASK (1 << 5)
#define REG_P4DIR_P4DIR6_BITS_MASK (1 << 6)
#define REG_P4DIR_P4DIR7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P4REN
#define REG_P4REN_P4REN0_BITS_MASK (1 << 0)
#define REG_P4REN_P4REN1_BITS_MASK (1 << 1)
#define REG_P4REN_P4REN2_BITS_MASK (1 << 2)
#define REG_P4REN_P4REN3_BITS_MASK (1 << 3)
#define REG_P4REN_P4REN4_BITS_MASK (1 << 4)
#define REG_P4REN_P4REN5_BITS_MASK (1 << 5)
#define REG_P4REN_P4REN6_BITS_MASK (1 << 6)
#define REG_P4REN_P4REN7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P4SEL0
#define REG_P4SEL0_P4SEL0_0_BITS_MASK (1 << 0)
#define REG_P4SEL0_P4SEL0_1_BITS_MASK (1 << 1)
#define REG_P4SEL0_P4SEL0_2_BITS_MASK (1 << 2)
#define REG_P4SEL0_P4SEL0_3_BITS_MASK (1 << 3)
#define REG_P4SEL0_P4SEL0_4_BITS_MASK (1 << 4)
#define REG_P4SEL0_P4SEL0_5_BITS_MASK (1 << 5)
#define REG_P4SEL0_P4SEL0_6_BITS_MASK (1 << 6)
#define REG_P4SEL0_P4SEL0_7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P4SEL1
#define REG_P4SEL1_P4SEL1_0_BITS_MASK (1 << 0)
#define REG_P4SEL1_P4SEL1_1_BITS_MASK (1 << 1)
#define REG_P4SEL1_P4SEL1_2_BITS_MASK (1 << 2)
#define REG_P4SEL1_P4SEL1_3_BITS_MASK (1 << 3)
#define REG_P4SEL1_P4SEL1_4_BITS_MASK (1 << 4)
#define REG_P4SEL1_P4SEL1_5_BITS_MASK (1 << 5)
#define REG_P4SEL1_P4SEL1_6_BITS_MASK (1 << 6)
#define REG_P4SEL1_P4SEL1_7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P4SELC
#define REG_P4SELC_P4SELC_0_BITS_MASK (1 << 0)
#define REG_P4SELC_P4SELC_1_BITS_MASK (1 << 1)
#define REG_P4SELC_P4SELC_2_BITS_MASK (1 << 2)
#define REG_P4SELC_P4SELC_3_BITS_MASK (1 << 3)
#define REG_P4SELC_P4SELC_4_BITS_MASK (1 << 4)
#define REG_P4SELC_P4SELC_5_BITS_MASK (1 << 5)
#define REG_P4SELC_P4SELC_6_BITS_MASK (1 << 6)
#define REG_P4SELC_P4SELC_7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P4IV

// FIELDS FOR REGISTER : P4IES
#define REG_P4IES_P4IES0_BITS_MASK (1 << 0)
#define REG_P4IES_P4IES1_BITS_MASK (1 << 1)
#define REG_P4IES_P4IES2_BITS_MASK (1 << 2)
#define REG_P4IES_P4IES3_BITS_MASK (1 << 3)
#define REG_P4IES_P4IES4_BITS_MASK (1 << 4)
#define REG_P4IES_P4IES5_BITS_MASK (1 << 5)
#define REG_P4IES_P4IES6_BITS_MASK (1 << 6)
#define REG_P4IES_P4IES7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P4IE
#define REG_P4IE_P4IE0_BITS_MASK (1 << 0)
#define REG_P4IE_P4IE1_BITS_MASK (1 << 1)
#define REG_P4IE_P4IE2_BITS_MASK (1 << 2)
#define REG_P4IE_P4IE3_BITS_MASK (1 << 3)
#define REG_P4IE_P4IE4_BITS_MASK (1 << 4)
#define REG_P4IE_P4IE5_BITS_MASK (1 << 5)
#define REG_P4IE_P4IE6_BITS_MASK (1 << 6)
#define REG_P4IE_P4IE7_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : P4IFG
#define REG_P4IFG_P4IFG0_BITS_MASK (1 << 0)
#define REG_P4IFG_P4IFG1_BITS_MASK (1 << 1)
#define REG_P4IFG_P4IFG2_BITS_MASK (1 << 2)
#define REG_P4IFG_P4IFG3_BITS_MASK (1 << 3)
#define REG_P4IFG_P4IFG4_BITS_MASK (1 << 4)
#define REG_P4IFG_P4IFG5_BITS_MASK (1 << 5)
#define REG_P4IFG_P4IFG6_BITS_MASK (1 << 6)
#define REG_P4IFG_P4IFG7_BITS_MASK (1 << 7)




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t p3in;
   uint32_t p3out;
   uint32_t p3dir;
   uint32_t p3ren;
   uint32_t p3sel0;
   uint32_t p3sel1;
   uint32_t p3selc;
   uint32_t p3iv;
   uint32_t p3ies;
   uint32_t p3ie;
   uint32_t p3ifg;
   uint32_t p4in;
   uint32_t p4out;
   uint32_t p4dir;
   uint32_t p4ren;
   uint32_t p4sel0;
   uint32_t p4sel1;
   uint32_t p4selc;
   uint32_t p4iv;
   uint32_t p4ies;
   uint32_t p4ie;
   uint32_t p4ifg;
} MSP430_Port_3_4_State;




 // Local functions definitions
// REG: P3IN
static uint64_t reg_p3in_read(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P3IN_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p3in_write(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P3IN_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P3IN_P3IN0_BITS_MASK) != ((*reg) & REG_P3IN_P3IN0_BITS_MASK)) {
        }

        if ((new_value & REG_P3IN_P3IN1_BITS_MASK) != ((*reg) & REG_P3IN_P3IN1_BITS_MASK)) {
        }

        if ((new_value & REG_P3IN_P3IN2_BITS_MASK) != ((*reg) & REG_P3IN_P3IN2_BITS_MASK)) {
        }

        if ((new_value & REG_P3IN_P3IN3_BITS_MASK) != ((*reg) & REG_P3IN_P3IN3_BITS_MASK)) {
        }

        if ((new_value & REG_P3IN_P3IN4_BITS_MASK) != ((*reg) & REG_P3IN_P3IN4_BITS_MASK)) {
        }

        if ((new_value & REG_P3IN_P3IN5_BITS_MASK) != ((*reg) & REG_P3IN_P3IN5_BITS_MASK)) {
        }

        if ((new_value & REG_P3IN_P3IN6_BITS_MASK) != ((*reg) & REG_P3IN_P3IN6_BITS_MASK)) {
        }

        if ((new_value & REG_P3IN_P3IN7_BITS_MASK) != ((*reg) & REG_P3IN_P3IN7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P3OUT
static uint64_t reg_p3out_read(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P3OUT_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p3out_write(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P3OUT_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P3OUT_P3OUT0_BITS_MASK) != ((*reg) & REG_P3OUT_P3OUT0_BITS_MASK)) {
        }

        if ((new_value & REG_P3OUT_P3OUT1_BITS_MASK) != ((*reg) & REG_P3OUT_P3OUT1_BITS_MASK)) {
        }

        if ((new_value & REG_P3OUT_P3OUT2_BITS_MASK) != ((*reg) & REG_P3OUT_P3OUT2_BITS_MASK)) {
        }

        if ((new_value & REG_P3OUT_P3OUT3_BITS_MASK) != ((*reg) & REG_P3OUT_P3OUT3_BITS_MASK)) {
        }

        if ((new_value & REG_P3OUT_P3OUT4_BITS_MASK) != ((*reg) & REG_P3OUT_P3OUT4_BITS_MASK)) {
        }

        if ((new_value & REG_P3OUT_P3OUT5_BITS_MASK) != ((*reg) & REG_P3OUT_P3OUT5_BITS_MASK)) {
        }

        if ((new_value & REG_P3OUT_P3OUT6_BITS_MASK) != ((*reg) & REG_P3OUT_P3OUT6_BITS_MASK)) {
        }

        if ((new_value & REG_P3OUT_P3OUT7_BITS_MASK) != ((*reg) & REG_P3OUT_P3OUT7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P3DIR
static uint64_t reg_p3dir_read(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P3DIR_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p3dir_write(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P3DIR_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P3DIR_P3DIR0_BITS_MASK) != ((*reg) & REG_P3DIR_P3DIR0_BITS_MASK)) {
        }

        if ((new_value & REG_P3DIR_P3DIR1_BITS_MASK) != ((*reg) & REG_P3DIR_P3DIR1_BITS_MASK)) {
        }

        if ((new_value & REG_P3DIR_P3DIR2_BITS_MASK) != ((*reg) & REG_P3DIR_P3DIR2_BITS_MASK)) {
        }

        if ((new_value & REG_P3DIR_P3DIR3_BITS_MASK) != ((*reg) & REG_P3DIR_P3DIR3_BITS_MASK)) {
        }

        if ((new_value & REG_P3DIR_P3DIR4_BITS_MASK) != ((*reg) & REG_P3DIR_P3DIR4_BITS_MASK)) {
        }

        if ((new_value & REG_P3DIR_P3DIR5_BITS_MASK) != ((*reg) & REG_P3DIR_P3DIR5_BITS_MASK)) {
        }

        if ((new_value & REG_P3DIR_P3DIR6_BITS_MASK) != ((*reg) & REG_P3DIR_P3DIR6_BITS_MASK)) {
        }

        if ((new_value & REG_P3DIR_P3DIR7_BITS_MASK) != ((*reg) & REG_P3DIR_P3DIR7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P3REN
static uint64_t reg_p3ren_read(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P3REN_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p3ren_write(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P3REN_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P3REN_P3REN0_BITS_MASK) != ((*reg) & REG_P3REN_P3REN0_BITS_MASK)) {
        }

        if ((new_value & REG_P3REN_P3REN1_BITS_MASK) != ((*reg) & REG_P3REN_P3REN1_BITS_MASK)) {
        }

        if ((new_value & REG_P3REN_P3REN2_BITS_MASK) != ((*reg) & REG_P3REN_P3REN2_BITS_MASK)) {
        }

        if ((new_value & REG_P3REN_P3REN3_BITS_MASK) != ((*reg) & REG_P3REN_P3REN3_BITS_MASK)) {
        }

        if ((new_value & REG_P3REN_P3REN4_BITS_MASK) != ((*reg) & REG_P3REN_P3REN4_BITS_MASK)) {
        }

        if ((new_value & REG_P3REN_P3REN5_BITS_MASK) != ((*reg) & REG_P3REN_P3REN5_BITS_MASK)) {
        }

        if ((new_value & REG_P3REN_P3REN6_BITS_MASK) != ((*reg) & REG_P3REN_P3REN6_BITS_MASK)) {
        }

        if ((new_value & REG_P3REN_P3REN7_BITS_MASK) != ((*reg) & REG_P3REN_P3REN7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P3SEL0
static uint64_t reg_p3sel0_read(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P3SEL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p3sel0_write(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P3SEL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P3SEL0_P3SEL0_0_BITS_MASK) != ((*reg) & REG_P3SEL0_P3SEL0_0_BITS_MASK)) {
        }

        if ((new_value & REG_P3SEL0_P3SEL0_1_BITS_MASK) != ((*reg) & REG_P3SEL0_P3SEL0_1_BITS_MASK)) {
        }

        if ((new_value & REG_P3SEL0_P3SEL0_2_BITS_MASK) != ((*reg) & REG_P3SEL0_P3SEL0_2_BITS_MASK)) {
        }

        if ((new_value & REG_P3SEL0_P3SEL0_3_BITS_MASK) != ((*reg) & REG_P3SEL0_P3SEL0_3_BITS_MASK)) {
        }

        if ((new_value & REG_P3SEL0_P3SEL0_4_BITS_MASK) != ((*reg) & REG_P3SEL0_P3SEL0_4_BITS_MASK)) {
        }

        if ((new_value & REG_P3SEL0_P3SEL0_5_BITS_MASK) != ((*reg) & REG_P3SEL0_P3SEL0_5_BITS_MASK)) {
        }

        if ((new_value & REG_P3SEL0_P3SEL0_6_BITS_MASK) != ((*reg) & REG_P3SEL0_P3SEL0_6_BITS_MASK)) {
        }

        if ((new_value & REG_P3SEL0_P3SEL0_7_BITS_MASK) != ((*reg) & REG_P3SEL0_P3SEL0_7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P3SEL1
static uint64_t reg_p3sel1_read(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P3SEL1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p3sel1_write(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P3SEL1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P3SEL1_P3SEL1_0_BITS_MASK) != ((*reg) & REG_P3SEL1_P3SEL1_0_BITS_MASK)) {
        }

        if ((new_value & REG_P3SEL1_P3SEL1_1_BITS_MASK) != ((*reg) & REG_P3SEL1_P3SEL1_1_BITS_MASK)) {
        }

        if ((new_value & REG_P3SEL1_P3SEL1_2_BITS_MASK) != ((*reg) & REG_P3SEL1_P3SEL1_2_BITS_MASK)) {
        }

        if ((new_value & REG_P3SEL1_P3SEL1_3_BITS_MASK) != ((*reg) & REG_P3SEL1_P3SEL1_3_BITS_MASK)) {
        }

        if ((new_value & REG_P3SEL1_P3SEL1_4_BITS_MASK) != ((*reg) & REG_P3SEL1_P3SEL1_4_BITS_MASK)) {
        }

        if ((new_value & REG_P3SEL1_P3SEL1_5_BITS_MASK) != ((*reg) & REG_P3SEL1_P3SEL1_5_BITS_MASK)) {
        }

        if ((new_value & REG_P3SEL1_P3SEL1_6_BITS_MASK) != ((*reg) & REG_P3SEL1_P3SEL1_6_BITS_MASK)) {
        }

        if ((new_value & REG_P3SEL1_P3SEL1_7_BITS_MASK) != ((*reg) & REG_P3SEL1_P3SEL1_7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P3SELC
static uint64_t reg_p3selc_read(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P3SELC_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p3selc_write(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P3SELC_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P3SELC_P3SELC_0_BITS_MASK) != ((*reg) & REG_P3SELC_P3SELC_0_BITS_MASK)) {
        }

        if ((new_value & REG_P3SELC_P3SELC_1_BITS_MASK) != ((*reg) & REG_P3SELC_P3SELC_1_BITS_MASK)) {
        }

        if ((new_value & REG_P3SELC_P3SELC_2_BITS_MASK) != ((*reg) & REG_P3SELC_P3SELC_2_BITS_MASK)) {
        }

        if ((new_value & REG_P3SELC_P3SELC_3_BITS_MASK) != ((*reg) & REG_P3SELC_P3SELC_3_BITS_MASK)) {
        }

        if ((new_value & REG_P3SELC_P3SELC_4_BITS_MASK) != ((*reg) & REG_P3SELC_P3SELC_4_BITS_MASK)) {
        }

        if ((new_value & REG_P3SELC_P3SELC_5_BITS_MASK) != ((*reg) & REG_P3SELC_P3SELC_5_BITS_MASK)) {
        }

        if ((new_value & REG_P3SELC_P3SELC_6_BITS_MASK) != ((*reg) & REG_P3SELC_P3SELC_6_BITS_MASK)) {
        }

        if ((new_value & REG_P3SELC_P3SELC_7_BITS_MASK) != ((*reg) & REG_P3SELC_P3SELC_7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P3IV
static uint64_t reg_p3iv_read(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P3IV_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p3iv_write(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P3IV_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: P3IES
static uint64_t reg_p3ies_read(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P3IES_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p3ies_write(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P3IES_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P3IES_P3IES0_BITS_MASK) != ((*reg) & REG_P3IES_P3IES0_BITS_MASK)) {
        }

        if ((new_value & REG_P3IES_P3IES1_BITS_MASK) != ((*reg) & REG_P3IES_P3IES1_BITS_MASK)) {
        }

        if ((new_value & REG_P3IES_P3IES2_BITS_MASK) != ((*reg) & REG_P3IES_P3IES2_BITS_MASK)) {
        }

        if ((new_value & REG_P3IES_P3IES3_BITS_MASK) != ((*reg) & REG_P3IES_P3IES3_BITS_MASK)) {
        }

        if ((new_value & REG_P3IES_P3IES4_BITS_MASK) != ((*reg) & REG_P3IES_P3IES4_BITS_MASK)) {
        }

        if ((new_value & REG_P3IES_P3IES5_BITS_MASK) != ((*reg) & REG_P3IES_P3IES5_BITS_MASK)) {
        }

        if ((new_value & REG_P3IES_P3IES6_BITS_MASK) != ((*reg) & REG_P3IES_P3IES6_BITS_MASK)) {
        }

        if ((new_value & REG_P3IES_P3IES7_BITS_MASK) != ((*reg) & REG_P3IES_P3IES7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P3IE
static uint64_t reg_p3ie_read(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P3IE_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p3ie_write(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P3IE_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P3IE_P3IE0_BITS_MASK) != ((*reg) & REG_P3IE_P3IE0_BITS_MASK)) {
        }

        if ((new_value & REG_P3IE_P3IE1_BITS_MASK) != ((*reg) & REG_P3IE_P3IE1_BITS_MASK)) {
        }

        if ((new_value & REG_P3IE_P3IE2_BITS_MASK) != ((*reg) & REG_P3IE_P3IE2_BITS_MASK)) {
        }

        if ((new_value & REG_P3IE_P3IE3_BITS_MASK) != ((*reg) & REG_P3IE_P3IE3_BITS_MASK)) {
        }

        if ((new_value & REG_P3IE_P3IE4_BITS_MASK) != ((*reg) & REG_P3IE_P3IE4_BITS_MASK)) {
        }

        if ((new_value & REG_P3IE_P3IE5_BITS_MASK) != ((*reg) & REG_P3IE_P3IE5_BITS_MASK)) {
        }

        if ((new_value & REG_P3IE_P3IE6_BITS_MASK) != ((*reg) & REG_P3IE_P3IE6_BITS_MASK)) {
        }

        if ((new_value & REG_P3IE_P3IE7_BITS_MASK) != ((*reg) & REG_P3IE_P3IE7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P3IFG
static uint64_t reg_p3ifg_read(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P3IFG_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p3ifg_write(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P3IFG_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P3IFG_P3IFG0_BITS_MASK) != ((*reg) & REG_P3IFG_P3IFG0_BITS_MASK)) {
        }

        if ((new_value & REG_P3IFG_P3IFG1_BITS_MASK) != ((*reg) & REG_P3IFG_P3IFG1_BITS_MASK)) {
        }

        if ((new_value & REG_P3IFG_P3IFG2_BITS_MASK) != ((*reg) & REG_P3IFG_P3IFG2_BITS_MASK)) {
        }

        if ((new_value & REG_P3IFG_P3IFG3_BITS_MASK) != ((*reg) & REG_P3IFG_P3IFG3_BITS_MASK)) {
        }

        if ((new_value & REG_P3IFG_P3IFG4_BITS_MASK) != ((*reg) & REG_P3IFG_P3IFG4_BITS_MASK)) {
        }

        if ((new_value & REG_P3IFG_P3IFG5_BITS_MASK) != ((*reg) & REG_P3IFG_P3IFG5_BITS_MASK)) {
        }

        if ((new_value & REG_P3IFG_P3IFG6_BITS_MASK) != ((*reg) & REG_P3IFG_P3IFG6_BITS_MASK)) {
        }

        if ((new_value & REG_P3IFG_P3IFG7_BITS_MASK) != ((*reg) & REG_P3IFG_P3IFG7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P4IN
static uint64_t reg_p4in_read(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P4IN_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p4in_write(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P4IN_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P4IN_P4IN0_BITS_MASK) != ((*reg) & REG_P4IN_P4IN0_BITS_MASK)) {
        }

        if ((new_value & REG_P4IN_P4IN1_BITS_MASK) != ((*reg) & REG_P4IN_P4IN1_BITS_MASK)) {
        }

        if ((new_value & REG_P4IN_P4IN2_BITS_MASK) != ((*reg) & REG_P4IN_P4IN2_BITS_MASK)) {
        }

        if ((new_value & REG_P4IN_P4IN3_BITS_MASK) != ((*reg) & REG_P4IN_P4IN3_BITS_MASK)) {
        }

        if ((new_value & REG_P4IN_P4IN4_BITS_MASK) != ((*reg) & REG_P4IN_P4IN4_BITS_MASK)) {
        }

        if ((new_value & REG_P4IN_P4IN5_BITS_MASK) != ((*reg) & REG_P4IN_P4IN5_BITS_MASK)) {
        }

        if ((new_value & REG_P4IN_P4IN6_BITS_MASK) != ((*reg) & REG_P4IN_P4IN6_BITS_MASK)) {
        }

        if ((new_value & REG_P4IN_P4IN7_BITS_MASK) != ((*reg) & REG_P4IN_P4IN7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P4OUT
static uint64_t reg_p4out_read(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P4OUT_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p4out_write(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P4OUT_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P4OUT_P4OUT0_BITS_MASK) != ((*reg) & REG_P4OUT_P4OUT0_BITS_MASK)) {
        }

        if ((new_value & REG_P4OUT_P4OUT1_BITS_MASK) != ((*reg) & REG_P4OUT_P4OUT1_BITS_MASK)) {
        }

        if ((new_value & REG_P4OUT_P4OUT2_BITS_MASK) != ((*reg) & REG_P4OUT_P4OUT2_BITS_MASK)) {
        }

        if ((new_value & REG_P4OUT_P4OUT3_BITS_MASK) != ((*reg) & REG_P4OUT_P4OUT3_BITS_MASK)) {
        }

        if ((new_value & REG_P4OUT_P4OUT4_BITS_MASK) != ((*reg) & REG_P4OUT_P4OUT4_BITS_MASK)) {
        }

        if ((new_value & REG_P4OUT_P4OUT5_BITS_MASK) != ((*reg) & REG_P4OUT_P4OUT5_BITS_MASK)) {
        }

        if ((new_value & REG_P4OUT_P4OUT6_BITS_MASK) != ((*reg) & REG_P4OUT_P4OUT6_BITS_MASK)) {
        }

        if ((new_value & REG_P4OUT_P4OUT7_BITS_MASK) != ((*reg) & REG_P4OUT_P4OUT7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P4DIR
static uint64_t reg_p4dir_read(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P4DIR_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p4dir_write(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P4DIR_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P4DIR_P4DIR0_BITS_MASK) != ((*reg) & REG_P4DIR_P4DIR0_BITS_MASK)) {
        }

        if ((new_value & REG_P4DIR_P4DIR1_BITS_MASK) != ((*reg) & REG_P4DIR_P4DIR1_BITS_MASK)) {
        }

        if ((new_value & REG_P4DIR_P4DIR2_BITS_MASK) != ((*reg) & REG_P4DIR_P4DIR2_BITS_MASK)) {
        }

        if ((new_value & REG_P4DIR_P4DIR3_BITS_MASK) != ((*reg) & REG_P4DIR_P4DIR3_BITS_MASK)) {
        }

        if ((new_value & REG_P4DIR_P4DIR4_BITS_MASK) != ((*reg) & REG_P4DIR_P4DIR4_BITS_MASK)) {
        }

        if ((new_value & REG_P4DIR_P4DIR5_BITS_MASK) != ((*reg) & REG_P4DIR_P4DIR5_BITS_MASK)) {
        }

        if ((new_value & REG_P4DIR_P4DIR6_BITS_MASK) != ((*reg) & REG_P4DIR_P4DIR6_BITS_MASK)) {
        }

        if ((new_value & REG_P4DIR_P4DIR7_BITS_MASK) != ((*reg) & REG_P4DIR_P4DIR7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P4REN
static uint64_t reg_p4ren_read(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P4REN_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p4ren_write(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P4REN_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P4REN_P4REN0_BITS_MASK) != ((*reg) & REG_P4REN_P4REN0_BITS_MASK)) {
        }

        if ((new_value & REG_P4REN_P4REN1_BITS_MASK) != ((*reg) & REG_P4REN_P4REN1_BITS_MASK)) {
        }

        if ((new_value & REG_P4REN_P4REN2_BITS_MASK) != ((*reg) & REG_P4REN_P4REN2_BITS_MASK)) {
        }

        if ((new_value & REG_P4REN_P4REN3_BITS_MASK) != ((*reg) & REG_P4REN_P4REN3_BITS_MASK)) {
        }

        if ((new_value & REG_P4REN_P4REN4_BITS_MASK) != ((*reg) & REG_P4REN_P4REN4_BITS_MASK)) {
        }

        if ((new_value & REG_P4REN_P4REN5_BITS_MASK) != ((*reg) & REG_P4REN_P4REN5_BITS_MASK)) {
        }

        if ((new_value & REG_P4REN_P4REN6_BITS_MASK) != ((*reg) & REG_P4REN_P4REN6_BITS_MASK)) {
        }

        if ((new_value & REG_P4REN_P4REN7_BITS_MASK) != ((*reg) & REG_P4REN_P4REN7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P4SEL0
static uint64_t reg_p4sel0_read(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P4SEL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p4sel0_write(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P4SEL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P4SEL0_P4SEL0_0_BITS_MASK) != ((*reg) & REG_P4SEL0_P4SEL0_0_BITS_MASK)) {
        }

        if ((new_value & REG_P4SEL0_P4SEL0_1_BITS_MASK) != ((*reg) & REG_P4SEL0_P4SEL0_1_BITS_MASK)) {
        }

        if ((new_value & REG_P4SEL0_P4SEL0_2_BITS_MASK) != ((*reg) & REG_P4SEL0_P4SEL0_2_BITS_MASK)) {
        }

        if ((new_value & REG_P4SEL0_P4SEL0_3_BITS_MASK) != ((*reg) & REG_P4SEL0_P4SEL0_3_BITS_MASK)) {
        }

        if ((new_value & REG_P4SEL0_P4SEL0_4_BITS_MASK) != ((*reg) & REG_P4SEL0_P4SEL0_4_BITS_MASK)) {
        }

        if ((new_value & REG_P4SEL0_P4SEL0_5_BITS_MASK) != ((*reg) & REG_P4SEL0_P4SEL0_5_BITS_MASK)) {
        }

        if ((new_value & REG_P4SEL0_P4SEL0_6_BITS_MASK) != ((*reg) & REG_P4SEL0_P4SEL0_6_BITS_MASK)) {
        }

        if ((new_value & REG_P4SEL0_P4SEL0_7_BITS_MASK) != ((*reg) & REG_P4SEL0_P4SEL0_7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P4SEL1
static uint64_t reg_p4sel1_read(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P4SEL1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p4sel1_write(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P4SEL1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P4SEL1_P4SEL1_0_BITS_MASK) != ((*reg) & REG_P4SEL1_P4SEL1_0_BITS_MASK)) {
        }

        if ((new_value & REG_P4SEL1_P4SEL1_1_BITS_MASK) != ((*reg) & REG_P4SEL1_P4SEL1_1_BITS_MASK)) {
        }

        if ((new_value & REG_P4SEL1_P4SEL1_2_BITS_MASK) != ((*reg) & REG_P4SEL1_P4SEL1_2_BITS_MASK)) {
        }

        if ((new_value & REG_P4SEL1_P4SEL1_3_BITS_MASK) != ((*reg) & REG_P4SEL1_P4SEL1_3_BITS_MASK)) {
        }

        if ((new_value & REG_P4SEL1_P4SEL1_4_BITS_MASK) != ((*reg) & REG_P4SEL1_P4SEL1_4_BITS_MASK)) {
        }

        if ((new_value & REG_P4SEL1_P4SEL1_5_BITS_MASK) != ((*reg) & REG_P4SEL1_P4SEL1_5_BITS_MASK)) {
        }

        if ((new_value & REG_P4SEL1_P4SEL1_6_BITS_MASK) != ((*reg) & REG_P4SEL1_P4SEL1_6_BITS_MASK)) {
        }

        if ((new_value & REG_P4SEL1_P4SEL1_7_BITS_MASK) != ((*reg) & REG_P4SEL1_P4SEL1_7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P4SELC
static uint64_t reg_p4selc_read(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P4SELC_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p4selc_write(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P4SELC_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P4SELC_P4SELC_0_BITS_MASK) != ((*reg) & REG_P4SELC_P4SELC_0_BITS_MASK)) {
        }

        if ((new_value & REG_P4SELC_P4SELC_1_BITS_MASK) != ((*reg) & REG_P4SELC_P4SELC_1_BITS_MASK)) {
        }

        if ((new_value & REG_P4SELC_P4SELC_2_BITS_MASK) != ((*reg) & REG_P4SELC_P4SELC_2_BITS_MASK)) {
        }

        if ((new_value & REG_P4SELC_P4SELC_3_BITS_MASK) != ((*reg) & REG_P4SELC_P4SELC_3_BITS_MASK)) {
        }

        if ((new_value & REG_P4SELC_P4SELC_4_BITS_MASK) != ((*reg) & REG_P4SELC_P4SELC_4_BITS_MASK)) {
        }

        if ((new_value & REG_P4SELC_P4SELC_5_BITS_MASK) != ((*reg) & REG_P4SELC_P4SELC_5_BITS_MASK)) {
        }

        if ((new_value & REG_P4SELC_P4SELC_6_BITS_MASK) != ((*reg) & REG_P4SELC_P4SELC_6_BITS_MASK)) {
        }

        if ((new_value & REG_P4SELC_P4SELC_7_BITS_MASK) != ((*reg) & REG_P4SELC_P4SELC_7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P4IV
static uint64_t reg_p4iv_read(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P4IV_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p4iv_write(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P4IV_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: P4IES
static uint64_t reg_p4ies_read(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P4IES_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p4ies_write(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P4IES_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P4IES_P4IES0_BITS_MASK) != ((*reg) & REG_P4IES_P4IES0_BITS_MASK)) {
        }

        if ((new_value & REG_P4IES_P4IES1_BITS_MASK) != ((*reg) & REG_P4IES_P4IES1_BITS_MASK)) {
        }

        if ((new_value & REG_P4IES_P4IES2_BITS_MASK) != ((*reg) & REG_P4IES_P4IES2_BITS_MASK)) {
        }

        if ((new_value & REG_P4IES_P4IES3_BITS_MASK) != ((*reg) & REG_P4IES_P4IES3_BITS_MASK)) {
        }

        if ((new_value & REG_P4IES_P4IES4_BITS_MASK) != ((*reg) & REG_P4IES_P4IES4_BITS_MASK)) {
        }

        if ((new_value & REG_P4IES_P4IES5_BITS_MASK) != ((*reg) & REG_P4IES_P4IES5_BITS_MASK)) {
        }

        if ((new_value & REG_P4IES_P4IES6_BITS_MASK) != ((*reg) & REG_P4IES_P4IES6_BITS_MASK)) {
        }

        if ((new_value & REG_P4IES_P4IES7_BITS_MASK) != ((*reg) & REG_P4IES_P4IES7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P4IE
static uint64_t reg_p4ie_read(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P4IE_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p4ie_write(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P4IE_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P4IE_P4IE0_BITS_MASK) != ((*reg) & REG_P4IE_P4IE0_BITS_MASK)) {
        }

        if ((new_value & REG_P4IE_P4IE1_BITS_MASK) != ((*reg) & REG_P4IE_P4IE1_BITS_MASK)) {
        }

        if ((new_value & REG_P4IE_P4IE2_BITS_MASK) != ((*reg) & REG_P4IE_P4IE2_BITS_MASK)) {
        }

        if ((new_value & REG_P4IE_P4IE3_BITS_MASK) != ((*reg) & REG_P4IE_P4IE3_BITS_MASK)) {
        }

        if ((new_value & REG_P4IE_P4IE4_BITS_MASK) != ((*reg) & REG_P4IE_P4IE4_BITS_MASK)) {
        }

        if ((new_value & REG_P4IE_P4IE5_BITS_MASK) != ((*reg) & REG_P4IE_P4IE5_BITS_MASK)) {
        }

        if ((new_value & REG_P4IE_P4IE6_BITS_MASK) != ((*reg) & REG_P4IE_P4IE6_BITS_MASK)) {
        }

        if ((new_value & REG_P4IE_P4IE7_BITS_MASK) != ((*reg) & REG_P4IE_P4IE7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: P4IFG
static uint64_t reg_p4ifg_read(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_P4IFG_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_p4ifg_write(MSP430_Port_3_4_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_P4IFG_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_P4IFG_P4IFG0_BITS_MASK) != ((*reg) & REG_P4IFG_P4IFG0_BITS_MASK)) {
        }

        if ((new_value & REG_P4IFG_P4IFG1_BITS_MASK) != ((*reg) & REG_P4IFG_P4IFG1_BITS_MASK)) {
        }

        if ((new_value & REG_P4IFG_P4IFG2_BITS_MASK) != ((*reg) & REG_P4IFG_P4IFG2_BITS_MASK)) {
        }

        if ((new_value & REG_P4IFG_P4IFG3_BITS_MASK) != ((*reg) & REG_P4IFG_P4IFG3_BITS_MASK)) {
        }

        if ((new_value & REG_P4IFG_P4IFG4_BITS_MASK) != ((*reg) & REG_P4IFG_P4IFG4_BITS_MASK)) {
        }

        if ((new_value & REG_P4IFG_P4IFG5_BITS_MASK) != ((*reg) & REG_P4IFG_P4IFG5_BITS_MASK)) {
        }

        if ((new_value & REG_P4IFG_P4IFG6_BITS_MASK) != ((*reg) & REG_P4IFG_P4IFG6_BITS_MASK)) {
        }

        if ((new_value & REG_P4IFG_P4IFG7_BITS_MASK) != ((*reg) & REG_P4IFG_P4IFG7_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_Port_3_4_State *s = MSP430FR5739_PORT_3_4(opaque);
    uint64_t retvalue = 0;

    if ((addr >= P3IN) && ((addr + size) <= (P3IN + 1))) {
        retvalue = reg_p3in_read(s, &s->p3in, (addr - P3IN));
    } else if ((addr >= P3OUT) && ((addr + size) <= (P3OUT + 1))) {
        retvalue = reg_p3out_read(s, &s->p3out, (addr - P3OUT));
    } else if ((addr >= P3DIR) && ((addr + size) <= (P3DIR + 1))) {
        retvalue = reg_p3dir_read(s, &s->p3dir, (addr - P3DIR));
    } else if ((addr >= P3REN) && ((addr + size) <= (P3REN + 1))) {
        retvalue = reg_p3ren_read(s, &s->p3ren, (addr - P3REN));
    } else if ((addr >= P3SEL0) && ((addr + size) <= (P3SEL0 + 1))) {
        retvalue = reg_p3sel0_read(s, &s->p3sel0, (addr - P3SEL0));
    } else if ((addr >= P3SEL1) && ((addr + size) <= (P3SEL1 + 1))) {
        retvalue = reg_p3sel1_read(s, &s->p3sel1, (addr - P3SEL1));
    } else if ((addr >= P3SELC) && ((addr + size) <= (P3SELC + 1))) {
        retvalue = reg_p3selc_read(s, &s->p3selc, (addr - P3SELC));
    } else if ((addr >= P3IV) && ((addr + size) <= (P3IV + 2))) {
        retvalue = reg_p3iv_read(s, &s->p3iv, (addr - P3IV));
    } else if ((addr >= P3IES) && ((addr + size) <= (P3IES + 1))) {
        retvalue = reg_p3ies_read(s, &s->p3ies, (addr - P3IES));
    } else if ((addr >= P3IE) && ((addr + size) <= (P3IE + 1))) {
        retvalue = reg_p3ie_read(s, &s->p3ie, (addr - P3IE));
    } else if ((addr >= P3IFG) && ((addr + size) <= (P3IFG + 1))) {
        retvalue = reg_p3ifg_read(s, &s->p3ifg, (addr - P3IFG));
    } else if ((addr >= P4IN) && ((addr + size) <= (P4IN + 1))) {
        retvalue = reg_p4in_read(s, &s->p4in, (addr - P4IN));
    } else if ((addr >= P4OUT) && ((addr + size) <= (P4OUT + 1))) {
        retvalue = reg_p4out_read(s, &s->p4out, (addr - P4OUT));
    } else if ((addr >= P4DIR) && ((addr + size) <= (P4DIR + 1))) {
        retvalue = reg_p4dir_read(s, &s->p4dir, (addr - P4DIR));
    } else if ((addr >= P4REN) && ((addr + size) <= (P4REN + 1))) {
        retvalue = reg_p4ren_read(s, &s->p4ren, (addr - P4REN));
    } else if ((addr >= P4SEL0) && ((addr + size) <= (P4SEL0 + 1))) {
        retvalue = reg_p4sel0_read(s, &s->p4sel0, (addr - P4SEL0));
    } else if ((addr >= P4SEL1) && ((addr + size) <= (P4SEL1 + 1))) {
        retvalue = reg_p4sel1_read(s, &s->p4sel1, (addr - P4SEL1));
    } else if ((addr >= P4SELC) && ((addr + size) <= (P4SELC + 1))) {
        retvalue = reg_p4selc_read(s, &s->p4selc, (addr - P4SELC));
    } else if ((addr >= P4IV) && ((addr + size) <= (P4IV + 2))) {
        retvalue = reg_p4iv_read(s, &s->p4iv, (addr - P4IV));
    } else if ((addr >= P4IES) && ((addr + size) <= (P4IES + 1))) {
        retvalue = reg_p4ies_read(s, &s->p4ies, (addr - P4IES));
    } else if ((addr >= P4IE) && ((addr + size) <= (P4IE + 1))) {
        retvalue = reg_p4ie_read(s, &s->p4ie, (addr - P4IE));
    } else if ((addr >= P4IFG) && ((addr + size) <= (P4IFG + 1))) {
        retvalue = reg_p4ifg_read(s, &s->p4ifg, (addr - P4IFG));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_Port_3_4_State *s = MSP430FR5739_PORT_3_4(opaque);

    if ((addr >= P3IN) && ((addr + size) <= (P3IN + 1))) {
        reg_p3in_write(s, &s->p3in, (addr - P3IN), value, size);
    } else if ((addr >= P3OUT) && ((addr + size) <= (P3OUT + 1))) {
        reg_p3out_write(s, &s->p3out, (addr - P3OUT), value, size);
    } else if ((addr >= P3DIR) && ((addr + size) <= (P3DIR + 1))) {
        reg_p3dir_write(s, &s->p3dir, (addr - P3DIR), value, size);
    } else if ((addr >= P3REN) && ((addr + size) <= (P3REN + 1))) {
        reg_p3ren_write(s, &s->p3ren, (addr - P3REN), value, size);
    } else if ((addr >= P3SEL0) && ((addr + size) <= (P3SEL0 + 1))) {
        reg_p3sel0_write(s, &s->p3sel0, (addr - P3SEL0), value, size);
    } else if ((addr >= P3SEL1) && ((addr + size) <= (P3SEL1 + 1))) {
        reg_p3sel1_write(s, &s->p3sel1, (addr - P3SEL1), value, size);
    } else if ((addr >= P3SELC) && ((addr + size) <= (P3SELC + 1))) {
        reg_p3selc_write(s, &s->p3selc, (addr - P3SELC), value, size);
    } else if ((addr >= P3IV) && ((addr + size) <= (P3IV + 2))) {
        reg_p3iv_write(s, &s->p3iv, (addr - P3IV), value, size);
    } else if ((addr >= P3IES) && ((addr + size) <= (P3IES + 1))) {
        reg_p3ies_write(s, &s->p3ies, (addr - P3IES), value, size);
    } else if ((addr >= P3IE) && ((addr + size) <= (P3IE + 1))) {
        reg_p3ie_write(s, &s->p3ie, (addr - P3IE), value, size);
    } else if ((addr >= P3IFG) && ((addr + size) <= (P3IFG + 1))) {
        reg_p3ifg_write(s, &s->p3ifg, (addr - P3IFG), value, size);
    } else if ((addr >= P4IN) && ((addr + size) <= (P4IN + 1))) {
        reg_p4in_write(s, &s->p4in, (addr - P4IN), value, size);
    } else if ((addr >= P4OUT) && ((addr + size) <= (P4OUT + 1))) {
        reg_p4out_write(s, &s->p4out, (addr - P4OUT), value, size);
    } else if ((addr >= P4DIR) && ((addr + size) <= (P4DIR + 1))) {
        reg_p4dir_write(s, &s->p4dir, (addr - P4DIR), value, size);
    } else if ((addr >= P4REN) && ((addr + size) <= (P4REN + 1))) {
        reg_p4ren_write(s, &s->p4ren, (addr - P4REN), value, size);
    } else if ((addr >= P4SEL0) && ((addr + size) <= (P4SEL0 + 1))) {
        reg_p4sel0_write(s, &s->p4sel0, (addr - P4SEL0), value, size);
    } else if ((addr >= P4SEL1) && ((addr + size) <= (P4SEL1 + 1))) {
        reg_p4sel1_write(s, &s->p4sel1, (addr - P4SEL1), value, size);
    } else if ((addr >= P4SELC) && ((addr + size) <= (P4SELC + 1))) {
        reg_p4selc_write(s, &s->p4selc, (addr - P4SELC), value, size);
    } else if ((addr >= P4IV) && ((addr + size) <= (P4IV + 2))) {
        reg_p4iv_write(s, &s->p4iv, (addr - P4IV), value, size);
    } else if ((addr >= P4IES) && ((addr + size) <= (P4IES + 1))) {
        reg_p4ies_write(s, &s->p4ies, (addr - P4IES), value, size);
    } else if ((addr >= P4IE) && ((addr + size) <= (P4IE + 1))) {
        reg_p4ie_write(s, &s->p4ie, (addr - P4IE), value, size);
    } else if ((addr >= P4IFG) && ((addr + size) <= (P4IFG + 1))) {
        reg_p4ifg_write(s, &s->p4ifg, (addr - P4IFG), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_Port_3_4_State *device = MSP430FR5739_PORT_3_4(dev);

   device->p3in = 0x0;
   device->p3out = 0x0;
   device->p3dir = 0x0;
   device->p3ren = 0x0;
   device->p3sel0 = 0x0;
   device->p3sel1 = 0x0;
   device->p3selc = 0x0;
   device->p3iv = 0;
   device->p3ies = 0x0;
   device->p3ie = 0x0;
   device->p3ifg = 0x0;
   device->p4in = 0x0;
   device->p4out = 0x0;
   device->p4dir = 0x0;
   device->p4ren = 0x0;
   device->p4sel0 = 0x0;
   device->p4sel1 = 0x0;
   device->p4selc = 0x0;
   device->p4iv = 0;
   device->p4ies = 0x0;
   device->p4ie = 0x0;
   device->p4ifg = 0x0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_Port_3_4_State *s = MSP430FR5739_PORT_3_4(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_PORT_3_4, SIZE);
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
    .name          = TYPE_MSP430FR5739_PORT_3_4,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_Port_3_4_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_port_3_4_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_port_3_4_register_types)
