// Peripheral name: Port_B

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_PORT_B "msp430fr5739_port_b"
#define SIZE 30
#define MSP430FR5739_PORT_B(obj) OBJECT_CHECK(MSP430_Port_B_State, (obj), TYPE_MSP430FR5739_PORT_B)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x0220

#define PBIN 0
#define PBOUT 2
#define PBDIR 4
#define PBREN 6
#define PBSEL0 10
#define PBSEL1 12
#define PBSELC 22
#define PBIES 24
#define PBIE 26
#define PBIFG 28

// REGISTERS RESET VALUE
#define REG_PBIN_RESET_VALUE 0x0
#define REG_PBOUT_RESET_VALUE 0x0
#define REG_PBDIR_RESET_VALUE 0x0
#define REG_PBREN_RESET_VALUE 0x0
#define REG_PBSEL0_RESET_VALUE 0x0
#define REG_PBSEL1_RESET_VALUE 0x0
#define REG_PBSELC_RESET_VALUE 0x0
#define REG_PBIES_RESET_VALUE 0x0
#define REG_PBIE_RESET_VALUE 0x0
#define REG_PBIFG_RESET_VALUE 0x0

// REGISTERS BITS MASKS
#define REG_PBIN_BITS_MASK 0xffff
#define REG_PBOUT_BITS_MASK 0xffff
#define REG_PBDIR_BITS_MASK 0xffff
#define REG_PBREN_BITS_MASK 0xffff
#define REG_PBSEL0_BITS_MASK 0xffff
#define REG_PBSEL1_BITS_MASK 0xffff
#define REG_PBSELC_BITS_MASK 0xffff
#define REG_PBIES_BITS_MASK 0xffff
#define REG_PBIE_BITS_MASK 0xffff
#define REG_PBIFG_BITS_MASK 0xffff

// FIELDS FOR REGISTER : PBIN
#define REG_PBIN_PBIN0_BITS_MASK (1 << 0)
#define REG_PBIN_PBIN1_BITS_MASK (1 << 1)
#define REG_PBIN_PBIN2_BITS_MASK (1 << 2)
#define REG_PBIN_PBIN3_BITS_MASK (1 << 3)
#define REG_PBIN_PBIN4_BITS_MASK (1 << 4)
#define REG_PBIN_PBIN5_BITS_MASK (1 << 5)
#define REG_PBIN_PBIN6_BITS_MASK (1 << 6)
#define REG_PBIN_PBIN7_BITS_MASK (1 << 7)
#define REG_PBIN_PBIN8_BITS_MASK (1 << 8)
#define REG_PBIN_PBIN9_BITS_MASK (1 << 9)
#define REG_PBIN_PBIN10_BITS_MASK (1 << 10)
#define REG_PBIN_PBIN11_BITS_MASK (1 << 11)
#define REG_PBIN_PBIN12_BITS_MASK (1 << 12)
#define REG_PBIN_PBIN13_BITS_MASK (1 << 13)
#define REG_PBIN_PBIN14_BITS_MASK (1 << 14)
#define REG_PBIN_PBIN15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PBOUT
#define REG_PBOUT_PBOUT0_BITS_MASK (1 << 0)
#define REG_PBOUT_PBOUT1_BITS_MASK (1 << 1)
#define REG_PBOUT_PBOUT2_BITS_MASK (1 << 2)
#define REG_PBOUT_PBOUT3_BITS_MASK (1 << 3)
#define REG_PBOUT_PBOUT4_BITS_MASK (1 << 4)
#define REG_PBOUT_PBOUT5_BITS_MASK (1 << 5)
#define REG_PBOUT_PBOUT6_BITS_MASK (1 << 6)
#define REG_PBOUT_PBOUT7_BITS_MASK (1 << 7)
#define REG_PBOUT_PBOUT8_BITS_MASK (1 << 8)
#define REG_PBOUT_PBOUT9_BITS_MASK (1 << 9)
#define REG_PBOUT_PBOUT10_BITS_MASK (1 << 10)
#define REG_PBOUT_PBOUT11_BITS_MASK (1 << 11)
#define REG_PBOUT_PBOUT12_BITS_MASK (1 << 12)
#define REG_PBOUT_PBOUT13_BITS_MASK (1 << 13)
#define REG_PBOUT_PBOUT14_BITS_MASK (1 << 14)
#define REG_PBOUT_PBOUT15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PBDIR
#define REG_PBDIR_PBDIR0_BITS_MASK (1 << 0)
#define REG_PBDIR_PBDIR1_BITS_MASK (1 << 1)
#define REG_PBDIR_PBDIR2_BITS_MASK (1 << 2)
#define REG_PBDIR_PBDIR3_BITS_MASK (1 << 3)
#define REG_PBDIR_PBDIR4_BITS_MASK (1 << 4)
#define REG_PBDIR_PBDIR5_BITS_MASK (1 << 5)
#define REG_PBDIR_PBDIR6_BITS_MASK (1 << 6)
#define REG_PBDIR_PBDIR7_BITS_MASK (1 << 7)
#define REG_PBDIR_PBDIR8_BITS_MASK (1 << 8)
#define REG_PBDIR_PBDIR9_BITS_MASK (1 << 9)
#define REG_PBDIR_PBDIR10_BITS_MASK (1 << 10)
#define REG_PBDIR_PBDIR11_BITS_MASK (1 << 11)
#define REG_PBDIR_PBDIR12_BITS_MASK (1 << 12)
#define REG_PBDIR_PBDIR13_BITS_MASK (1 << 13)
#define REG_PBDIR_PBDIR14_BITS_MASK (1 << 14)
#define REG_PBDIR_PBDIR15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PBREN
#define REG_PBREN_PBREN0_BITS_MASK (1 << 0)
#define REG_PBREN_PBREN1_BITS_MASK (1 << 1)
#define REG_PBREN_PBREN2_BITS_MASK (1 << 2)
#define REG_PBREN_PBREN3_BITS_MASK (1 << 3)
#define REG_PBREN_PBREN4_BITS_MASK (1 << 4)
#define REG_PBREN_PBREN5_BITS_MASK (1 << 5)
#define REG_PBREN_PBREN6_BITS_MASK (1 << 6)
#define REG_PBREN_PBREN7_BITS_MASK (1 << 7)
#define REG_PBREN_PBREN8_BITS_MASK (1 << 8)
#define REG_PBREN_PBREN9_BITS_MASK (1 << 9)
#define REG_PBREN_PBREN10_BITS_MASK (1 << 10)
#define REG_PBREN_PBREN11_BITS_MASK (1 << 11)
#define REG_PBREN_PBREN12_BITS_MASK (1 << 12)
#define REG_PBREN_PBREN13_BITS_MASK (1 << 13)
#define REG_PBREN_PBREN14_BITS_MASK (1 << 14)
#define REG_PBREN_PBREN15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PBSEL0
#define REG_PBSEL0_PBSEL0_0_BITS_MASK (1 << 0)
#define REG_PBSEL0_PBSEL0_1_BITS_MASK (1 << 1)
#define REG_PBSEL0_PBSEL0_2_BITS_MASK (1 << 2)
#define REG_PBSEL0_PBSEL0_3_BITS_MASK (1 << 3)
#define REG_PBSEL0_PBSEL0_4_BITS_MASK (1 << 4)
#define REG_PBSEL0_PBSEL0_5_BITS_MASK (1 << 5)
#define REG_PBSEL0_PBSEL0_6_BITS_MASK (1 << 6)
#define REG_PBSEL0_PBSEL0_7_BITS_MASK (1 << 7)
#define REG_PBSEL0_PBSEL0_8_BITS_MASK (1 << 8)
#define REG_PBSEL0_PBSEL0_9_BITS_MASK (1 << 9)
#define REG_PBSEL0_PBSEL0_10_BITS_MASK (1 << 10)
#define REG_PBSEL0_PBSEL0_11_BITS_MASK (1 << 11)
#define REG_PBSEL0_PBSEL0_12_BITS_MASK (1 << 12)
#define REG_PBSEL0_PBSEL0_13_BITS_MASK (1 << 13)
#define REG_PBSEL0_PBSEL0_14_BITS_MASK (1 << 14)
#define REG_PBSEL0_PBSEL0_15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PBSEL1
#define REG_PBSEL1_PBSEL1_0_BITS_MASK (1 << 0)
#define REG_PBSEL1_PBSEL1_1_BITS_MASK (1 << 1)
#define REG_PBSEL1_PBSEL1_2_BITS_MASK (1 << 2)
#define REG_PBSEL1_PBSEL1_3_BITS_MASK (1 << 3)
#define REG_PBSEL1_PBSEL1_4_BITS_MASK (1 << 4)
#define REG_PBSEL1_PBSEL1_5_BITS_MASK (1 << 5)
#define REG_PBSEL1_PBSEL1_6_BITS_MASK (1 << 6)
#define REG_PBSEL1_PBSEL1_7_BITS_MASK (1 << 7)
#define REG_PBSEL1_PBSEL1_8_BITS_MASK (1 << 8)
#define REG_PBSEL1_PBSEL1_9_BITS_MASK (1 << 9)
#define REG_PBSEL1_PBSEL1_10_BITS_MASK (1 << 10)
#define REG_PBSEL1_PBSEL1_11_BITS_MASK (1 << 11)
#define REG_PBSEL1_PBSEL1_12_BITS_MASK (1 << 12)
#define REG_PBSEL1_PBSEL1_13_BITS_MASK (1 << 13)
#define REG_PBSEL1_PBSEL1_14_BITS_MASK (1 << 14)
#define REG_PBSEL1_PBSEL1_15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PBSELC
#define REG_PBSELC_PBSELC_0_BITS_MASK (1 << 0)
#define REG_PBSELC_PBSELC_1_BITS_MASK (1 << 1)
#define REG_PBSELC_PBSELC_2_BITS_MASK (1 << 2)
#define REG_PBSELC_PBSELC_3_BITS_MASK (1 << 3)
#define REG_PBSELC_PBSELC_4_BITS_MASK (1 << 4)
#define REG_PBSELC_PBSELC_5_BITS_MASK (1 << 5)
#define REG_PBSELC_PBSELC_6_BITS_MASK (1 << 6)
#define REG_PBSELC_PBSELC_7_BITS_MASK (1 << 7)
#define REG_PBSELC_PBSELC_8_BITS_MASK (1 << 8)
#define REG_PBSELC_PBSELC_9_BITS_MASK (1 << 9)
#define REG_PBSELC_PBSELC_10_BITS_MASK (1 << 10)
#define REG_PBSELC_PBSELC_11_BITS_MASK (1 << 11)
#define REG_PBSELC_PBSELC_12_BITS_MASK (1 << 12)
#define REG_PBSELC_PBSELC_13_BITS_MASK (1 << 13)
#define REG_PBSELC_PBSELC_14_BITS_MASK (1 << 14)
#define REG_PBSELC_PBSELC_15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PBIES
#define REG_PBIES_PBIES0_BITS_MASK (1 << 0)
#define REG_PBIES_PBIES1_BITS_MASK (1 << 1)
#define REG_PBIES_PBIES2_BITS_MASK (1 << 2)
#define REG_PBIES_PBIES3_BITS_MASK (1 << 3)
#define REG_PBIES_PBIES4_BITS_MASK (1 << 4)
#define REG_PBIES_PBIES5_BITS_MASK (1 << 5)
#define REG_PBIES_PBIES6_BITS_MASK (1 << 6)
#define REG_PBIES_PBIES7_BITS_MASK (1 << 7)
#define REG_PBIES_PBIES8_BITS_MASK (1 << 8)
#define REG_PBIES_PBIES9_BITS_MASK (1 << 9)
#define REG_PBIES_PBIES10_BITS_MASK (1 << 10)
#define REG_PBIES_PBIES11_BITS_MASK (1 << 11)
#define REG_PBIES_PBIES12_BITS_MASK (1 << 12)
#define REG_PBIES_PBIES13_BITS_MASK (1 << 13)
#define REG_PBIES_PBIES14_BITS_MASK (1 << 14)
#define REG_PBIES_PBIES15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PBIE
#define REG_PBIE_PBIE0_BITS_MASK (1 << 0)
#define REG_PBIE_PBIE1_BITS_MASK (1 << 1)
#define REG_PBIE_PBIE2_BITS_MASK (1 << 2)
#define REG_PBIE_PBIE3_BITS_MASK (1 << 3)
#define REG_PBIE_PBIE4_BITS_MASK (1 << 4)
#define REG_PBIE_PBIE5_BITS_MASK (1 << 5)
#define REG_PBIE_PBIE6_BITS_MASK (1 << 6)
#define REG_PBIE_PBIE7_BITS_MASK (1 << 7)
#define REG_PBIE_PBIE8_BITS_MASK (1 << 8)
#define REG_PBIE_PBIE9_BITS_MASK (1 << 9)
#define REG_PBIE_PBIE10_BITS_MASK (1 << 10)
#define REG_PBIE_PBIE11_BITS_MASK (1 << 11)
#define REG_PBIE_PBIE12_BITS_MASK (1 << 12)
#define REG_PBIE_PBIE13_BITS_MASK (1 << 13)
#define REG_PBIE_PBIE14_BITS_MASK (1 << 14)
#define REG_PBIE_PBIE15_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : PBIFG
#define REG_PBIFG_PBIFG0_BITS_MASK (1 << 0)
#define REG_PBIFG_PBIFG1_BITS_MASK (1 << 1)
#define REG_PBIFG_PBIFG2_BITS_MASK (1 << 2)
#define REG_PBIFG_PBIFG3_BITS_MASK (1 << 3)
#define REG_PBIFG_PBIFG4_BITS_MASK (1 << 4)
#define REG_PBIFG_PBIFG5_BITS_MASK (1 << 5)
#define REG_PBIFG_PBIFG6_BITS_MASK (1 << 6)
#define REG_PBIFG_PBIFG7_BITS_MASK (1 << 7)
#define REG_PBIFG_PBIFG8_BITS_MASK (1 << 8)
#define REG_PBIFG_PBIFG9_BITS_MASK (1 << 9)
#define REG_PBIFG_PBIFG10_BITS_MASK (1 << 10)
#define REG_PBIFG_PBIFG11_BITS_MASK (1 << 11)
#define REG_PBIFG_PBIFG12_BITS_MASK (1 << 12)
#define REG_PBIFG_PBIFG13_BITS_MASK (1 << 13)
#define REG_PBIFG_PBIFG14_BITS_MASK (1 << 14)
#define REG_PBIFG_PBIFG15_BITS_MASK (1 << 15)




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t pbin;
   uint32_t pbout;
   uint32_t pbdir;
   uint32_t pbren;
   uint32_t pbsel0;
   uint32_t pbsel1;
   uint32_t pbselc;
   uint32_t pbies;
   uint32_t pbie;
   uint32_t pbifg;
} MSP430_Port_B_State;




 // Local functions definitions
// REG: PBIN
static uint64_t reg_pbin_read(MSP430_Port_B_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PBIN_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pbin_write(MSP430_Port_B_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PBIN_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PBIN_PBIN0_BITS_MASK) != ((*reg) & REG_PBIN_PBIN0_BITS_MASK)) {
        }

        if ((new_value & REG_PBIN_PBIN1_BITS_MASK) != ((*reg) & REG_PBIN_PBIN1_BITS_MASK)) {
        }

        if ((new_value & REG_PBIN_PBIN2_BITS_MASK) != ((*reg) & REG_PBIN_PBIN2_BITS_MASK)) {
        }

        if ((new_value & REG_PBIN_PBIN3_BITS_MASK) != ((*reg) & REG_PBIN_PBIN3_BITS_MASK)) {
        }

        if ((new_value & REG_PBIN_PBIN4_BITS_MASK) != ((*reg) & REG_PBIN_PBIN4_BITS_MASK)) {
        }

        if ((new_value & REG_PBIN_PBIN5_BITS_MASK) != ((*reg) & REG_PBIN_PBIN5_BITS_MASK)) {
        }

        if ((new_value & REG_PBIN_PBIN6_BITS_MASK) != ((*reg) & REG_PBIN_PBIN6_BITS_MASK)) {
        }

        if ((new_value & REG_PBIN_PBIN7_BITS_MASK) != ((*reg) & REG_PBIN_PBIN7_BITS_MASK)) {
        }

        if ((new_value & REG_PBIN_PBIN8_BITS_MASK) != ((*reg) & REG_PBIN_PBIN8_BITS_MASK)) {
        }

        if ((new_value & REG_PBIN_PBIN9_BITS_MASK) != ((*reg) & REG_PBIN_PBIN9_BITS_MASK)) {
        }

        if ((new_value & REG_PBIN_PBIN10_BITS_MASK) != ((*reg) & REG_PBIN_PBIN10_BITS_MASK)) {
        }

        if ((new_value & REG_PBIN_PBIN11_BITS_MASK) != ((*reg) & REG_PBIN_PBIN11_BITS_MASK)) {
        }

        if ((new_value & REG_PBIN_PBIN12_BITS_MASK) != ((*reg) & REG_PBIN_PBIN12_BITS_MASK)) {
        }

        if ((new_value & REG_PBIN_PBIN13_BITS_MASK) != ((*reg) & REG_PBIN_PBIN13_BITS_MASK)) {
        }

        if ((new_value & REG_PBIN_PBIN14_BITS_MASK) != ((*reg) & REG_PBIN_PBIN14_BITS_MASK)) {
        }

        if ((new_value & REG_PBIN_PBIN15_BITS_MASK) != ((*reg) & REG_PBIN_PBIN15_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PBOUT
static uint64_t reg_pbout_read(MSP430_Port_B_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PBOUT_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pbout_write(MSP430_Port_B_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PBOUT_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PBOUT_PBOUT0_BITS_MASK) != ((*reg) & REG_PBOUT_PBOUT0_BITS_MASK)) {
        }

        if ((new_value & REG_PBOUT_PBOUT1_BITS_MASK) != ((*reg) & REG_PBOUT_PBOUT1_BITS_MASK)) {
        }

        if ((new_value & REG_PBOUT_PBOUT2_BITS_MASK) != ((*reg) & REG_PBOUT_PBOUT2_BITS_MASK)) {
        }

        if ((new_value & REG_PBOUT_PBOUT3_BITS_MASK) != ((*reg) & REG_PBOUT_PBOUT3_BITS_MASK)) {
        }

        if ((new_value & REG_PBOUT_PBOUT4_BITS_MASK) != ((*reg) & REG_PBOUT_PBOUT4_BITS_MASK)) {
        }

        if ((new_value & REG_PBOUT_PBOUT5_BITS_MASK) != ((*reg) & REG_PBOUT_PBOUT5_BITS_MASK)) {
        }

        if ((new_value & REG_PBOUT_PBOUT6_BITS_MASK) != ((*reg) & REG_PBOUT_PBOUT6_BITS_MASK)) {
        }

        if ((new_value & REG_PBOUT_PBOUT7_BITS_MASK) != ((*reg) & REG_PBOUT_PBOUT7_BITS_MASK)) {
        }

        if ((new_value & REG_PBOUT_PBOUT8_BITS_MASK) != ((*reg) & REG_PBOUT_PBOUT8_BITS_MASK)) {
        }

        if ((new_value & REG_PBOUT_PBOUT9_BITS_MASK) != ((*reg) & REG_PBOUT_PBOUT9_BITS_MASK)) {
        }

        if ((new_value & REG_PBOUT_PBOUT10_BITS_MASK) != ((*reg) & REG_PBOUT_PBOUT10_BITS_MASK)) {
        }

        if ((new_value & REG_PBOUT_PBOUT11_BITS_MASK) != ((*reg) & REG_PBOUT_PBOUT11_BITS_MASK)) {
        }

        if ((new_value & REG_PBOUT_PBOUT12_BITS_MASK) != ((*reg) & REG_PBOUT_PBOUT12_BITS_MASK)) {
        }

        if ((new_value & REG_PBOUT_PBOUT13_BITS_MASK) != ((*reg) & REG_PBOUT_PBOUT13_BITS_MASK)) {
        }

        if ((new_value & REG_PBOUT_PBOUT14_BITS_MASK) != ((*reg) & REG_PBOUT_PBOUT14_BITS_MASK)) {
        }

        if ((new_value & REG_PBOUT_PBOUT15_BITS_MASK) != ((*reg) & REG_PBOUT_PBOUT15_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PBDIR
static uint64_t reg_pbdir_read(MSP430_Port_B_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PBDIR_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pbdir_write(MSP430_Port_B_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PBDIR_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PBDIR_PBDIR0_BITS_MASK) != ((*reg) & REG_PBDIR_PBDIR0_BITS_MASK)) {
        }

        if ((new_value & REG_PBDIR_PBDIR1_BITS_MASK) != ((*reg) & REG_PBDIR_PBDIR1_BITS_MASK)) {
        }

        if ((new_value & REG_PBDIR_PBDIR2_BITS_MASK) != ((*reg) & REG_PBDIR_PBDIR2_BITS_MASK)) {
        }

        if ((new_value & REG_PBDIR_PBDIR3_BITS_MASK) != ((*reg) & REG_PBDIR_PBDIR3_BITS_MASK)) {
        }

        if ((new_value & REG_PBDIR_PBDIR4_BITS_MASK) != ((*reg) & REG_PBDIR_PBDIR4_BITS_MASK)) {
        }

        if ((new_value & REG_PBDIR_PBDIR5_BITS_MASK) != ((*reg) & REG_PBDIR_PBDIR5_BITS_MASK)) {
        }

        if ((new_value & REG_PBDIR_PBDIR6_BITS_MASK) != ((*reg) & REG_PBDIR_PBDIR6_BITS_MASK)) {
        }

        if ((new_value & REG_PBDIR_PBDIR7_BITS_MASK) != ((*reg) & REG_PBDIR_PBDIR7_BITS_MASK)) {
        }

        if ((new_value & REG_PBDIR_PBDIR8_BITS_MASK) != ((*reg) & REG_PBDIR_PBDIR8_BITS_MASK)) {
        }

        if ((new_value & REG_PBDIR_PBDIR9_BITS_MASK) != ((*reg) & REG_PBDIR_PBDIR9_BITS_MASK)) {
        }

        if ((new_value & REG_PBDIR_PBDIR10_BITS_MASK) != ((*reg) & REG_PBDIR_PBDIR10_BITS_MASK)) {
        }

        if ((new_value & REG_PBDIR_PBDIR11_BITS_MASK) != ((*reg) & REG_PBDIR_PBDIR11_BITS_MASK)) {
        }

        if ((new_value & REG_PBDIR_PBDIR12_BITS_MASK) != ((*reg) & REG_PBDIR_PBDIR12_BITS_MASK)) {
        }

        if ((new_value & REG_PBDIR_PBDIR13_BITS_MASK) != ((*reg) & REG_PBDIR_PBDIR13_BITS_MASK)) {
        }

        if ((new_value & REG_PBDIR_PBDIR14_BITS_MASK) != ((*reg) & REG_PBDIR_PBDIR14_BITS_MASK)) {
        }

        if ((new_value & REG_PBDIR_PBDIR15_BITS_MASK) != ((*reg) & REG_PBDIR_PBDIR15_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PBREN
static uint64_t reg_pbren_read(MSP430_Port_B_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PBREN_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pbren_write(MSP430_Port_B_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PBREN_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PBREN_PBREN0_BITS_MASK) != ((*reg) & REG_PBREN_PBREN0_BITS_MASK)) {
        }

        if ((new_value & REG_PBREN_PBREN1_BITS_MASK) != ((*reg) & REG_PBREN_PBREN1_BITS_MASK)) {
        }

        if ((new_value & REG_PBREN_PBREN2_BITS_MASK) != ((*reg) & REG_PBREN_PBREN2_BITS_MASK)) {
        }

        if ((new_value & REG_PBREN_PBREN3_BITS_MASK) != ((*reg) & REG_PBREN_PBREN3_BITS_MASK)) {
        }

        if ((new_value & REG_PBREN_PBREN4_BITS_MASK) != ((*reg) & REG_PBREN_PBREN4_BITS_MASK)) {
        }

        if ((new_value & REG_PBREN_PBREN5_BITS_MASK) != ((*reg) & REG_PBREN_PBREN5_BITS_MASK)) {
        }

        if ((new_value & REG_PBREN_PBREN6_BITS_MASK) != ((*reg) & REG_PBREN_PBREN6_BITS_MASK)) {
        }

        if ((new_value & REG_PBREN_PBREN7_BITS_MASK) != ((*reg) & REG_PBREN_PBREN7_BITS_MASK)) {
        }

        if ((new_value & REG_PBREN_PBREN8_BITS_MASK) != ((*reg) & REG_PBREN_PBREN8_BITS_MASK)) {
        }

        if ((new_value & REG_PBREN_PBREN9_BITS_MASK) != ((*reg) & REG_PBREN_PBREN9_BITS_MASK)) {
        }

        if ((new_value & REG_PBREN_PBREN10_BITS_MASK) != ((*reg) & REG_PBREN_PBREN10_BITS_MASK)) {
        }

        if ((new_value & REG_PBREN_PBREN11_BITS_MASK) != ((*reg) & REG_PBREN_PBREN11_BITS_MASK)) {
        }

        if ((new_value & REG_PBREN_PBREN12_BITS_MASK) != ((*reg) & REG_PBREN_PBREN12_BITS_MASK)) {
        }

        if ((new_value & REG_PBREN_PBREN13_BITS_MASK) != ((*reg) & REG_PBREN_PBREN13_BITS_MASK)) {
        }

        if ((new_value & REG_PBREN_PBREN14_BITS_MASK) != ((*reg) & REG_PBREN_PBREN14_BITS_MASK)) {
        }

        if ((new_value & REG_PBREN_PBREN15_BITS_MASK) != ((*reg) & REG_PBREN_PBREN15_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PBSEL0
static uint64_t reg_pbsel0_read(MSP430_Port_B_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PBSEL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pbsel0_write(MSP430_Port_B_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PBSEL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PBSEL0_PBSEL0_0_BITS_MASK) != ((*reg) & REG_PBSEL0_PBSEL0_0_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL0_PBSEL0_1_BITS_MASK) != ((*reg) & REG_PBSEL0_PBSEL0_1_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL0_PBSEL0_2_BITS_MASK) != ((*reg) & REG_PBSEL0_PBSEL0_2_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL0_PBSEL0_3_BITS_MASK) != ((*reg) & REG_PBSEL0_PBSEL0_3_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL0_PBSEL0_4_BITS_MASK) != ((*reg) & REG_PBSEL0_PBSEL0_4_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL0_PBSEL0_5_BITS_MASK) != ((*reg) & REG_PBSEL0_PBSEL0_5_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL0_PBSEL0_6_BITS_MASK) != ((*reg) & REG_PBSEL0_PBSEL0_6_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL0_PBSEL0_7_BITS_MASK) != ((*reg) & REG_PBSEL0_PBSEL0_7_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL0_PBSEL0_8_BITS_MASK) != ((*reg) & REG_PBSEL0_PBSEL0_8_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL0_PBSEL0_9_BITS_MASK) != ((*reg) & REG_PBSEL0_PBSEL0_9_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL0_PBSEL0_10_BITS_MASK) != ((*reg) & REG_PBSEL0_PBSEL0_10_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL0_PBSEL0_11_BITS_MASK) != ((*reg) & REG_PBSEL0_PBSEL0_11_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL0_PBSEL0_12_BITS_MASK) != ((*reg) & REG_PBSEL0_PBSEL0_12_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL0_PBSEL0_13_BITS_MASK) != ((*reg) & REG_PBSEL0_PBSEL0_13_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL0_PBSEL0_14_BITS_MASK) != ((*reg) & REG_PBSEL0_PBSEL0_14_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL0_PBSEL0_15_BITS_MASK) != ((*reg) & REG_PBSEL0_PBSEL0_15_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PBSEL1
static uint64_t reg_pbsel1_read(MSP430_Port_B_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PBSEL1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pbsel1_write(MSP430_Port_B_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PBSEL1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PBSEL1_PBSEL1_0_BITS_MASK) != ((*reg) & REG_PBSEL1_PBSEL1_0_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL1_PBSEL1_1_BITS_MASK) != ((*reg) & REG_PBSEL1_PBSEL1_1_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL1_PBSEL1_2_BITS_MASK) != ((*reg) & REG_PBSEL1_PBSEL1_2_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL1_PBSEL1_3_BITS_MASK) != ((*reg) & REG_PBSEL1_PBSEL1_3_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL1_PBSEL1_4_BITS_MASK) != ((*reg) & REG_PBSEL1_PBSEL1_4_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL1_PBSEL1_5_BITS_MASK) != ((*reg) & REG_PBSEL1_PBSEL1_5_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL1_PBSEL1_6_BITS_MASK) != ((*reg) & REG_PBSEL1_PBSEL1_6_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL1_PBSEL1_7_BITS_MASK) != ((*reg) & REG_PBSEL1_PBSEL1_7_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL1_PBSEL1_8_BITS_MASK) != ((*reg) & REG_PBSEL1_PBSEL1_8_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL1_PBSEL1_9_BITS_MASK) != ((*reg) & REG_PBSEL1_PBSEL1_9_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL1_PBSEL1_10_BITS_MASK) != ((*reg) & REG_PBSEL1_PBSEL1_10_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL1_PBSEL1_11_BITS_MASK) != ((*reg) & REG_PBSEL1_PBSEL1_11_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL1_PBSEL1_12_BITS_MASK) != ((*reg) & REG_PBSEL1_PBSEL1_12_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL1_PBSEL1_13_BITS_MASK) != ((*reg) & REG_PBSEL1_PBSEL1_13_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL1_PBSEL1_14_BITS_MASK) != ((*reg) & REG_PBSEL1_PBSEL1_14_BITS_MASK)) {
        }

        if ((new_value & REG_PBSEL1_PBSEL1_15_BITS_MASK) != ((*reg) & REG_PBSEL1_PBSEL1_15_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PBSELC
static uint64_t reg_pbselc_read(MSP430_Port_B_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PBSELC_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pbselc_write(MSP430_Port_B_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PBSELC_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PBSELC_PBSELC_0_BITS_MASK) != ((*reg) & REG_PBSELC_PBSELC_0_BITS_MASK)) {
        }

        if ((new_value & REG_PBSELC_PBSELC_1_BITS_MASK) != ((*reg) & REG_PBSELC_PBSELC_1_BITS_MASK)) {
        }

        if ((new_value & REG_PBSELC_PBSELC_2_BITS_MASK) != ((*reg) & REG_PBSELC_PBSELC_2_BITS_MASK)) {
        }

        if ((new_value & REG_PBSELC_PBSELC_3_BITS_MASK) != ((*reg) & REG_PBSELC_PBSELC_3_BITS_MASK)) {
        }

        if ((new_value & REG_PBSELC_PBSELC_4_BITS_MASK) != ((*reg) & REG_PBSELC_PBSELC_4_BITS_MASK)) {
        }

        if ((new_value & REG_PBSELC_PBSELC_5_BITS_MASK) != ((*reg) & REG_PBSELC_PBSELC_5_BITS_MASK)) {
        }

        if ((new_value & REG_PBSELC_PBSELC_6_BITS_MASK) != ((*reg) & REG_PBSELC_PBSELC_6_BITS_MASK)) {
        }

        if ((new_value & REG_PBSELC_PBSELC_7_BITS_MASK) != ((*reg) & REG_PBSELC_PBSELC_7_BITS_MASK)) {
        }

        if ((new_value & REG_PBSELC_PBSELC_8_BITS_MASK) != ((*reg) & REG_PBSELC_PBSELC_8_BITS_MASK)) {
        }

        if ((new_value & REG_PBSELC_PBSELC_9_BITS_MASK) != ((*reg) & REG_PBSELC_PBSELC_9_BITS_MASK)) {
        }

        if ((new_value & REG_PBSELC_PBSELC_10_BITS_MASK) != ((*reg) & REG_PBSELC_PBSELC_10_BITS_MASK)) {
        }

        if ((new_value & REG_PBSELC_PBSELC_11_BITS_MASK) != ((*reg) & REG_PBSELC_PBSELC_11_BITS_MASK)) {
        }

        if ((new_value & REG_PBSELC_PBSELC_12_BITS_MASK) != ((*reg) & REG_PBSELC_PBSELC_12_BITS_MASK)) {
        }

        if ((new_value & REG_PBSELC_PBSELC_13_BITS_MASK) != ((*reg) & REG_PBSELC_PBSELC_13_BITS_MASK)) {
        }

        if ((new_value & REG_PBSELC_PBSELC_14_BITS_MASK) != ((*reg) & REG_PBSELC_PBSELC_14_BITS_MASK)) {
        }

        if ((new_value & REG_PBSELC_PBSELC_15_BITS_MASK) != ((*reg) & REG_PBSELC_PBSELC_15_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PBIES
static uint64_t reg_pbies_read(MSP430_Port_B_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PBIES_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pbies_write(MSP430_Port_B_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PBIES_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PBIES_PBIES0_BITS_MASK) != ((*reg) & REG_PBIES_PBIES0_BITS_MASK)) {
        }

        if ((new_value & REG_PBIES_PBIES1_BITS_MASK) != ((*reg) & REG_PBIES_PBIES1_BITS_MASK)) {
        }

        if ((new_value & REG_PBIES_PBIES2_BITS_MASK) != ((*reg) & REG_PBIES_PBIES2_BITS_MASK)) {
        }

        if ((new_value & REG_PBIES_PBIES3_BITS_MASK) != ((*reg) & REG_PBIES_PBIES3_BITS_MASK)) {
        }

        if ((new_value & REG_PBIES_PBIES4_BITS_MASK) != ((*reg) & REG_PBIES_PBIES4_BITS_MASK)) {
        }

        if ((new_value & REG_PBIES_PBIES5_BITS_MASK) != ((*reg) & REG_PBIES_PBIES5_BITS_MASK)) {
        }

        if ((new_value & REG_PBIES_PBIES6_BITS_MASK) != ((*reg) & REG_PBIES_PBIES6_BITS_MASK)) {
        }

        if ((new_value & REG_PBIES_PBIES7_BITS_MASK) != ((*reg) & REG_PBIES_PBIES7_BITS_MASK)) {
        }

        if ((new_value & REG_PBIES_PBIES8_BITS_MASK) != ((*reg) & REG_PBIES_PBIES8_BITS_MASK)) {
        }

        if ((new_value & REG_PBIES_PBIES9_BITS_MASK) != ((*reg) & REG_PBIES_PBIES9_BITS_MASK)) {
        }

        if ((new_value & REG_PBIES_PBIES10_BITS_MASK) != ((*reg) & REG_PBIES_PBIES10_BITS_MASK)) {
        }

        if ((new_value & REG_PBIES_PBIES11_BITS_MASK) != ((*reg) & REG_PBIES_PBIES11_BITS_MASK)) {
        }

        if ((new_value & REG_PBIES_PBIES12_BITS_MASK) != ((*reg) & REG_PBIES_PBIES12_BITS_MASK)) {
        }

        if ((new_value & REG_PBIES_PBIES13_BITS_MASK) != ((*reg) & REG_PBIES_PBIES13_BITS_MASK)) {
        }

        if ((new_value & REG_PBIES_PBIES14_BITS_MASK) != ((*reg) & REG_PBIES_PBIES14_BITS_MASK)) {
        }

        if ((new_value & REG_PBIES_PBIES15_BITS_MASK) != ((*reg) & REG_PBIES_PBIES15_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PBIE
static uint64_t reg_pbie_read(MSP430_Port_B_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PBIE_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pbie_write(MSP430_Port_B_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PBIE_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PBIE_PBIE0_BITS_MASK) != ((*reg) & REG_PBIE_PBIE0_BITS_MASK)) {
        }

        if ((new_value & REG_PBIE_PBIE1_BITS_MASK) != ((*reg) & REG_PBIE_PBIE1_BITS_MASK)) {
        }

        if ((new_value & REG_PBIE_PBIE2_BITS_MASK) != ((*reg) & REG_PBIE_PBIE2_BITS_MASK)) {
        }

        if ((new_value & REG_PBIE_PBIE3_BITS_MASK) != ((*reg) & REG_PBIE_PBIE3_BITS_MASK)) {
        }

        if ((new_value & REG_PBIE_PBIE4_BITS_MASK) != ((*reg) & REG_PBIE_PBIE4_BITS_MASK)) {
        }

        if ((new_value & REG_PBIE_PBIE5_BITS_MASK) != ((*reg) & REG_PBIE_PBIE5_BITS_MASK)) {
        }

        if ((new_value & REG_PBIE_PBIE6_BITS_MASK) != ((*reg) & REG_PBIE_PBIE6_BITS_MASK)) {
        }

        if ((new_value & REG_PBIE_PBIE7_BITS_MASK) != ((*reg) & REG_PBIE_PBIE7_BITS_MASK)) {
        }

        if ((new_value & REG_PBIE_PBIE8_BITS_MASK) != ((*reg) & REG_PBIE_PBIE8_BITS_MASK)) {
        }

        if ((new_value & REG_PBIE_PBIE9_BITS_MASK) != ((*reg) & REG_PBIE_PBIE9_BITS_MASK)) {
        }

        if ((new_value & REG_PBIE_PBIE10_BITS_MASK) != ((*reg) & REG_PBIE_PBIE10_BITS_MASK)) {
        }

        if ((new_value & REG_PBIE_PBIE11_BITS_MASK) != ((*reg) & REG_PBIE_PBIE11_BITS_MASK)) {
        }

        if ((new_value & REG_PBIE_PBIE12_BITS_MASK) != ((*reg) & REG_PBIE_PBIE12_BITS_MASK)) {
        }

        if ((new_value & REG_PBIE_PBIE13_BITS_MASK) != ((*reg) & REG_PBIE_PBIE13_BITS_MASK)) {
        }

        if ((new_value & REG_PBIE_PBIE14_BITS_MASK) != ((*reg) & REG_PBIE_PBIE14_BITS_MASK)) {
        }

        if ((new_value & REG_PBIE_PBIE15_BITS_MASK) != ((*reg) & REG_PBIE_PBIE15_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: PBIFG
static uint64_t reg_pbifg_read(MSP430_Port_B_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_PBIFG_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_pbifg_write(MSP430_Port_B_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_PBIFG_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_PBIFG_PBIFG0_BITS_MASK) != ((*reg) & REG_PBIFG_PBIFG0_BITS_MASK)) {
        }

        if ((new_value & REG_PBIFG_PBIFG1_BITS_MASK) != ((*reg) & REG_PBIFG_PBIFG1_BITS_MASK)) {
        }

        if ((new_value & REG_PBIFG_PBIFG2_BITS_MASK) != ((*reg) & REG_PBIFG_PBIFG2_BITS_MASK)) {
        }

        if ((new_value & REG_PBIFG_PBIFG3_BITS_MASK) != ((*reg) & REG_PBIFG_PBIFG3_BITS_MASK)) {
        }

        if ((new_value & REG_PBIFG_PBIFG4_BITS_MASK) != ((*reg) & REG_PBIFG_PBIFG4_BITS_MASK)) {
        }

        if ((new_value & REG_PBIFG_PBIFG5_BITS_MASK) != ((*reg) & REG_PBIFG_PBIFG5_BITS_MASK)) {
        }

        if ((new_value & REG_PBIFG_PBIFG6_BITS_MASK) != ((*reg) & REG_PBIFG_PBIFG6_BITS_MASK)) {
        }

        if ((new_value & REG_PBIFG_PBIFG7_BITS_MASK) != ((*reg) & REG_PBIFG_PBIFG7_BITS_MASK)) {
        }

        if ((new_value & REG_PBIFG_PBIFG8_BITS_MASK) != ((*reg) & REG_PBIFG_PBIFG8_BITS_MASK)) {
        }

        if ((new_value & REG_PBIFG_PBIFG9_BITS_MASK) != ((*reg) & REG_PBIFG_PBIFG9_BITS_MASK)) {
        }

        if ((new_value & REG_PBIFG_PBIFG10_BITS_MASK) != ((*reg) & REG_PBIFG_PBIFG10_BITS_MASK)) {
        }

        if ((new_value & REG_PBIFG_PBIFG11_BITS_MASK) != ((*reg) & REG_PBIFG_PBIFG11_BITS_MASK)) {
        }

        if ((new_value & REG_PBIFG_PBIFG12_BITS_MASK) != ((*reg) & REG_PBIFG_PBIFG12_BITS_MASK)) {
        }

        if ((new_value & REG_PBIFG_PBIFG13_BITS_MASK) != ((*reg) & REG_PBIFG_PBIFG13_BITS_MASK)) {
        }

        if ((new_value & REG_PBIFG_PBIFG14_BITS_MASK) != ((*reg) & REG_PBIFG_PBIFG14_BITS_MASK)) {
        }

        if ((new_value & REG_PBIFG_PBIFG15_BITS_MASK) != ((*reg) & REG_PBIFG_PBIFG15_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_Port_B_State *s = MSP430FR5739_PORT_B(opaque);
    uint64_t retvalue = 0;

    if ((addr >= PBIN) && ((addr + size) <= (PBIN + 2))) {
        retvalue = reg_pbin_read(s, &s->pbin, (addr - PBIN));
    } else if ((addr >= PBOUT) && ((addr + size) <= (PBOUT + 2))) {
        retvalue = reg_pbout_read(s, &s->pbout, (addr - PBOUT));
    } else if ((addr >= PBDIR) && ((addr + size) <= (PBDIR + 2))) {
        retvalue = reg_pbdir_read(s, &s->pbdir, (addr - PBDIR));
    } else if ((addr >= PBREN) && ((addr + size) <= (PBREN + 2))) {
        retvalue = reg_pbren_read(s, &s->pbren, (addr - PBREN));
    } else if ((addr >= PBSEL0) && ((addr + size) <= (PBSEL0 + 2))) {
        retvalue = reg_pbsel0_read(s, &s->pbsel0, (addr - PBSEL0));
    } else if ((addr >= PBSEL1) && ((addr + size) <= (PBSEL1 + 2))) {
        retvalue = reg_pbsel1_read(s, &s->pbsel1, (addr - PBSEL1));
    } else if ((addr >= PBSELC) && ((addr + size) <= (PBSELC + 2))) {
        retvalue = reg_pbselc_read(s, &s->pbselc, (addr - PBSELC));
    } else if ((addr >= PBIES) && ((addr + size) <= (PBIES + 2))) {
        retvalue = reg_pbies_read(s, &s->pbies, (addr - PBIES));
    } else if ((addr >= PBIE) && ((addr + size) <= (PBIE + 2))) {
        retvalue = reg_pbie_read(s, &s->pbie, (addr - PBIE));
    } else if ((addr >= PBIFG) && ((addr + size) <= (PBIFG + 2))) {
        retvalue = reg_pbifg_read(s, &s->pbifg, (addr - PBIFG));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_Port_B_State *s = MSP430FR5739_PORT_B(opaque);

    if ((addr >= PBIN) && ((addr + size) <= (PBIN + 2))) {
        reg_pbin_write(s, &s->pbin, (addr - PBIN), value, size);
    } else if ((addr >= PBOUT) && ((addr + size) <= (PBOUT + 2))) {
        reg_pbout_write(s, &s->pbout, (addr - PBOUT), value, size);
    } else if ((addr >= PBDIR) && ((addr + size) <= (PBDIR + 2))) {
        reg_pbdir_write(s, &s->pbdir, (addr - PBDIR), value, size);
    } else if ((addr >= PBREN) && ((addr + size) <= (PBREN + 2))) {
        reg_pbren_write(s, &s->pbren, (addr - PBREN), value, size);
    } else if ((addr >= PBSEL0) && ((addr + size) <= (PBSEL0 + 2))) {
        reg_pbsel0_write(s, &s->pbsel0, (addr - PBSEL0), value, size);
    } else if ((addr >= PBSEL1) && ((addr + size) <= (PBSEL1 + 2))) {
        reg_pbsel1_write(s, &s->pbsel1, (addr - PBSEL1), value, size);
    } else if ((addr >= PBSELC) && ((addr + size) <= (PBSELC + 2))) {
        reg_pbselc_write(s, &s->pbselc, (addr - PBSELC), value, size);
    } else if ((addr >= PBIES) && ((addr + size) <= (PBIES + 2))) {
        reg_pbies_write(s, &s->pbies, (addr - PBIES), value, size);
    } else if ((addr >= PBIE) && ((addr + size) <= (PBIE + 2))) {
        reg_pbie_write(s, &s->pbie, (addr - PBIE), value, size);
    } else if ((addr >= PBIFG) && ((addr + size) <= (PBIFG + 2))) {
        reg_pbifg_write(s, &s->pbifg, (addr - PBIFG), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_Port_B_State *device = MSP430FR5739_PORT_B(dev);

   device->pbin = 0x0;
   device->pbout = 0x0;
   device->pbdir = 0x0;
   device->pbren = 0x0;
   device->pbsel0 = 0x0;
   device->pbsel1 = 0x0;
   device->pbselc = 0x0;
   device->pbies = 0x0;
   device->pbie = 0x0;
   device->pbifg = 0x0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_Port_B_State *s = MSP430FR5739_PORT_B(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_PORT_B, SIZE);
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
    .name          = TYPE_MSP430FR5739_PORT_B,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_Port_B_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_port_b_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_port_b_register_types)
