// Peripheral name: Port_A

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_PORT_A "msp430fr5739_port_a"
#define SIZE 10
#define MSP430FR5739_PORT_A(obj) OBJECT_CHECK(MSP430_Port_A_State, (obj), TYPE_MSP430FR5739_PORT_A)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x0200

#define PAIN 0
#define PAOUT 2
#define PADIR 4
#define PAREN 6
#define PASEL0 10
#define PASEL1 12
#define PASELC 22
#define PAIES 24
#define PAIE 26
#define PAIFG 28

// REGISTERS RESET VALUE
#define REG_PAIN_RESET_VALUE 0x0
#define REG_PAOUT_RESET_VALUE 0x0
#define REG_PADIR_RESET_VALUE 0x0
#define REG_PAREN_RESET_VALUE 0x0
#define REG_PASEL0_RESET_VALUE 0x0
#define REG_PASEL1_RESET_VALUE 0x0
#define REG_PASELC_RESET_VALUE 0x0
#define REG_PAIES_RESET_VALUE 0x0
#define REG_PAIE_RESET_VALUE 0x0
#define REG_PAIFG_RESET_VALUE 0x0

// REGISTERS BITS MASKS
#define REG_PAIN_BITS_MASK 0xffff
#define REG_PAOUT_BITS_MASK 0xffff
#define REG_PADIR_BITS_MASK 0xffff
#define REG_PAREN_BITS_MASK 0xffff
#define REG_PASEL0_BITS_MASK 0xffff
#define REG_PASEL1_BITS_MASK 0xffff
#define REG_PASELC_BITS_MASK 0xffff
#define REG_PAIES_BITS_MASK 0xffff
#define REG_PAIE_BITS_MASK 0xffff
#define REG_PAIFG_BITS_MASK 0xffff

// FIELDS FOR REGISTER : PAIN
#define REG_PAIN0_BITS_MASK (1 << 0)
#define REG_PAIN1_BITS_MASK (1 << 1)
#define REG_PAIN2_BITS_MASK (1 << 2)
#define REG_PAIN3_BITS_MASK (1 << 3)
#define REG_PAIN4_BITS_MASK (1 << 4)
#define REG_PAIN5_BITS_MASK (1 << 5)
#define REG_PAIN6_BITS_MASK (1 << 6)
#define REG_PAIN7_BITS_MASK (1 << 7)
#define REG_PAIN8_BITS_MASK (1 << 8)
#define REG_PAIN9_BITS_MASK (1 << 9)
#define REG_PAIN10_BITS_MASK (1 << 10)
#define REG_PAIN11_BITS_MASK (1 << 11)
#define REG_PAIN12_BITS_MASK (1 << 12)
#define REG_PAIN13_BITS_MASK (1 << 13)
#define REG_PAIN14_BITS_MASK (1 << 14)
#define REG_PAIN15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PAOUT
#define REG_PAOUT0_BITS_MASK (1 << 0)
#define REG_PAOUT1_BITS_MASK (1 << 1)
#define REG_PAOUT2_BITS_MASK (1 << 2)
#define REG_PAOUT3_BITS_MASK (1 << 3)
#define REG_PAOUT4_BITS_MASK (1 << 4)
#define REG_PAOUT5_BITS_MASK (1 << 5)
#define REG_PAOUT6_BITS_MASK (1 << 6)
#define REG_PAOUT7_BITS_MASK (1 << 7)
#define REG_PAOUT8_BITS_MASK (1 << 8)
#define REG_PAOUT9_BITS_MASK (1 << 9)
#define REG_PAOUT10_BITS_MASK (1 << 10)
#define REG_PAOUT11_BITS_MASK (1 << 11)
#define REG_PAOUT12_BITS_MASK (1 << 12)
#define REG_PAOUT13_BITS_MASK (1 << 13)
#define REG_PAOUT14_BITS_MASK (1 << 14)
#define REG_PAOUT15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PADIR
#define REG_PADIR0_BITS_MASK (1 << 0)
#define REG_PADIR1_BITS_MASK (1 << 1)
#define REG_PADIR2_BITS_MASK (1 << 2)
#define REG_PADIR3_BITS_MASK (1 << 3)
#define REG_PADIR4_BITS_MASK (1 << 4)
#define REG_PADIR5_BITS_MASK (1 << 5)
#define REG_PADIR6_BITS_MASK (1 << 6)
#define REG_PADIR7_BITS_MASK (1 << 7)
#define REG_PADIR8_BITS_MASK (1 << 8)
#define REG_PADIR9_BITS_MASK (1 << 9)
#define REG_PADIR10_BITS_MASK (1 << 10)
#define REG_PADIR11_BITS_MASK (1 << 11)
#define REG_PADIR12_BITS_MASK (1 << 12)
#define REG_PADIR13_BITS_MASK (1 << 13)
#define REG_PADIR14_BITS_MASK (1 << 14)
#define REG_PADIR15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PAREN
#define REG_PAREN0_BITS_MASK (1 << 0)
#define REG_PAREN1_BITS_MASK (1 << 1)
#define REG_PAREN2_BITS_MASK (1 << 2)
#define REG_PAREN3_BITS_MASK (1 << 3)
#define REG_PAREN4_BITS_MASK (1 << 4)
#define REG_PAREN5_BITS_MASK (1 << 5)
#define REG_PAREN6_BITS_MASK (1 << 6)
#define REG_PAREN7_BITS_MASK (1 << 7)
#define REG_PAREN8_BITS_MASK (1 << 8)
#define REG_PAREN9_BITS_MASK (1 << 9)
#define REG_PAREN10_BITS_MASK (1 << 10)
#define REG_PAREN11_BITS_MASK (1 << 11)
#define REG_PAREN12_BITS_MASK (1 << 12)
#define REG_PAREN13_BITS_MASK (1 << 13)
#define REG_PAREN14_BITS_MASK (1 << 14)
#define REG_PAREN15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PASEL0
#define REG_PASEL0_0_BITS_MASK (1 << 0)
#define REG_PASEL0_1_BITS_MASK (1 << 1)
#define REG_PASEL0_2_BITS_MASK (1 << 2)
#define REG_PASEL0_3_BITS_MASK (1 << 3)
#define REG_PASEL0_4_BITS_MASK (1 << 4)
#define REG_PASEL0_5_BITS_MASK (1 << 5)
#define REG_PASEL0_6_BITS_MASK (1 << 6)
#define REG_PASEL0_7_BITS_MASK (1 << 7)
#define REG_PASEL0_8_BITS_MASK (1 << 8)
#define REG_PASEL0_9_BITS_MASK (1 << 9)
#define REG_PASEL0_10_BITS_MASK (1 << 10)
#define REG_PASEL0_11_BITS_MASK (1 << 11)
#define REG_PASEL0_12_BITS_MASK (1 << 12)
#define REG_PASEL0_13_BITS_MASK (1 << 13)
#define REG_PASEL0_14_BITS_MASK (1 << 14)
#define REG_PASEL0_15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PASEL1
#define REG_PASEL1_0_BITS_MASK (1 << 0)
#define REG_PASEL1_1_BITS_MASK (1 << 1)
#define REG_PASEL1_2_BITS_MASK (1 << 2)
#define REG_PASEL1_3_BITS_MASK (1 << 3)
#define REG_PASEL1_4_BITS_MASK (1 << 4)
#define REG_PASEL1_5_BITS_MASK (1 << 5)
#define REG_PASEL1_6_BITS_MASK (1 << 6)
#define REG_PASEL1_7_BITS_MASK (1 << 7)
#define REG_PASEL1_8_BITS_MASK (1 << 8)
#define REG_PASEL1_9_BITS_MASK (1 << 9)
#define REG_PASEL1_10_BITS_MASK (1 << 10)
#define REG_PASEL1_11_BITS_MASK (1 << 11)
#define REG_PASEL1_12_BITS_MASK (1 << 12)
#define REG_PASEL1_13_BITS_MASK (1 << 13)
#define REG_PASEL1_14_BITS_MASK (1 << 14)
#define REG_PASEL1_15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PASELC
#define REG_PASELC_0_BITS_MASK (1 << 0)
#define REG_PASELC_1_BITS_MASK (1 << 1)
#define REG_PASELC_2_BITS_MASK (1 << 2)
#define REG_PASELC_3_BITS_MASK (1 << 3)
#define REG_PASELC_4_BITS_MASK (1 << 4)
#define REG_PASELC_5_BITS_MASK (1 << 5)
#define REG_PASELC_6_BITS_MASK (1 << 6)
#define REG_PASELC_7_BITS_MASK (1 << 7)
#define REG_PASELC_8_BITS_MASK (1 << 8)
#define REG_PASELC_9_BITS_MASK (1 << 9)
#define REG_PASELC_10_BITS_MASK (1 << 10)
#define REG_PASELC_11_BITS_MASK (1 << 11)
#define REG_PASELC_12_BITS_MASK (1 << 12)
#define REG_PASELC_13_BITS_MASK (1 << 13)
#define REG_PASELC_14_BITS_MASK (1 << 14)
#define REG_PASELC_15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PAIES
#define REG_PAIES0_BITS_MASK (1 << 0)
#define REG_PAIES1_BITS_MASK (1 << 1)
#define REG_PAIES2_BITS_MASK (1 << 2)
#define REG_PAIES3_BITS_MASK (1 << 3)
#define REG_PAIES4_BITS_MASK (1 << 4)
#define REG_PAIES5_BITS_MASK (1 << 5)
#define REG_PAIES6_BITS_MASK (1 << 6)
#define REG_PAIES7_BITS_MASK (1 << 7)
#define REG_PAIES8_BITS_MASK (1 << 8)
#define REG_PAIES9_BITS_MASK (1 << 9)
#define REG_PAIES10_BITS_MASK (1 << 10)
#define REG_PAIES11_BITS_MASK (1 << 11)
#define REG_PAIES12_BITS_MASK (1 << 12)
#define REG_PAIES13_BITS_MASK (1 << 13)
#define REG_PAIES14_BITS_MASK (1 << 14)
#define REG_PAIES15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PAIE
#define REG_PAIE0_BITS_MASK (1 << 0)
#define REG_PAIE1_BITS_MASK (1 << 1)
#define REG_PAIE2_BITS_MASK (1 << 2)
#define REG_PAIE3_BITS_MASK (1 << 3)
#define REG_PAIE4_BITS_MASK (1 << 4)
#define REG_PAIE5_BITS_MASK (1 << 5)
#define REG_PAIE6_BITS_MASK (1 << 6)
#define REG_PAIE7_BITS_MASK (1 << 7)
#define REG_PAIE8_BITS_MASK (1 << 8)
#define REG_PAIE9_BITS_MASK (1 << 9)
#define REG_PAIE10_BITS_MASK (1 << 10)
#define REG_PAIE11_BITS_MASK (1 << 11)
#define REG_PAIE12_BITS_MASK (1 << 12)
#define REG_PAIE13_BITS_MASK (1 << 13)
#define REG_PAIE14_BITS_MASK (1 << 14)
#define REG_PAIE15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PAIFG
#define REG_PAIFG0_BITS_MASK (1 << 0)
#define REG_PAIFG1_BITS_MASK (1 << 1)
#define REG_PAIFG2_BITS_MASK (1 << 2)
#define REG_PAIFG3_BITS_MASK (1 << 3)
#define REG_PAIFG4_BITS_MASK (1 << 4)
#define REG_PAIFG5_BITS_MASK (1 << 5)
#define REG_PAIFG6_BITS_MASK (1 << 6)
#define REG_PAIFG7_BITS_MASK (1 << 7)
#define REG_PAIFG8_BITS_MASK (1 << 8)
#define REG_PAIFG9_BITS_MASK (1 << 9)
#define REG_PAIFG10_BITS_MASK (1 << 10)
#define REG_PAIFG11_BITS_MASK (1 << 11)
#define REG_PAIFG12_BITS_MASK (1 << 12)
#define REG_PAIFG13_BITS_MASK (1 << 13)
#define REG_PAIFG14_BITS_MASK (1 << 14)
#define REG_PAIFG15_BITS_MASK (1 << 15)




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t pain;
   uint32_t paout;
   uint32_t padir;
   uint32_t paren;
   uint32_t pasel0;
   uint32_t pasel1;
   uint32_t paselc;
   uint32_t paies;
   uint32_t paie;
   uint32_t paifg;
} MSP430_Port_A_State;




 // Local functions definitions
// REG: PAIN
static uint64_t reg_pain_read(MSP430_Port_A_State *dev, uint32_t *reg) {
    return ((*reg) & REG_PAIN_BITS_MASK);
}

static void reg_pain_write(MSP430_Port_A_State *dev, uint32_t *reg, uint64_t val, unsigned int size) {
    uint32_t new_value = val & REG_PAIN_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PAIN0_BITS_MASK) != ((*reg) & REG_PAIN0_BITS_MASK)) {
        }
        if ((new_value & REG_PAIN1_BITS_MASK) != ((*reg) & REG_PAIN1_BITS_MASK)) {
        }
        if ((new_value & REG_PAIN2_BITS_MASK) != ((*reg) & REG_PAIN2_BITS_MASK)) {
        }
        if ((new_value & REG_PAIN3_BITS_MASK) != ((*reg) & REG_PAIN3_BITS_MASK)) {
        }
        if ((new_value & REG_PAIN4_BITS_MASK) != ((*reg) & REG_PAIN4_BITS_MASK)) {
        }
        if ((new_value & REG_PAIN5_BITS_MASK) != ((*reg) & REG_PAIN5_BITS_MASK)) {
        }
        if ((new_value & REG_PAIN6_BITS_MASK) != ((*reg) & REG_PAIN6_BITS_MASK)) {
        }
        if ((new_value & REG_PAIN7_BITS_MASK) != ((*reg) & REG_PAIN7_BITS_MASK)) {
        }
        if ((new_value & REG_PAIN8_BITS_MASK) != ((*reg) & REG_PAIN8_BITS_MASK)) {
        }
        if ((new_value & REG_PAIN9_BITS_MASK) != ((*reg) & REG_PAIN9_BITS_MASK)) {
        }
        if ((new_value & REG_PAIN10_BITS_MASK) != ((*reg) & REG_PAIN10_BITS_MASK)) {
        }
        if ((new_value & REG_PAIN11_BITS_MASK) != ((*reg) & REG_PAIN11_BITS_MASK)) {
        }
        if ((new_value & REG_PAIN12_BITS_MASK) != ((*reg) & REG_PAIN12_BITS_MASK)) {
        }
        if ((new_value & REG_PAIN13_BITS_MASK) != ((*reg) & REG_PAIN13_BITS_MASK)) {
        }
        if ((new_value & REG_PAIN14_BITS_MASK) != ((*reg) & REG_PAIN14_BITS_MASK)) {
        }
        if ((new_value & REG_PAIN15_BITS_MASK) != ((*reg) & REG_PAIN15_BITS_MASK)) {
        }
        (*reg) = new_value;
    }
}

// REG: PAOUT
static uint64_t reg_paout_read(MSP430_Port_A_State *dev, uint32_t *reg) {
    return ((*reg) & REG_PAOUT_BITS_MASK);
}

static void reg_paout_write(MSP430_Port_A_State *dev, uint32_t *reg, uint64_t val, unsigned int size) {
    uint32_t new_value = val & REG_PAOUT_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PAOUT0_BITS_MASK) != ((*reg) & REG_PAOUT0_BITS_MASK)) {
        }
        if ((new_value & REG_PAOUT1_BITS_MASK) != ((*reg) & REG_PAOUT1_BITS_MASK)) {
        }
        if ((new_value & REG_PAOUT2_BITS_MASK) != ((*reg) & REG_PAOUT2_BITS_MASK)) {
        }
        if ((new_value & REG_PAOUT3_BITS_MASK) != ((*reg) & REG_PAOUT3_BITS_MASK)) {
        }
        if ((new_value & REG_PAOUT4_BITS_MASK) != ((*reg) & REG_PAOUT4_BITS_MASK)) {
        }
        if ((new_value & REG_PAOUT5_BITS_MASK) != ((*reg) & REG_PAOUT5_BITS_MASK)) {
        }
        if ((new_value & REG_PAOUT6_BITS_MASK) != ((*reg) & REG_PAOUT6_BITS_MASK)) {
        }
        if ((new_value & REG_PAOUT7_BITS_MASK) != ((*reg) & REG_PAOUT7_BITS_MASK)) {
        }
        if ((new_value & REG_PAOUT8_BITS_MASK) != ((*reg) & REG_PAOUT8_BITS_MASK)) {
        }
        if ((new_value & REG_PAOUT9_BITS_MASK) != ((*reg) & REG_PAOUT9_BITS_MASK)) {
        }
        if ((new_value & REG_PAOUT10_BITS_MASK) != ((*reg) & REG_PAOUT10_BITS_MASK)) {
        }
        if ((new_value & REG_PAOUT11_BITS_MASK) != ((*reg) & REG_PAOUT11_BITS_MASK)) {
        }
        if ((new_value & REG_PAOUT12_BITS_MASK) != ((*reg) & REG_PAOUT12_BITS_MASK)) {
        }
        if ((new_value & REG_PAOUT13_BITS_MASK) != ((*reg) & REG_PAOUT13_BITS_MASK)) {
        }
        if ((new_value & REG_PAOUT14_BITS_MASK) != ((*reg) & REG_PAOUT14_BITS_MASK)) {
        }
        if ((new_value & REG_PAOUT15_BITS_MASK) != ((*reg) & REG_PAOUT15_BITS_MASK)) {
        }
        (*reg) = new_value;
    }
}

// REG: PADIR
static uint64_t reg_padir_read(MSP430_Port_A_State *dev, uint32_t *reg) {
    return ((*reg) & REG_PADIR_BITS_MASK);
}

static void reg_padir_write(MSP430_Port_A_State *dev, uint32_t *reg, uint64_t val, unsigned int size) {
    uint32_t new_value = val & REG_PADIR_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PADIR0_BITS_MASK) != ((*reg) & REG_PADIR0_BITS_MASK)) {
        }
        if ((new_value & REG_PADIR1_BITS_MASK) != ((*reg) & REG_PADIR1_BITS_MASK)) {
        }
        if ((new_value & REG_PADIR2_BITS_MASK) != ((*reg) & REG_PADIR2_BITS_MASK)) {
        }
        if ((new_value & REG_PADIR3_BITS_MASK) != ((*reg) & REG_PADIR3_BITS_MASK)) {
        }
        if ((new_value & REG_PADIR4_BITS_MASK) != ((*reg) & REG_PADIR4_BITS_MASK)) {
        }
        if ((new_value & REG_PADIR5_BITS_MASK) != ((*reg) & REG_PADIR5_BITS_MASK)) {
        }
        if ((new_value & REG_PADIR6_BITS_MASK) != ((*reg) & REG_PADIR6_BITS_MASK)) {
        }
        if ((new_value & REG_PADIR7_BITS_MASK) != ((*reg) & REG_PADIR7_BITS_MASK)) {
        }
        if ((new_value & REG_PADIR8_BITS_MASK) != ((*reg) & REG_PADIR8_BITS_MASK)) {
        }
        if ((new_value & REG_PADIR9_BITS_MASK) != ((*reg) & REG_PADIR9_BITS_MASK)) {
        }
        if ((new_value & REG_PADIR10_BITS_MASK) != ((*reg) & REG_PADIR10_BITS_MASK)) {
        }
        if ((new_value & REG_PADIR11_BITS_MASK) != ((*reg) & REG_PADIR11_BITS_MASK)) {
        }
        if ((new_value & REG_PADIR12_BITS_MASK) != ((*reg) & REG_PADIR12_BITS_MASK)) {
        }
        if ((new_value & REG_PADIR13_BITS_MASK) != ((*reg) & REG_PADIR13_BITS_MASK)) {
        }
        if ((new_value & REG_PADIR14_BITS_MASK) != ((*reg) & REG_PADIR14_BITS_MASK)) {
        }
        if ((new_value & REG_PADIR15_BITS_MASK) != ((*reg) & REG_PADIR15_BITS_MASK)) {
        }
        (*reg) = new_value;
    }
}

// REG: PAREN
static uint64_t reg_paren_read(MSP430_Port_A_State *dev, uint32_t *reg) {
    return ((*reg) & REG_PAREN_BITS_MASK);
}

static void reg_paren_write(MSP430_Port_A_State *dev, uint32_t *reg, uint64_t val, unsigned int size) {
    uint32_t new_value = val & REG_PAREN_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PAREN0_BITS_MASK) != ((*reg) & REG_PAREN0_BITS_MASK)) {
        }
        if ((new_value & REG_PAREN1_BITS_MASK) != ((*reg) & REG_PAREN1_BITS_MASK)) {
        }
        if ((new_value & REG_PAREN2_BITS_MASK) != ((*reg) & REG_PAREN2_BITS_MASK)) {
        }
        if ((new_value & REG_PAREN3_BITS_MASK) != ((*reg) & REG_PAREN3_BITS_MASK)) {
        }
        if ((new_value & REG_PAREN4_BITS_MASK) != ((*reg) & REG_PAREN4_BITS_MASK)) {
        }
        if ((new_value & REG_PAREN5_BITS_MASK) != ((*reg) & REG_PAREN5_BITS_MASK)) {
        }
        if ((new_value & REG_PAREN6_BITS_MASK) != ((*reg) & REG_PAREN6_BITS_MASK)) {
        }
        if ((new_value & REG_PAREN7_BITS_MASK) != ((*reg) & REG_PAREN7_BITS_MASK)) {
        }
        if ((new_value & REG_PAREN8_BITS_MASK) != ((*reg) & REG_PAREN8_BITS_MASK)) {
        }
        if ((new_value & REG_PAREN9_BITS_MASK) != ((*reg) & REG_PAREN9_BITS_MASK)) {
        }
        if ((new_value & REG_PAREN10_BITS_MASK) != ((*reg) & REG_PAREN10_BITS_MASK)) {
        }
        if ((new_value & REG_PAREN11_BITS_MASK) != ((*reg) & REG_PAREN11_BITS_MASK)) {
        }
        if ((new_value & REG_PAREN12_BITS_MASK) != ((*reg) & REG_PAREN12_BITS_MASK)) {
        }
        if ((new_value & REG_PAREN13_BITS_MASK) != ((*reg) & REG_PAREN13_BITS_MASK)) {
        }
        if ((new_value & REG_PAREN14_BITS_MASK) != ((*reg) & REG_PAREN14_BITS_MASK)) {
        }
        if ((new_value & REG_PAREN15_BITS_MASK) != ((*reg) & REG_PAREN15_BITS_MASK)) {
        }
        (*reg) = new_value;
    }
}

// REG: PASEL0
static uint64_t reg_pasel0_read(MSP430_Port_A_State *dev, uint32_t *reg) {
    return ((*reg) & REG_PASEL0_BITS_MASK);
}

static void reg_pasel0_write(MSP430_Port_A_State *dev, uint32_t *reg, uint64_t val, unsigned int size) {
    uint32_t new_value = val & REG_PASEL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PASEL0_0_BITS_MASK) != ((*reg) & REG_PASEL0_0_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL0_1_BITS_MASK) != ((*reg) & REG_PASEL0_1_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL0_2_BITS_MASK) != ((*reg) & REG_PASEL0_2_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL0_3_BITS_MASK) != ((*reg) & REG_PASEL0_3_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL0_4_BITS_MASK) != ((*reg) & REG_PASEL0_4_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL0_5_BITS_MASK) != ((*reg) & REG_PASEL0_5_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL0_6_BITS_MASK) != ((*reg) & REG_PASEL0_6_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL0_7_BITS_MASK) != ((*reg) & REG_PASEL0_7_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL0_8_BITS_MASK) != ((*reg) & REG_PASEL0_8_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL0_9_BITS_MASK) != ((*reg) & REG_PASEL0_9_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL0_10_BITS_MASK) != ((*reg) & REG_PASEL0_10_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL0_11_BITS_MASK) != ((*reg) & REG_PASEL0_11_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL0_12_BITS_MASK) != ((*reg) & REG_PASEL0_12_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL0_13_BITS_MASK) != ((*reg) & REG_PASEL0_13_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL0_14_BITS_MASK) != ((*reg) & REG_PASEL0_14_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL0_15_BITS_MASK) != ((*reg) & REG_PASEL0_15_BITS_MASK)) {
        }
        (*reg) = new_value;
    }
}

// REG: PASEL1
static uint64_t reg_pasel1_read(MSP430_Port_A_State *dev, uint32_t *reg) {
    return ((*reg) & REG_PASEL1_BITS_MASK);
}

static void reg_pasel1_write(MSP430_Port_A_State *dev, uint32_t *reg, uint64_t val, unsigned int size) {
    uint32_t new_value = val & REG_PASEL1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PASEL1_0_BITS_MASK) != ((*reg) & REG_PASEL1_0_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL1_1_BITS_MASK) != ((*reg) & REG_PASEL1_1_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL1_2_BITS_MASK) != ((*reg) & REG_PASEL1_2_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL1_3_BITS_MASK) != ((*reg) & REG_PASEL1_3_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL1_4_BITS_MASK) != ((*reg) & REG_PASEL1_4_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL1_5_BITS_MASK) != ((*reg) & REG_PASEL1_5_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL1_6_BITS_MASK) != ((*reg) & REG_PASEL1_6_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL1_7_BITS_MASK) != ((*reg) & REG_PASEL1_7_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL1_8_BITS_MASK) != ((*reg) & REG_PASEL1_8_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL1_9_BITS_MASK) != ((*reg) & REG_PASEL1_9_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL1_10_BITS_MASK) != ((*reg) & REG_PASEL1_10_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL1_11_BITS_MASK) != ((*reg) & REG_PASEL1_11_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL1_12_BITS_MASK) != ((*reg) & REG_PASEL1_12_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL1_13_BITS_MASK) != ((*reg) & REG_PASEL1_13_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL1_14_BITS_MASK) != ((*reg) & REG_PASEL1_14_BITS_MASK)) {
        }
        if ((new_value & REG_PASEL1_15_BITS_MASK) != ((*reg) & REG_PASEL1_15_BITS_MASK)) {
        }
        (*reg) = new_value;
    }
}

// REG: PASELC
static uint64_t reg_paselc_read(MSP430_Port_A_State *dev, uint32_t *reg) {
    return ((*reg) & REG_PASELC_BITS_MASK);
}

static void reg_paselc_write(MSP430_Port_A_State *dev, uint32_t *reg, uint64_t val, unsigned int size) {
    uint32_t new_value = val & REG_PASELC_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PASELC_0_BITS_MASK) != ((*reg) & REG_PASELC_0_BITS_MASK)) {
        }
        if ((new_value & REG_PASELC_1_BITS_MASK) != ((*reg) & REG_PASELC_1_BITS_MASK)) {
        }
        if ((new_value & REG_PASELC_2_BITS_MASK) != ((*reg) & REG_PASELC_2_BITS_MASK)) {
        }
        if ((new_value & REG_PASELC_3_BITS_MASK) != ((*reg) & REG_PASELC_3_BITS_MASK)) {
        }
        if ((new_value & REG_PASELC_4_BITS_MASK) != ((*reg) & REG_PASELC_4_BITS_MASK)) {
        }
        if ((new_value & REG_PASELC_5_BITS_MASK) != ((*reg) & REG_PASELC_5_BITS_MASK)) {
        }
        if ((new_value & REG_PASELC_6_BITS_MASK) != ((*reg) & REG_PASELC_6_BITS_MASK)) {
        }
        if ((new_value & REG_PASELC_7_BITS_MASK) != ((*reg) & REG_PASELC_7_BITS_MASK)) {
        }
        if ((new_value & REG_PASELC_8_BITS_MASK) != ((*reg) & REG_PASELC_8_BITS_MASK)) {
        }
        if ((new_value & REG_PASELC_9_BITS_MASK) != ((*reg) & REG_PASELC_9_BITS_MASK)) {
        }
        if ((new_value & REG_PASELC_10_BITS_MASK) != ((*reg) & REG_PASELC_10_BITS_MASK)) {
        }
        if ((new_value & REG_PASELC_11_BITS_MASK) != ((*reg) & REG_PASELC_11_BITS_MASK)) {
        }
        if ((new_value & REG_PASELC_12_BITS_MASK) != ((*reg) & REG_PASELC_12_BITS_MASK)) {
        }
        if ((new_value & REG_PASELC_13_BITS_MASK) != ((*reg) & REG_PASELC_13_BITS_MASK)) {
        }
        if ((new_value & REG_PASELC_14_BITS_MASK) != ((*reg) & REG_PASELC_14_BITS_MASK)) {
        }
        if ((new_value & REG_PASELC_15_BITS_MASK) != ((*reg) & REG_PASELC_15_BITS_MASK)) {
        }
        (*reg) = new_value;
    }
}

// REG: PAIES
static uint64_t reg_paies_read(MSP430_Port_A_State *dev, uint32_t *reg) {
    return ((*reg) & REG_PAIES_BITS_MASK);
}

static void reg_paies_write(MSP430_Port_A_State *dev, uint32_t *reg, uint64_t val, unsigned int size) {
    uint32_t new_value = val & REG_PAIES_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PAIES0_BITS_MASK) != ((*reg) & REG_PAIES0_BITS_MASK)) {
        }
        if ((new_value & REG_PAIES1_BITS_MASK) != ((*reg) & REG_PAIES1_BITS_MASK)) {
        }
        if ((new_value & REG_PAIES2_BITS_MASK) != ((*reg) & REG_PAIES2_BITS_MASK)) {
        }
        if ((new_value & REG_PAIES3_BITS_MASK) != ((*reg) & REG_PAIES3_BITS_MASK)) {
        }
        if ((new_value & REG_PAIES4_BITS_MASK) != ((*reg) & REG_PAIES4_BITS_MASK)) {
        }
        if ((new_value & REG_PAIES5_BITS_MASK) != ((*reg) & REG_PAIES5_BITS_MASK)) {
        }
        if ((new_value & REG_PAIES6_BITS_MASK) != ((*reg) & REG_PAIES6_BITS_MASK)) {
        }
        if ((new_value & REG_PAIES7_BITS_MASK) != ((*reg) & REG_PAIES7_BITS_MASK)) {
        }
        if ((new_value & REG_PAIES8_BITS_MASK) != ((*reg) & REG_PAIES8_BITS_MASK)) {
        }
        if ((new_value & REG_PAIES9_BITS_MASK) != ((*reg) & REG_PAIES9_BITS_MASK)) {
        }
        if ((new_value & REG_PAIES10_BITS_MASK) != ((*reg) & REG_PAIES10_BITS_MASK)) {
        }
        if ((new_value & REG_PAIES11_BITS_MASK) != ((*reg) & REG_PAIES11_BITS_MASK)) {
        }
        if ((new_value & REG_PAIES12_BITS_MASK) != ((*reg) & REG_PAIES12_BITS_MASK)) {
        }
        if ((new_value & REG_PAIES13_BITS_MASK) != ((*reg) & REG_PAIES13_BITS_MASK)) {
        }
        if ((new_value & REG_PAIES14_BITS_MASK) != ((*reg) & REG_PAIES14_BITS_MASK)) {
        }
        if ((new_value & REG_PAIES15_BITS_MASK) != ((*reg) & REG_PAIES15_BITS_MASK)) {
        }
        (*reg) = new_value;
    }
}

// REG: PAIE
static uint64_t reg_paie_read(MSP430_Port_A_State *dev, uint32_t *reg) {
    return ((*reg) & REG_PAIE_BITS_MASK);
}

static void reg_paie_write(MSP430_Port_A_State *dev, uint32_t *reg, uint64_t val, unsigned int size) {
    uint32_t new_value = val & REG_PAIE_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PAIE0_BITS_MASK) != ((*reg) & REG_PAIE0_BITS_MASK)) {
        }
        if ((new_value & REG_PAIE1_BITS_MASK) != ((*reg) & REG_PAIE1_BITS_MASK)) {
        }
        if ((new_value & REG_PAIE2_BITS_MASK) != ((*reg) & REG_PAIE2_BITS_MASK)) {
        }
        if ((new_value & REG_PAIE3_BITS_MASK) != ((*reg) & REG_PAIE3_BITS_MASK)) {
        }
        if ((new_value & REG_PAIE4_BITS_MASK) != ((*reg) & REG_PAIE4_BITS_MASK)) {
        }
        if ((new_value & REG_PAIE5_BITS_MASK) != ((*reg) & REG_PAIE5_BITS_MASK)) {
        }
        if ((new_value & REG_PAIE6_BITS_MASK) != ((*reg) & REG_PAIE6_BITS_MASK)) {
        }
        if ((new_value & REG_PAIE7_BITS_MASK) != ((*reg) & REG_PAIE7_BITS_MASK)) {
        }
        if ((new_value & REG_PAIE8_BITS_MASK) != ((*reg) & REG_PAIE8_BITS_MASK)) {
        }
        if ((new_value & REG_PAIE9_BITS_MASK) != ((*reg) & REG_PAIE9_BITS_MASK)) {
        }
        if ((new_value & REG_PAIE10_BITS_MASK) != ((*reg) & REG_PAIE10_BITS_MASK)) {
        }
        if ((new_value & REG_PAIE11_BITS_MASK) != ((*reg) & REG_PAIE11_BITS_MASK)) {
        }
        if ((new_value & REG_PAIE12_BITS_MASK) != ((*reg) & REG_PAIE12_BITS_MASK)) {
        }
        if ((new_value & REG_PAIE13_BITS_MASK) != ((*reg) & REG_PAIE13_BITS_MASK)) {
        }
        if ((new_value & REG_PAIE14_BITS_MASK) != ((*reg) & REG_PAIE14_BITS_MASK)) {
        }
        if ((new_value & REG_PAIE15_BITS_MASK) != ((*reg) & REG_PAIE15_BITS_MASK)) {
        }
        (*reg) = new_value;
    }
}

// REG: PAIFG
static uint64_t reg_paifg_read(MSP430_Port_A_State *dev, uint32_t *reg) {
    return ((*reg) & REG_PAIFG_BITS_MASK);
}

static void reg_paifg_write(MSP430_Port_A_State *dev, uint32_t *reg, uint64_t val, unsigned int size) {
    uint32_t new_value = val & REG_PAIFG_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PAIFG0_BITS_MASK) != ((*reg) & REG_PAIFG0_BITS_MASK)) {
        }
        if ((new_value & REG_PAIFG1_BITS_MASK) != ((*reg) & REG_PAIFG1_BITS_MASK)) {
        }
        if ((new_value & REG_PAIFG2_BITS_MASK) != ((*reg) & REG_PAIFG2_BITS_MASK)) {
        }
        if ((new_value & REG_PAIFG3_BITS_MASK) != ((*reg) & REG_PAIFG3_BITS_MASK)) {
        }
        if ((new_value & REG_PAIFG4_BITS_MASK) != ((*reg) & REG_PAIFG4_BITS_MASK)) {
        }
        if ((new_value & REG_PAIFG5_BITS_MASK) != ((*reg) & REG_PAIFG5_BITS_MASK)) {
        }
        if ((new_value & REG_PAIFG6_BITS_MASK) != ((*reg) & REG_PAIFG6_BITS_MASK)) {
        }
        if ((new_value & REG_PAIFG7_BITS_MASK) != ((*reg) & REG_PAIFG7_BITS_MASK)) {
        }
        if ((new_value & REG_PAIFG8_BITS_MASK) != ((*reg) & REG_PAIFG8_BITS_MASK)) {
        }
        if ((new_value & REG_PAIFG9_BITS_MASK) != ((*reg) & REG_PAIFG9_BITS_MASK)) {
        }
        if ((new_value & REG_PAIFG10_BITS_MASK) != ((*reg) & REG_PAIFG10_BITS_MASK)) {
        }
        if ((new_value & REG_PAIFG11_BITS_MASK) != ((*reg) & REG_PAIFG11_BITS_MASK)) {
        }
        if ((new_value & REG_PAIFG12_BITS_MASK) != ((*reg) & REG_PAIFG12_BITS_MASK)) {
        }
        if ((new_value & REG_PAIFG13_BITS_MASK) != ((*reg) & REG_PAIFG13_BITS_MASK)) {
        }
        if ((new_value & REG_PAIFG14_BITS_MASK) != ((*reg) & REG_PAIFG14_BITS_MASK)) {
        }
        if ((new_value & REG_PAIFG15_BITS_MASK) != ((*reg) & REG_PAIFG15_BITS_MASK)) {
        }
        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_Port_A_State *s = MSP430FR5739_PORT_A(opaque);
    uint64_t retvalue = 0;

    switch (addr) {
        case PAIN:			{ retvalue = reg_pain_read(s, &s->pain);		} break;
        case PAOUT:			{ retvalue = reg_paout_read(s, &s->paout);		} break;
        case PADIR:			{ retvalue = reg_padir_read(s, &s->padir);		} break;
        case PAREN:			{ retvalue = reg_paren_read(s, &s->paren);		} break;
        case PASEL0:			{ retvalue = reg_pasel0_read(s, &s->pasel0);		} break;
        case PASEL1:			{ retvalue = reg_pasel1_read(s, &s->pasel1);		} break;
        case PASELC:			{ retvalue = reg_paselc_read(s, &s->paselc);		} break;
        case PAIES:			{ retvalue = reg_paies_read(s, &s->paies);		} break;
        case PAIE:			{ retvalue = reg_paie_read(s, &s->paie);		} break;
        case PAIFG:			{ retvalue = reg_paifg_read(s, &s->paifg);		} break;
        default: {
            qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx"\n", __func__, addr);        }
        break;
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_Port_A_State *s = MSP430FR5739_PORT_A(opaque);

    switch (addr) {
        case PAIN:			{ reg_pain_write(s, &s->pain, value, size);		} break;
        case PAOUT:			{ reg_paout_write(s, &s->paout, value, size);		} break;
        case PADIR:			{ reg_padir_write(s, &s->padir, value, size);		} break;
        case PAREN:			{ reg_paren_write(s, &s->paren, value, size);		} break;
        case PASEL0:			{ reg_pasel0_write(s, &s->pasel0, value, size);		} break;
        case PASEL1:			{ reg_pasel1_write(s, &s->pasel1, value, size);		} break;
        case PASELC:			{ reg_paselc_write(s, &s->paselc, value, size);		} break;
        case PAIES:			{ reg_paies_write(s, &s->paies, value, size);		} break;
        case PAIE:			{ reg_paie_write(s, &s->paie, value, size);		} break;
        case PAIFG:			{ reg_paifg_write(s, &s->paifg, value, size);		} break;
        default: {
            qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx"\n", __func__, addr);        }
        break;
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_Port_A_State *device = MSP430FR5739_PORT_A(dev);

   device->pain = 0x0;
   device->paout = 0x0;
   device->padir = 0x0;
   device->paren = 0x0;
   device->pasel0 = 0x0;
   device->pasel1 = 0x0;
   device->paselc = 0x0;
   device->paies = 0x0;
   device->paie = 0x0;
   device->paifg = 0x0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_Port_A_State *s = MSP430FR5739_PORT_A(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_PORT_A, PERIPHERAL_OFFSET);
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
    .name          = TYPE_MSP430FR5739_PORT_A,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_Port_A_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_port_a_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_port_a_register_types)
