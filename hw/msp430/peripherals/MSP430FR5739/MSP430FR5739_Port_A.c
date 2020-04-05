// Peripheral name: Port_A

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_PORT_A "msp430fr5739_port_a"
#define SIZE 30
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
#define REG_PAIN_PAIN0_BITS_MASK (1 << 0)
#define REG_PAIN_PAIN1_BITS_MASK (1 << 1)
#define REG_PAIN_PAIN2_BITS_MASK (1 << 2)
#define REG_PAIN_PAIN3_BITS_MASK (1 << 3)
#define REG_PAIN_PAIN4_BITS_MASK (1 << 4)
#define REG_PAIN_PAIN5_BITS_MASK (1 << 5)
#define REG_PAIN_PAIN6_BITS_MASK (1 << 6)
#define REG_PAIN_PAIN7_BITS_MASK (1 << 7)
#define REG_PAIN_PAIN8_BITS_MASK (1 << 8)
#define REG_PAIN_PAIN9_BITS_MASK (1 << 9)
#define REG_PAIN_PAIN10_BITS_MASK (1 << 10)
#define REG_PAIN_PAIN11_BITS_MASK (1 << 11)
#define REG_PAIN_PAIN12_BITS_MASK (1 << 12)
#define REG_PAIN_PAIN13_BITS_MASK (1 << 13)
#define REG_PAIN_PAIN14_BITS_MASK (1 << 14)
#define REG_PAIN_PAIN15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PAOUT
#define REG_PAOUT_PAOUT0_BITS_MASK (1 << 0)
#define REG_PAOUT_PAOUT1_BITS_MASK (1 << 1)
#define REG_PAOUT_PAOUT2_BITS_MASK (1 << 2)
#define REG_PAOUT_PAOUT3_BITS_MASK (1 << 3)
#define REG_PAOUT_PAOUT4_BITS_MASK (1 << 4)
#define REG_PAOUT_PAOUT5_BITS_MASK (1 << 5)
#define REG_PAOUT_PAOUT6_BITS_MASK (1 << 6)
#define REG_PAOUT_PAOUT7_BITS_MASK (1 << 7)
#define REG_PAOUT_PAOUT8_BITS_MASK (1 << 8)
#define REG_PAOUT_PAOUT9_BITS_MASK (1 << 9)
#define REG_PAOUT_PAOUT10_BITS_MASK (1 << 10)
#define REG_PAOUT_PAOUT11_BITS_MASK (1 << 11)
#define REG_PAOUT_PAOUT12_BITS_MASK (1 << 12)
#define REG_PAOUT_PAOUT13_BITS_MASK (1 << 13)
#define REG_PAOUT_PAOUT14_BITS_MASK (1 << 14)
#define REG_PAOUT_PAOUT15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PADIR
#define REG_PADIR_PADIR0_BITS_MASK (1 << 0)
#define REG_PADIR_PADIR1_BITS_MASK (1 << 1)
#define REG_PADIR_PADIR2_BITS_MASK (1 << 2)
#define REG_PADIR_PADIR3_BITS_MASK (1 << 3)
#define REG_PADIR_PADIR4_BITS_MASK (1 << 4)
#define REG_PADIR_PADIR5_BITS_MASK (1 << 5)
#define REG_PADIR_PADIR6_BITS_MASK (1 << 6)
#define REG_PADIR_PADIR7_BITS_MASK (1 << 7)
#define REG_PADIR_PADIR8_BITS_MASK (1 << 8)
#define REG_PADIR_PADIR9_BITS_MASK (1 << 9)
#define REG_PADIR_PADIR10_BITS_MASK (1 << 10)
#define REG_PADIR_PADIR11_BITS_MASK (1 << 11)
#define REG_PADIR_PADIR12_BITS_MASK (1 << 12)
#define REG_PADIR_PADIR13_BITS_MASK (1 << 13)
#define REG_PADIR_PADIR14_BITS_MASK (1 << 14)
#define REG_PADIR_PADIR15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PAREN
#define REG_PAREN_PAREN0_BITS_MASK (1 << 0)
#define REG_PAREN_PAREN1_BITS_MASK (1 << 1)
#define REG_PAREN_PAREN2_BITS_MASK (1 << 2)
#define REG_PAREN_PAREN3_BITS_MASK (1 << 3)
#define REG_PAREN_PAREN4_BITS_MASK (1 << 4)
#define REG_PAREN_PAREN5_BITS_MASK (1 << 5)
#define REG_PAREN_PAREN6_BITS_MASK (1 << 6)
#define REG_PAREN_PAREN7_BITS_MASK (1 << 7)
#define REG_PAREN_PAREN8_BITS_MASK (1 << 8)
#define REG_PAREN_PAREN9_BITS_MASK (1 << 9)
#define REG_PAREN_PAREN10_BITS_MASK (1 << 10)
#define REG_PAREN_PAREN11_BITS_MASK (1 << 11)
#define REG_PAREN_PAREN12_BITS_MASK (1 << 12)
#define REG_PAREN_PAREN13_BITS_MASK (1 << 13)
#define REG_PAREN_PAREN14_BITS_MASK (1 << 14)
#define REG_PAREN_PAREN15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PASEL0
#define REG_PASEL0_PASEL0_0_BITS_MASK (1 << 0)
#define REG_PASEL0_PASEL0_1_BITS_MASK (1 << 1)
#define REG_PASEL0_PASEL0_2_BITS_MASK (1 << 2)
#define REG_PASEL0_PASEL0_3_BITS_MASK (1 << 3)
#define REG_PASEL0_PASEL0_4_BITS_MASK (1 << 4)
#define REG_PASEL0_PASEL0_5_BITS_MASK (1 << 5)
#define REG_PASEL0_PASEL0_6_BITS_MASK (1 << 6)
#define REG_PASEL0_PASEL0_7_BITS_MASK (1 << 7)
#define REG_PASEL0_PASEL0_8_BITS_MASK (1 << 8)
#define REG_PASEL0_PASEL0_9_BITS_MASK (1 << 9)
#define REG_PASEL0_PASEL0_10_BITS_MASK (1 << 10)
#define REG_PASEL0_PASEL0_11_BITS_MASK (1 << 11)
#define REG_PASEL0_PASEL0_12_BITS_MASK (1 << 12)
#define REG_PASEL0_PASEL0_13_BITS_MASK (1 << 13)
#define REG_PASEL0_PASEL0_14_BITS_MASK (1 << 14)
#define REG_PASEL0_PASEL0_15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PASEL1
#define REG_PASEL1_PASEL1_0_BITS_MASK (1 << 0)
#define REG_PASEL1_PASEL1_1_BITS_MASK (1 << 1)
#define REG_PASEL1_PASEL1_2_BITS_MASK (1 << 2)
#define REG_PASEL1_PASEL1_3_BITS_MASK (1 << 3)
#define REG_PASEL1_PASEL1_4_BITS_MASK (1 << 4)
#define REG_PASEL1_PASEL1_5_BITS_MASK (1 << 5)
#define REG_PASEL1_PASEL1_6_BITS_MASK (1 << 6)
#define REG_PASEL1_PASEL1_7_BITS_MASK (1 << 7)
#define REG_PASEL1_PASEL1_8_BITS_MASK (1 << 8)
#define REG_PASEL1_PASEL1_9_BITS_MASK (1 << 9)
#define REG_PASEL1_PASEL1_10_BITS_MASK (1 << 10)
#define REG_PASEL1_PASEL1_11_BITS_MASK (1 << 11)
#define REG_PASEL1_PASEL1_12_BITS_MASK (1 << 12)
#define REG_PASEL1_PASEL1_13_BITS_MASK (1 << 13)
#define REG_PASEL1_PASEL1_14_BITS_MASK (1 << 14)
#define REG_PASEL1_PASEL1_15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PASELC
#define REG_PASELC_PASELC_0_BITS_MASK (1 << 0)
#define REG_PASELC_PASELC_1_BITS_MASK (1 << 1)
#define REG_PASELC_PASELC_2_BITS_MASK (1 << 2)
#define REG_PASELC_PASELC_3_BITS_MASK (1 << 3)
#define REG_PASELC_PASELC_4_BITS_MASK (1 << 4)
#define REG_PASELC_PASELC_5_BITS_MASK (1 << 5)
#define REG_PASELC_PASELC_6_BITS_MASK (1 << 6)
#define REG_PASELC_PASELC_7_BITS_MASK (1 << 7)
#define REG_PASELC_PASELC_8_BITS_MASK (1 << 8)
#define REG_PASELC_PASELC_9_BITS_MASK (1 << 9)
#define REG_PASELC_PASELC_10_BITS_MASK (1 << 10)
#define REG_PASELC_PASELC_11_BITS_MASK (1 << 11)
#define REG_PASELC_PASELC_12_BITS_MASK (1 << 12)
#define REG_PASELC_PASELC_13_BITS_MASK (1 << 13)
#define REG_PASELC_PASELC_14_BITS_MASK (1 << 14)
#define REG_PASELC_PASELC_15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PAIES
#define REG_PAIES_PAIES0_BITS_MASK (1 << 0)
#define REG_PAIES_PAIES1_BITS_MASK (1 << 1)
#define REG_PAIES_PAIES2_BITS_MASK (1 << 2)
#define REG_PAIES_PAIES3_BITS_MASK (1 << 3)
#define REG_PAIES_PAIES4_BITS_MASK (1 << 4)
#define REG_PAIES_PAIES5_BITS_MASK (1 << 5)
#define REG_PAIES_PAIES6_BITS_MASK (1 << 6)
#define REG_PAIES_PAIES7_BITS_MASK (1 << 7)
#define REG_PAIES_PAIES8_BITS_MASK (1 << 8)
#define REG_PAIES_PAIES9_BITS_MASK (1 << 9)
#define REG_PAIES_PAIES10_BITS_MASK (1 << 10)
#define REG_PAIES_PAIES11_BITS_MASK (1 << 11)
#define REG_PAIES_PAIES12_BITS_MASK (1 << 12)
#define REG_PAIES_PAIES13_BITS_MASK (1 << 13)
#define REG_PAIES_PAIES14_BITS_MASK (1 << 14)
#define REG_PAIES_PAIES15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PAIE
#define REG_PAIE_PAIE0_BITS_MASK (1 << 0)
#define REG_PAIE_PAIE1_BITS_MASK (1 << 1)
#define REG_PAIE_PAIE2_BITS_MASK (1 << 2)
#define REG_PAIE_PAIE3_BITS_MASK (1 << 3)
#define REG_PAIE_PAIE4_BITS_MASK (1 << 4)
#define REG_PAIE_PAIE5_BITS_MASK (1 << 5)
#define REG_PAIE_PAIE6_BITS_MASK (1 << 6)
#define REG_PAIE_PAIE7_BITS_MASK (1 << 7)
#define REG_PAIE_PAIE8_BITS_MASK (1 << 8)
#define REG_PAIE_PAIE9_BITS_MASK (1 << 9)
#define REG_PAIE_PAIE10_BITS_MASK (1 << 10)
#define REG_PAIE_PAIE11_BITS_MASK (1 << 11)
#define REG_PAIE_PAIE12_BITS_MASK (1 << 12)
#define REG_PAIE_PAIE13_BITS_MASK (1 << 13)
#define REG_PAIE_PAIE14_BITS_MASK (1 << 14)
#define REG_PAIE_PAIE15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PAIFG
#define REG_PAIFG_PAIFG0_BITS_MASK (1 << 0)
#define REG_PAIFG_PAIFG1_BITS_MASK (1 << 1)
#define REG_PAIFG_PAIFG2_BITS_MASK (1 << 2)
#define REG_PAIFG_PAIFG3_BITS_MASK (1 << 3)
#define REG_PAIFG_PAIFG4_BITS_MASK (1 << 4)
#define REG_PAIFG_PAIFG5_BITS_MASK (1 << 5)
#define REG_PAIFG_PAIFG6_BITS_MASK (1 << 6)
#define REG_PAIFG_PAIFG7_BITS_MASK (1 << 7)
#define REG_PAIFG_PAIFG8_BITS_MASK (1 << 8)
#define REG_PAIFG_PAIFG9_BITS_MASK (1 << 9)
#define REG_PAIFG_PAIFG10_BITS_MASK (1 << 10)
#define REG_PAIFG_PAIFG11_BITS_MASK (1 << 11)
#define REG_PAIFG_PAIFG12_BITS_MASK (1 << 12)
#define REG_PAIFG_PAIFG13_BITS_MASK (1 << 13)
#define REG_PAIFG_PAIFG14_BITS_MASK (1 << 14)
#define REG_PAIFG_PAIFG15_BITS_MASK (1 << 15)




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
static uint64_t reg_pain_read(MSP430_Port_A_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PAIN_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pain_write(MSP430_Port_A_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PAIN_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PAIN_PAIN0_BITS_MASK) != ((*reg) & REG_PAIN_PAIN0_BITS_MASK)) {
        }

        if ((new_value & REG_PAIN_PAIN1_BITS_MASK) != ((*reg) & REG_PAIN_PAIN1_BITS_MASK)) {
        }

        if ((new_value & REG_PAIN_PAIN2_BITS_MASK) != ((*reg) & REG_PAIN_PAIN2_BITS_MASK)) {
        }

        if ((new_value & REG_PAIN_PAIN3_BITS_MASK) != ((*reg) & REG_PAIN_PAIN3_BITS_MASK)) {
        }

        if ((new_value & REG_PAIN_PAIN4_BITS_MASK) != ((*reg) & REG_PAIN_PAIN4_BITS_MASK)) {
        }

        if ((new_value & REG_PAIN_PAIN5_BITS_MASK) != ((*reg) & REG_PAIN_PAIN5_BITS_MASK)) {
        }

        if ((new_value & REG_PAIN_PAIN6_BITS_MASK) != ((*reg) & REG_PAIN_PAIN6_BITS_MASK)) {
        }

        if ((new_value & REG_PAIN_PAIN7_BITS_MASK) != ((*reg) & REG_PAIN_PAIN7_BITS_MASK)) {
        }

        if ((new_value & REG_PAIN_PAIN8_BITS_MASK) != ((*reg) & REG_PAIN_PAIN8_BITS_MASK)) {
        }

        if ((new_value & REG_PAIN_PAIN9_BITS_MASK) != ((*reg) & REG_PAIN_PAIN9_BITS_MASK)) {
        }

        if ((new_value & REG_PAIN_PAIN10_BITS_MASK) != ((*reg) & REG_PAIN_PAIN10_BITS_MASK)) {
        }

        if ((new_value & REG_PAIN_PAIN11_BITS_MASK) != ((*reg) & REG_PAIN_PAIN11_BITS_MASK)) {
        }

        if ((new_value & REG_PAIN_PAIN12_BITS_MASK) != ((*reg) & REG_PAIN_PAIN12_BITS_MASK)) {
        }

        if ((new_value & REG_PAIN_PAIN13_BITS_MASK) != ((*reg) & REG_PAIN_PAIN13_BITS_MASK)) {
        }

        if ((new_value & REG_PAIN_PAIN14_BITS_MASK) != ((*reg) & REG_PAIN_PAIN14_BITS_MASK)) {
        }

        if ((new_value & REG_PAIN_PAIN15_BITS_MASK) != ((*reg) & REG_PAIN_PAIN15_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PAOUT
static uint64_t reg_paout_read(MSP430_Port_A_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PAOUT_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_paout_write(MSP430_Port_A_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PAOUT_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PAOUT_PAOUT0_BITS_MASK) != ((*reg) & REG_PAOUT_PAOUT0_BITS_MASK)) {
        }

        if ((new_value & REG_PAOUT_PAOUT1_BITS_MASK) != ((*reg) & REG_PAOUT_PAOUT1_BITS_MASK)) {
        }

        if ((new_value & REG_PAOUT_PAOUT2_BITS_MASK) != ((*reg) & REG_PAOUT_PAOUT2_BITS_MASK)) {
        }

        if ((new_value & REG_PAOUT_PAOUT3_BITS_MASK) != ((*reg) & REG_PAOUT_PAOUT3_BITS_MASK)) {
        }

        if ((new_value & REG_PAOUT_PAOUT4_BITS_MASK) != ((*reg) & REG_PAOUT_PAOUT4_BITS_MASK)) {
        }

        if ((new_value & REG_PAOUT_PAOUT5_BITS_MASK) != ((*reg) & REG_PAOUT_PAOUT5_BITS_MASK)) {
        }

        if ((new_value & REG_PAOUT_PAOUT6_BITS_MASK) != ((*reg) & REG_PAOUT_PAOUT6_BITS_MASK)) {
        }

        if ((new_value & REG_PAOUT_PAOUT7_BITS_MASK) != ((*reg) & REG_PAOUT_PAOUT7_BITS_MASK)) {
        }

        if ((new_value & REG_PAOUT_PAOUT8_BITS_MASK) != ((*reg) & REG_PAOUT_PAOUT8_BITS_MASK)) {
        }

        if ((new_value & REG_PAOUT_PAOUT9_BITS_MASK) != ((*reg) & REG_PAOUT_PAOUT9_BITS_MASK)) {
        }

        if ((new_value & REG_PAOUT_PAOUT10_BITS_MASK) != ((*reg) & REG_PAOUT_PAOUT10_BITS_MASK)) {
        }

        if ((new_value & REG_PAOUT_PAOUT11_BITS_MASK) != ((*reg) & REG_PAOUT_PAOUT11_BITS_MASK)) {
        }

        if ((new_value & REG_PAOUT_PAOUT12_BITS_MASK) != ((*reg) & REG_PAOUT_PAOUT12_BITS_MASK)) {
        }

        if ((new_value & REG_PAOUT_PAOUT13_BITS_MASK) != ((*reg) & REG_PAOUT_PAOUT13_BITS_MASK)) {
        }

        if ((new_value & REG_PAOUT_PAOUT14_BITS_MASK) != ((*reg) & REG_PAOUT_PAOUT14_BITS_MASK)) {
        }

        if ((new_value & REG_PAOUT_PAOUT15_BITS_MASK) != ((*reg) & REG_PAOUT_PAOUT15_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PADIR
static uint64_t reg_padir_read(MSP430_Port_A_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PADIR_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_padir_write(MSP430_Port_A_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PADIR_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PADIR_PADIR0_BITS_MASK) != ((*reg) & REG_PADIR_PADIR0_BITS_MASK)) {
        }

        if ((new_value & REG_PADIR_PADIR1_BITS_MASK) != ((*reg) & REG_PADIR_PADIR1_BITS_MASK)) {
        }

        if ((new_value & REG_PADIR_PADIR2_BITS_MASK) != ((*reg) & REG_PADIR_PADIR2_BITS_MASK)) {
        }

        if ((new_value & REG_PADIR_PADIR3_BITS_MASK) != ((*reg) & REG_PADIR_PADIR3_BITS_MASK)) {
        }

        if ((new_value & REG_PADIR_PADIR4_BITS_MASK) != ((*reg) & REG_PADIR_PADIR4_BITS_MASK)) {
        }

        if ((new_value & REG_PADIR_PADIR5_BITS_MASK) != ((*reg) & REG_PADIR_PADIR5_BITS_MASK)) {
        }

        if ((new_value & REG_PADIR_PADIR6_BITS_MASK) != ((*reg) & REG_PADIR_PADIR6_BITS_MASK)) {
        }

        if ((new_value & REG_PADIR_PADIR7_BITS_MASK) != ((*reg) & REG_PADIR_PADIR7_BITS_MASK)) {
        }

        if ((new_value & REG_PADIR_PADIR8_BITS_MASK) != ((*reg) & REG_PADIR_PADIR8_BITS_MASK)) {
        }

        if ((new_value & REG_PADIR_PADIR9_BITS_MASK) != ((*reg) & REG_PADIR_PADIR9_BITS_MASK)) {
        }

        if ((new_value & REG_PADIR_PADIR10_BITS_MASK) != ((*reg) & REG_PADIR_PADIR10_BITS_MASK)) {
        }

        if ((new_value & REG_PADIR_PADIR11_BITS_MASK) != ((*reg) & REG_PADIR_PADIR11_BITS_MASK)) {
        }

        if ((new_value & REG_PADIR_PADIR12_BITS_MASK) != ((*reg) & REG_PADIR_PADIR12_BITS_MASK)) {
        }

        if ((new_value & REG_PADIR_PADIR13_BITS_MASK) != ((*reg) & REG_PADIR_PADIR13_BITS_MASK)) {
        }

        if ((new_value & REG_PADIR_PADIR14_BITS_MASK) != ((*reg) & REG_PADIR_PADIR14_BITS_MASK)) {
        }

        if ((new_value & REG_PADIR_PADIR15_BITS_MASK) != ((*reg) & REG_PADIR_PADIR15_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PAREN
static uint64_t reg_paren_read(MSP430_Port_A_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PAREN_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_paren_write(MSP430_Port_A_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PAREN_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PAREN_PAREN0_BITS_MASK) != ((*reg) & REG_PAREN_PAREN0_BITS_MASK)) {
        }

        if ((new_value & REG_PAREN_PAREN1_BITS_MASK) != ((*reg) & REG_PAREN_PAREN1_BITS_MASK)) {
        }

        if ((new_value & REG_PAREN_PAREN2_BITS_MASK) != ((*reg) & REG_PAREN_PAREN2_BITS_MASK)) {
        }

        if ((new_value & REG_PAREN_PAREN3_BITS_MASK) != ((*reg) & REG_PAREN_PAREN3_BITS_MASK)) {
        }

        if ((new_value & REG_PAREN_PAREN4_BITS_MASK) != ((*reg) & REG_PAREN_PAREN4_BITS_MASK)) {
        }

        if ((new_value & REG_PAREN_PAREN5_BITS_MASK) != ((*reg) & REG_PAREN_PAREN5_BITS_MASK)) {
        }

        if ((new_value & REG_PAREN_PAREN6_BITS_MASK) != ((*reg) & REG_PAREN_PAREN6_BITS_MASK)) {
        }

        if ((new_value & REG_PAREN_PAREN7_BITS_MASK) != ((*reg) & REG_PAREN_PAREN7_BITS_MASK)) {
        }

        if ((new_value & REG_PAREN_PAREN8_BITS_MASK) != ((*reg) & REG_PAREN_PAREN8_BITS_MASK)) {
        }

        if ((new_value & REG_PAREN_PAREN9_BITS_MASK) != ((*reg) & REG_PAREN_PAREN9_BITS_MASK)) {
        }

        if ((new_value & REG_PAREN_PAREN10_BITS_MASK) != ((*reg) & REG_PAREN_PAREN10_BITS_MASK)) {
        }

        if ((new_value & REG_PAREN_PAREN11_BITS_MASK) != ((*reg) & REG_PAREN_PAREN11_BITS_MASK)) {
        }

        if ((new_value & REG_PAREN_PAREN12_BITS_MASK) != ((*reg) & REG_PAREN_PAREN12_BITS_MASK)) {
        }

        if ((new_value & REG_PAREN_PAREN13_BITS_MASK) != ((*reg) & REG_PAREN_PAREN13_BITS_MASK)) {
        }

        if ((new_value & REG_PAREN_PAREN14_BITS_MASK) != ((*reg) & REG_PAREN_PAREN14_BITS_MASK)) {
        }

        if ((new_value & REG_PAREN_PAREN15_BITS_MASK) != ((*reg) & REG_PAREN_PAREN15_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PASEL0
static uint64_t reg_pasel0_read(MSP430_Port_A_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PASEL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pasel0_write(MSP430_Port_A_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PASEL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PASEL0_PASEL0_0_BITS_MASK) != ((*reg) & REG_PASEL0_PASEL0_0_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL0_PASEL0_1_BITS_MASK) != ((*reg) & REG_PASEL0_PASEL0_1_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL0_PASEL0_2_BITS_MASK) != ((*reg) & REG_PASEL0_PASEL0_2_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL0_PASEL0_3_BITS_MASK) != ((*reg) & REG_PASEL0_PASEL0_3_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL0_PASEL0_4_BITS_MASK) != ((*reg) & REG_PASEL0_PASEL0_4_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL0_PASEL0_5_BITS_MASK) != ((*reg) & REG_PASEL0_PASEL0_5_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL0_PASEL0_6_BITS_MASK) != ((*reg) & REG_PASEL0_PASEL0_6_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL0_PASEL0_7_BITS_MASK) != ((*reg) & REG_PASEL0_PASEL0_7_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL0_PASEL0_8_BITS_MASK) != ((*reg) & REG_PASEL0_PASEL0_8_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL0_PASEL0_9_BITS_MASK) != ((*reg) & REG_PASEL0_PASEL0_9_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL0_PASEL0_10_BITS_MASK) != ((*reg) & REG_PASEL0_PASEL0_10_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL0_PASEL0_11_BITS_MASK) != ((*reg) & REG_PASEL0_PASEL0_11_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL0_PASEL0_12_BITS_MASK) != ((*reg) & REG_PASEL0_PASEL0_12_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL0_PASEL0_13_BITS_MASK) != ((*reg) & REG_PASEL0_PASEL0_13_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL0_PASEL0_14_BITS_MASK) != ((*reg) & REG_PASEL0_PASEL0_14_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL0_PASEL0_15_BITS_MASK) != ((*reg) & REG_PASEL0_PASEL0_15_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PASEL1
static uint64_t reg_pasel1_read(MSP430_Port_A_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PASEL1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pasel1_write(MSP430_Port_A_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PASEL1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PASEL1_PASEL1_0_BITS_MASK) != ((*reg) & REG_PASEL1_PASEL1_0_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL1_PASEL1_1_BITS_MASK) != ((*reg) & REG_PASEL1_PASEL1_1_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL1_PASEL1_2_BITS_MASK) != ((*reg) & REG_PASEL1_PASEL1_2_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL1_PASEL1_3_BITS_MASK) != ((*reg) & REG_PASEL1_PASEL1_3_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL1_PASEL1_4_BITS_MASK) != ((*reg) & REG_PASEL1_PASEL1_4_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL1_PASEL1_5_BITS_MASK) != ((*reg) & REG_PASEL1_PASEL1_5_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL1_PASEL1_6_BITS_MASK) != ((*reg) & REG_PASEL1_PASEL1_6_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL1_PASEL1_7_BITS_MASK) != ((*reg) & REG_PASEL1_PASEL1_7_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL1_PASEL1_8_BITS_MASK) != ((*reg) & REG_PASEL1_PASEL1_8_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL1_PASEL1_9_BITS_MASK) != ((*reg) & REG_PASEL1_PASEL1_9_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL1_PASEL1_10_BITS_MASK) != ((*reg) & REG_PASEL1_PASEL1_10_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL1_PASEL1_11_BITS_MASK) != ((*reg) & REG_PASEL1_PASEL1_11_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL1_PASEL1_12_BITS_MASK) != ((*reg) & REG_PASEL1_PASEL1_12_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL1_PASEL1_13_BITS_MASK) != ((*reg) & REG_PASEL1_PASEL1_13_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL1_PASEL1_14_BITS_MASK) != ((*reg) & REG_PASEL1_PASEL1_14_BITS_MASK)) {
        }

        if ((new_value & REG_PASEL1_PASEL1_15_BITS_MASK) != ((*reg) & REG_PASEL1_PASEL1_15_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PASELC
static uint64_t reg_paselc_read(MSP430_Port_A_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PASELC_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_paselc_write(MSP430_Port_A_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PASELC_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PASELC_PASELC_0_BITS_MASK) != ((*reg) & REG_PASELC_PASELC_0_BITS_MASK)) {
        }

        if ((new_value & REG_PASELC_PASELC_1_BITS_MASK) != ((*reg) & REG_PASELC_PASELC_1_BITS_MASK)) {
        }

        if ((new_value & REG_PASELC_PASELC_2_BITS_MASK) != ((*reg) & REG_PASELC_PASELC_2_BITS_MASK)) {
        }

        if ((new_value & REG_PASELC_PASELC_3_BITS_MASK) != ((*reg) & REG_PASELC_PASELC_3_BITS_MASK)) {
        }

        if ((new_value & REG_PASELC_PASELC_4_BITS_MASK) != ((*reg) & REG_PASELC_PASELC_4_BITS_MASK)) {
        }

        if ((new_value & REG_PASELC_PASELC_5_BITS_MASK) != ((*reg) & REG_PASELC_PASELC_5_BITS_MASK)) {
        }

        if ((new_value & REG_PASELC_PASELC_6_BITS_MASK) != ((*reg) & REG_PASELC_PASELC_6_BITS_MASK)) {
        }

        if ((new_value & REG_PASELC_PASELC_7_BITS_MASK) != ((*reg) & REG_PASELC_PASELC_7_BITS_MASK)) {
        }

        if ((new_value & REG_PASELC_PASELC_8_BITS_MASK) != ((*reg) & REG_PASELC_PASELC_8_BITS_MASK)) {
        }

        if ((new_value & REG_PASELC_PASELC_9_BITS_MASK) != ((*reg) & REG_PASELC_PASELC_9_BITS_MASK)) {
        }

        if ((new_value & REG_PASELC_PASELC_10_BITS_MASK) != ((*reg) & REG_PASELC_PASELC_10_BITS_MASK)) {
        }

        if ((new_value & REG_PASELC_PASELC_11_BITS_MASK) != ((*reg) & REG_PASELC_PASELC_11_BITS_MASK)) {
        }

        if ((new_value & REG_PASELC_PASELC_12_BITS_MASK) != ((*reg) & REG_PASELC_PASELC_12_BITS_MASK)) {
        }

        if ((new_value & REG_PASELC_PASELC_13_BITS_MASK) != ((*reg) & REG_PASELC_PASELC_13_BITS_MASK)) {
        }

        if ((new_value & REG_PASELC_PASELC_14_BITS_MASK) != ((*reg) & REG_PASELC_PASELC_14_BITS_MASK)) {
        }

        if ((new_value & REG_PASELC_PASELC_15_BITS_MASK) != ((*reg) & REG_PASELC_PASELC_15_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PAIES
static uint64_t reg_paies_read(MSP430_Port_A_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PAIES_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_paies_write(MSP430_Port_A_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PAIES_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PAIES_PAIES0_BITS_MASK) != ((*reg) & REG_PAIES_PAIES0_BITS_MASK)) {
        }

        if ((new_value & REG_PAIES_PAIES1_BITS_MASK) != ((*reg) & REG_PAIES_PAIES1_BITS_MASK)) {
        }

        if ((new_value & REG_PAIES_PAIES2_BITS_MASK) != ((*reg) & REG_PAIES_PAIES2_BITS_MASK)) {
        }

        if ((new_value & REG_PAIES_PAIES3_BITS_MASK) != ((*reg) & REG_PAIES_PAIES3_BITS_MASK)) {
        }

        if ((new_value & REG_PAIES_PAIES4_BITS_MASK) != ((*reg) & REG_PAIES_PAIES4_BITS_MASK)) {
        }

        if ((new_value & REG_PAIES_PAIES5_BITS_MASK) != ((*reg) & REG_PAIES_PAIES5_BITS_MASK)) {
        }

        if ((new_value & REG_PAIES_PAIES6_BITS_MASK) != ((*reg) & REG_PAIES_PAIES6_BITS_MASK)) {
        }

        if ((new_value & REG_PAIES_PAIES7_BITS_MASK) != ((*reg) & REG_PAIES_PAIES7_BITS_MASK)) {
        }

        if ((new_value & REG_PAIES_PAIES8_BITS_MASK) != ((*reg) & REG_PAIES_PAIES8_BITS_MASK)) {
        }

        if ((new_value & REG_PAIES_PAIES9_BITS_MASK) != ((*reg) & REG_PAIES_PAIES9_BITS_MASK)) {
        }

        if ((new_value & REG_PAIES_PAIES10_BITS_MASK) != ((*reg) & REG_PAIES_PAIES10_BITS_MASK)) {
        }

        if ((new_value & REG_PAIES_PAIES11_BITS_MASK) != ((*reg) & REG_PAIES_PAIES11_BITS_MASK)) {
        }

        if ((new_value & REG_PAIES_PAIES12_BITS_MASK) != ((*reg) & REG_PAIES_PAIES12_BITS_MASK)) {
        }

        if ((new_value & REG_PAIES_PAIES13_BITS_MASK) != ((*reg) & REG_PAIES_PAIES13_BITS_MASK)) {
        }

        if ((new_value & REG_PAIES_PAIES14_BITS_MASK) != ((*reg) & REG_PAIES_PAIES14_BITS_MASK)) {
        }

        if ((new_value & REG_PAIES_PAIES15_BITS_MASK) != ((*reg) & REG_PAIES_PAIES15_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PAIE
static uint64_t reg_paie_read(MSP430_Port_A_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PAIE_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_paie_write(MSP430_Port_A_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PAIE_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PAIE_PAIE0_BITS_MASK) != ((*reg) & REG_PAIE_PAIE0_BITS_MASK)) {
        }

        if ((new_value & REG_PAIE_PAIE1_BITS_MASK) != ((*reg) & REG_PAIE_PAIE1_BITS_MASK)) {
        }

        if ((new_value & REG_PAIE_PAIE2_BITS_MASK) != ((*reg) & REG_PAIE_PAIE2_BITS_MASK)) {
        }

        if ((new_value & REG_PAIE_PAIE3_BITS_MASK) != ((*reg) & REG_PAIE_PAIE3_BITS_MASK)) {
        }

        if ((new_value & REG_PAIE_PAIE4_BITS_MASK) != ((*reg) & REG_PAIE_PAIE4_BITS_MASK)) {
        }

        if ((new_value & REG_PAIE_PAIE5_BITS_MASK) != ((*reg) & REG_PAIE_PAIE5_BITS_MASK)) {
        }

        if ((new_value & REG_PAIE_PAIE6_BITS_MASK) != ((*reg) & REG_PAIE_PAIE6_BITS_MASK)) {
        }

        if ((new_value & REG_PAIE_PAIE7_BITS_MASK) != ((*reg) & REG_PAIE_PAIE7_BITS_MASK)) {
        }

        if ((new_value & REG_PAIE_PAIE8_BITS_MASK) != ((*reg) & REG_PAIE_PAIE8_BITS_MASK)) {
        }

        if ((new_value & REG_PAIE_PAIE9_BITS_MASK) != ((*reg) & REG_PAIE_PAIE9_BITS_MASK)) {
        }

        if ((new_value & REG_PAIE_PAIE10_BITS_MASK) != ((*reg) & REG_PAIE_PAIE10_BITS_MASK)) {
        }

        if ((new_value & REG_PAIE_PAIE11_BITS_MASK) != ((*reg) & REG_PAIE_PAIE11_BITS_MASK)) {
        }

        if ((new_value & REG_PAIE_PAIE12_BITS_MASK) != ((*reg) & REG_PAIE_PAIE12_BITS_MASK)) {
        }

        if ((new_value & REG_PAIE_PAIE13_BITS_MASK) != ((*reg) & REG_PAIE_PAIE13_BITS_MASK)) {
        }

        if ((new_value & REG_PAIE_PAIE14_BITS_MASK) != ((*reg) & REG_PAIE_PAIE14_BITS_MASK)) {
        }

        if ((new_value & REG_PAIE_PAIE15_BITS_MASK) != ((*reg) & REG_PAIE_PAIE15_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PAIFG
static uint64_t reg_paifg_read(MSP430_Port_A_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PAIFG_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_paifg_write(MSP430_Port_A_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PAIFG_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PAIFG_PAIFG0_BITS_MASK) != ((*reg) & REG_PAIFG_PAIFG0_BITS_MASK)) {
        }

        if ((new_value & REG_PAIFG_PAIFG1_BITS_MASK) != ((*reg) & REG_PAIFG_PAIFG1_BITS_MASK)) {
        }

        if ((new_value & REG_PAIFG_PAIFG2_BITS_MASK) != ((*reg) & REG_PAIFG_PAIFG2_BITS_MASK)) {
        }

        if ((new_value & REG_PAIFG_PAIFG3_BITS_MASK) != ((*reg) & REG_PAIFG_PAIFG3_BITS_MASK)) {
        }

        if ((new_value & REG_PAIFG_PAIFG4_BITS_MASK) != ((*reg) & REG_PAIFG_PAIFG4_BITS_MASK)) {
        }

        if ((new_value & REG_PAIFG_PAIFG5_BITS_MASK) != ((*reg) & REG_PAIFG_PAIFG5_BITS_MASK)) {
        }

        if ((new_value & REG_PAIFG_PAIFG6_BITS_MASK) != ((*reg) & REG_PAIFG_PAIFG6_BITS_MASK)) {
        }

        if ((new_value & REG_PAIFG_PAIFG7_BITS_MASK) != ((*reg) & REG_PAIFG_PAIFG7_BITS_MASK)) {
        }

        if ((new_value & REG_PAIFG_PAIFG8_BITS_MASK) != ((*reg) & REG_PAIFG_PAIFG8_BITS_MASK)) {
        }

        if ((new_value & REG_PAIFG_PAIFG9_BITS_MASK) != ((*reg) & REG_PAIFG_PAIFG9_BITS_MASK)) {
        }

        if ((new_value & REG_PAIFG_PAIFG10_BITS_MASK) != ((*reg) & REG_PAIFG_PAIFG10_BITS_MASK)) {
        }

        if ((new_value & REG_PAIFG_PAIFG11_BITS_MASK) != ((*reg) & REG_PAIFG_PAIFG11_BITS_MASK)) {
        }

        if ((new_value & REG_PAIFG_PAIFG12_BITS_MASK) != ((*reg) & REG_PAIFG_PAIFG12_BITS_MASK)) {
        }

        if ((new_value & REG_PAIFG_PAIFG13_BITS_MASK) != ((*reg) & REG_PAIFG_PAIFG13_BITS_MASK)) {
        }

        if ((new_value & REG_PAIFG_PAIFG14_BITS_MASK) != ((*reg) & REG_PAIFG_PAIFG14_BITS_MASK)) {
        }

        if ((new_value & REG_PAIFG_PAIFG15_BITS_MASK) != ((*reg) & REG_PAIFG_PAIFG15_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_Port_A_State *s = MSP430FR5739_PORT_A(opaque);
    uint64_t retvalue = 0;

    if ((addr >= PAIN) && ((addr + size) <= (PAIN + 2))) {
        retvalue = reg_pain_read(s, &s->pain, (addr - PAIN));
    } else if ((addr >= PAOUT) && ((addr + size) <= (PAOUT + 2))) {
        retvalue = reg_paout_read(s, &s->paout, (addr - PAOUT));
    } else if ((addr >= PADIR) && ((addr + size) <= (PADIR + 2))) {
        retvalue = reg_padir_read(s, &s->padir, (addr - PADIR));
    } else if ((addr >= PAREN) && ((addr + size) <= (PAREN + 2))) {
        retvalue = reg_paren_read(s, &s->paren, (addr - PAREN));
    } else if ((addr >= PASEL0) && ((addr + size) <= (PASEL0 + 2))) {
        retvalue = reg_pasel0_read(s, &s->pasel0, (addr - PASEL0));
    } else if ((addr >= PASEL1) && ((addr + size) <= (PASEL1 + 2))) {
        retvalue = reg_pasel1_read(s, &s->pasel1, (addr - PASEL1));
    } else if ((addr >= PASELC) && ((addr + size) <= (PASELC + 2))) {
        retvalue = reg_paselc_read(s, &s->paselc, (addr - PASELC));
    } else if ((addr >= PAIES) && ((addr + size) <= (PAIES + 2))) {
        retvalue = reg_paies_read(s, &s->paies, (addr - PAIES));
    } else if ((addr >= PAIE) && ((addr + size) <= (PAIE + 2))) {
        retvalue = reg_paie_read(s, &s->paie, (addr - PAIE));
    } else if ((addr >= PAIFG) && ((addr + size) <= (PAIFG + 2))) {
        retvalue = reg_paifg_read(s, &s->paifg, (addr - PAIFG));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_Port_A_State *s = MSP430FR5739_PORT_A(opaque);

    if ((addr >= PAIN) && ((addr + size) <= (PAIN + 2))) {
        reg_pain_write(s, &s->pain, (addr - PAIN), value, size);
    } else if ((addr >= PAOUT) && ((addr + size) <= (PAOUT + 2))) {
        reg_paout_write(s, &s->paout, (addr - PAOUT), value, size);
    } else if ((addr >= PADIR) && ((addr + size) <= (PADIR + 2))) {
        reg_padir_write(s, &s->padir, (addr - PADIR), value, size);
    } else if ((addr >= PAREN) && ((addr + size) <= (PAREN + 2))) {
        reg_paren_write(s, &s->paren, (addr - PAREN), value, size);
    } else if ((addr >= PASEL0) && ((addr + size) <= (PASEL0 + 2))) {
        reg_pasel0_write(s, &s->pasel0, (addr - PASEL0), value, size);
    } else if ((addr >= PASEL1) && ((addr + size) <= (PASEL1 + 2))) {
        reg_pasel1_write(s, &s->pasel1, (addr - PASEL1), value, size);
    } else if ((addr >= PASELC) && ((addr + size) <= (PASELC + 2))) {
        reg_paselc_write(s, &s->paselc, (addr - PASELC), value, size);
    } else if ((addr >= PAIES) && ((addr + size) <= (PAIES + 2))) {
        reg_paies_write(s, &s->paies, (addr - PAIES), value, size);
    } else if ((addr >= PAIE) && ((addr + size) <= (PAIE + 2))) {
        reg_paie_write(s, &s->paie, (addr - PAIE), value, size);
    } else if ((addr >= PAIFG) && ((addr + size) <= (PAIFG + 2))) {
        reg_paifg_write(s, &s->paifg, (addr - PAIFG), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
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

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_PORT_A, SIZE);
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
