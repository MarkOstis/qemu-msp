// Peripheral name: DMA

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_DMA "msp430fr5739_dma"
#define SIZE 60
#define MSP430FR5739_DMA(obj) OBJECT_CHECK(MSP430_DMA_State, (obj), TYPE_MSP430FR5739_DMA)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x0500

#define DMACTL0 0
#define DMACTL1 2
#define DMACTL2 4
#define DMACTL3 6
#define DMACTL4 8
#define DMAIV 14
#define DMA0CTL 16
#define DMA0SA 18
#define DMA0DA 22
#define DMA0SZ 26
#define DMA1CTL 32
#define DMA1SA 34
#define DMA1DA 38
#define DMA1SZ 42
#define DMA2CTL 48
#define DMA2SA 50
#define DMA2DA 54
#define DMA2SZ 58

// REGISTERS RESET VALUE
#define REG_DMACTL0_RESET_VALUE 0x0
#define REG_DMACTL1_RESET_VALUE 0x0
#define REG_DMACTL2_RESET_VALUE 0
#define REG_DMACTL3_RESET_VALUE 0
#define REG_DMACTL4_RESET_VALUE 0x0
#define REG_DMAIV_RESET_VALUE 0
#define REG_DMA0CTL_RESET_VALUE 0x0
#define REG_DMA0SA_RESET_VALUE 0
#define REG_DMA0DA_RESET_VALUE 0
#define REG_DMA0SZ_RESET_VALUE 0
#define REG_DMA1CTL_RESET_VALUE 0x0
#define REG_DMA1SA_RESET_VALUE 0
#define REG_DMA1DA_RESET_VALUE 0
#define REG_DMA1SZ_RESET_VALUE 0
#define REG_DMA2CTL_RESET_VALUE 0x0
#define REG_DMA2SA_RESET_VALUE 0
#define REG_DMA2DA_RESET_VALUE 0
#define REG_DMA2SZ_RESET_VALUE 0

// REGISTERS BITS MASKS
#define REG_DMACTL0_BITS_MASK 0x1f1f
#define REG_DMACTL1_BITS_MASK 0x1f
#define REG_DMACTL2_BITS_MASK 0xffff
#define REG_DMACTL3_BITS_MASK 0xffff
#define REG_DMACTL4_BITS_MASK 0x7
#define REG_DMAIV_BITS_MASK 0xffff
#define REG_DMA0CTL_BITS_MASK 0x7fff
#define REG_DMA0SA_BITS_MASK 0xffffffff
#define REG_DMA0DA_BITS_MASK 0xffffffff
#define REG_DMA0SZ_BITS_MASK 0xffff
#define REG_DMA1CTL_BITS_MASK 0x7fff
#define REG_DMA1SA_BITS_MASK 0xffffffff
#define REG_DMA1DA_BITS_MASK 0xffffffff
#define REG_DMA1SZ_BITS_MASK 0xffff
#define REG_DMA2CTL_BITS_MASK 0x7fff
#define REG_DMA2SA_BITS_MASK 0xffffffff
#define REG_DMA2DA_BITS_MASK 0xffffffff
#define REG_DMA2SZ_BITS_MASK 0xffff

// FIELDS FOR REGISTER : DMACTL0
#define REG_DMACTL0_DMA0TSEL_BITS_MASK (31 << 0)
#define REG_DMACTL0_DMA1TSEL_BITS_MASK (31 << 8)

// FIELDS FOR REGISTER : DMACTL1
#define REG_DMACTL1_DMA2TSEL_BITS_MASK (31 << 0)

// FIELDS FOR REGISTER : DMACTL2

// FIELDS FOR REGISTER : DMACTL3

// FIELDS FOR REGISTER : DMACTL4
#define REG_DMACTL4_ENNMI_BITS_MASK (1 << 0)
#define REG_DMACTL4_ROUNDROBIN_BITS_MASK (1 << 1)
#define REG_DMACTL4_DMARMWDIS_BITS_MASK (1 << 2)

// FIELDS FOR REGISTER : DMAIV

// FIELDS FOR REGISTER : DMA0CTL
#define REG_DMA0CTL_DMAREQ_BITS_MASK (1 << 0)
#define REG_DMA0CTL_DMAABORT_BITS_MASK (1 << 1)
#define REG_DMA0CTL_DMAIE_BITS_MASK (1 << 2)
#define REG_DMA0CTL_DMAIFG_BITS_MASK (1 << 3)
#define REG_DMA0CTL_DMAEN_BITS_MASK (1 << 4)
#define REG_DMA0CTL_DMALEVEL_BITS_MASK (1 << 5)
#define REG_DMA0CTL_DMASRCBYTE_BITS_MASK (1 << 6)
#define REG_DMA0CTL_DMADSTBYTE_BITS_MASK (1 << 7)
#define REG_DMA0CTL_DMASRCINCR_BITS_MASK (3 << 8)
#define REG_DMA0CTL_DMADSTINCR_BITS_MASK (3 << 10)
#define REG_DMA0CTL_DMADT_BITS_MASK (7 << 12)

// FIELDS FOR REGISTER : DMA0SA

// FIELDS FOR REGISTER : DMA0DA

// FIELDS FOR REGISTER : DMA0SZ

// FIELDS FOR REGISTER : DMA1CTL
#define REG_DMA1CTL_DMAREQ_BITS_MASK (1 << 0)
#define REG_DMA1CTL_DMAABORT_BITS_MASK (1 << 1)
#define REG_DMA1CTL_DMAIE_BITS_MASK (1 << 2)
#define REG_DMA1CTL_DMAIFG_BITS_MASK (1 << 3)
#define REG_DMA1CTL_DMAEN_BITS_MASK (1 << 4)
#define REG_DMA1CTL_DMALEVEL_BITS_MASK (1 << 5)
#define REG_DMA1CTL_DMASRCBYTE_BITS_MASK (1 << 6)
#define REG_DMA1CTL_DMADSTBYTE_BITS_MASK (1 << 7)
#define REG_DMA1CTL_DMASRCINCR_BITS_MASK (3 << 8)
#define REG_DMA1CTL_DMADSTINCR_BITS_MASK (3 << 10)
#define REG_DMA1CTL_DMADT_BITS_MASK (7 << 12)

// FIELDS FOR REGISTER : DMA1SA

// FIELDS FOR REGISTER : DMA1DA

// FIELDS FOR REGISTER : DMA1SZ

// FIELDS FOR REGISTER : DMA2CTL
#define REG_DMA2CTL_DMAREQ_BITS_MASK (1 << 0)
#define REG_DMA2CTL_DMAABORT_BITS_MASK (1 << 1)
#define REG_DMA2CTL_DMAIE_BITS_MASK (1 << 2)
#define REG_DMA2CTL_DMAIFG_BITS_MASK (1 << 3)
#define REG_DMA2CTL_DMAEN_BITS_MASK (1 << 4)
#define REG_DMA2CTL_DMALEVEL_BITS_MASK (1 << 5)
#define REG_DMA2CTL_DMASRCBYTE_BITS_MASK (1 << 6)
#define REG_DMA2CTL_DMADSTBYTE_BITS_MASK (1 << 7)
#define REG_DMA2CTL_DMASRCINCR_BITS_MASK (3 << 8)
#define REG_DMA2CTL_DMADSTINCR_BITS_MASK (3 << 10)
#define REG_DMA2CTL_DMADT_BITS_MASK (7 << 12)

// FIELDS FOR REGISTER : DMA2SA

// FIELDS FOR REGISTER : DMA2DA

// FIELDS FOR REGISTER : DMA2SZ




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t dmactl0;
   uint32_t dmactl1;
   uint32_t dmactl2;
   uint32_t dmactl3;
   uint32_t dmactl4;
   uint32_t dmaiv;
   uint32_t dma0ctl;
   uint32_t dma0sa;
   uint32_t dma0da;
   uint32_t dma0sz;
   uint32_t dma1ctl;
   uint32_t dma1sa;
   uint32_t dma1da;
   uint32_t dma1sz;
   uint32_t dma2ctl;
   uint32_t dma2sa;
   uint32_t dma2da;
   uint32_t dma2sz;
} MSP430_DMA_State;




 // Local functions definitions
// REG: DMACTL0
static uint64_t reg_dmactl0_read(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_DMACTL0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_dmactl0_write(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_DMACTL0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_DMACTL0_DMA0TSEL_BITS_MASK) != ((*reg) & REG_DMACTL0_DMA0TSEL_BITS_MASK)) {
        }

        if ((new_value & REG_DMACTL0_DMA1TSEL_BITS_MASK) != ((*reg) & REG_DMACTL0_DMA1TSEL_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: DMACTL1
static uint64_t reg_dmactl1_read(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_DMACTL1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_dmactl1_write(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_DMACTL1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_DMACTL1_DMA2TSEL_BITS_MASK) != ((*reg) & REG_DMACTL1_DMA2TSEL_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: DMACTL2
static uint64_t reg_dmactl2_read(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_DMACTL2_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_dmactl2_write(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_DMACTL2_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: DMACTL3
static uint64_t reg_dmactl3_read(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_DMACTL3_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_dmactl3_write(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_DMACTL3_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: DMACTL4
static uint64_t reg_dmactl4_read(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_DMACTL4_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_dmactl4_write(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_DMACTL4_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_DMACTL4_ENNMI_BITS_MASK) != ((*reg) & REG_DMACTL4_ENNMI_BITS_MASK)) {
        }

        if ((new_value & REG_DMACTL4_ROUNDROBIN_BITS_MASK) != ((*reg) & REG_DMACTL4_ROUNDROBIN_BITS_MASK)) {
        }

        if ((new_value & REG_DMACTL4_DMARMWDIS_BITS_MASK) != ((*reg) & REG_DMACTL4_DMARMWDIS_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: DMAIV
static uint64_t reg_dmaiv_read(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_DMAIV_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_dmaiv_write(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_DMAIV_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: DMA0CTL
static uint64_t reg_dma0ctl_read(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_DMA0CTL_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_dma0ctl_write(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_DMA0CTL_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_DMA0CTL_DMAREQ_BITS_MASK) != ((*reg) & REG_DMA0CTL_DMAREQ_BITS_MASK)) {
        }

        if ((new_value & REG_DMA0CTL_DMAABORT_BITS_MASK) != ((*reg) & REG_DMA0CTL_DMAABORT_BITS_MASK)) {
        }

        if ((new_value & REG_DMA0CTL_DMAIE_BITS_MASK) != ((*reg) & REG_DMA0CTL_DMAIE_BITS_MASK)) {
        }

        if ((new_value & REG_DMA0CTL_DMAIFG_BITS_MASK) != ((*reg) & REG_DMA0CTL_DMAIFG_BITS_MASK)) {
        }

        if ((new_value & REG_DMA0CTL_DMAEN_BITS_MASK) != ((*reg) & REG_DMA0CTL_DMAEN_BITS_MASK)) {
        }

        if ((new_value & REG_DMA0CTL_DMALEVEL_BITS_MASK) != ((*reg) & REG_DMA0CTL_DMALEVEL_BITS_MASK)) {
        }

        if ((new_value & REG_DMA0CTL_DMASRCBYTE_BITS_MASK) != ((*reg) & REG_DMA0CTL_DMASRCBYTE_BITS_MASK)) {
        }

        if ((new_value & REG_DMA0CTL_DMADSTBYTE_BITS_MASK) != ((*reg) & REG_DMA0CTL_DMADSTBYTE_BITS_MASK)) {
        }

        if ((new_value & REG_DMA0CTL_DMASRCINCR_BITS_MASK) != ((*reg) & REG_DMA0CTL_DMASRCINCR_BITS_MASK)) {
        }

        if ((new_value & REG_DMA0CTL_DMADSTINCR_BITS_MASK) != ((*reg) & REG_DMA0CTL_DMADSTINCR_BITS_MASK)) {
        }

        if ((new_value & REG_DMA0CTL_DMADT_BITS_MASK) != ((*reg) & REG_DMA0CTL_DMADT_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: DMA0SA
static uint64_t reg_dma0sa_read(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_DMA0SA_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_dma0sa_write(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_DMA0SA_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: DMA0DA
static uint64_t reg_dma0da_read(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_DMA0DA_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_dma0da_write(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_DMA0DA_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: DMA0SZ
static uint64_t reg_dma0sz_read(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_DMA0SZ_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_dma0sz_write(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_DMA0SZ_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: DMA1CTL
static uint64_t reg_dma1ctl_read(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_DMA1CTL_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_dma1ctl_write(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_DMA1CTL_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_DMA1CTL_DMAREQ_BITS_MASK) != ((*reg) & REG_DMA1CTL_DMAREQ_BITS_MASK)) {
        }

        if ((new_value & REG_DMA1CTL_DMAABORT_BITS_MASK) != ((*reg) & REG_DMA1CTL_DMAABORT_BITS_MASK)) {
        }

        if ((new_value & REG_DMA1CTL_DMAIE_BITS_MASK) != ((*reg) & REG_DMA1CTL_DMAIE_BITS_MASK)) {
        }

        if ((new_value & REG_DMA1CTL_DMAIFG_BITS_MASK) != ((*reg) & REG_DMA1CTL_DMAIFG_BITS_MASK)) {
        }

        if ((new_value & REG_DMA1CTL_DMAEN_BITS_MASK) != ((*reg) & REG_DMA1CTL_DMAEN_BITS_MASK)) {
        }

        if ((new_value & REG_DMA1CTL_DMALEVEL_BITS_MASK) != ((*reg) & REG_DMA1CTL_DMALEVEL_BITS_MASK)) {
        }

        if ((new_value & REG_DMA1CTL_DMASRCBYTE_BITS_MASK) != ((*reg) & REG_DMA1CTL_DMASRCBYTE_BITS_MASK)) {
        }

        if ((new_value & REG_DMA1CTL_DMADSTBYTE_BITS_MASK) != ((*reg) & REG_DMA1CTL_DMADSTBYTE_BITS_MASK)) {
        }

        if ((new_value & REG_DMA1CTL_DMASRCINCR_BITS_MASK) != ((*reg) & REG_DMA1CTL_DMASRCINCR_BITS_MASK)) {
        }

        if ((new_value & REG_DMA1CTL_DMADSTINCR_BITS_MASK) != ((*reg) & REG_DMA1CTL_DMADSTINCR_BITS_MASK)) {
        }

        if ((new_value & REG_DMA1CTL_DMADT_BITS_MASK) != ((*reg) & REG_DMA1CTL_DMADT_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: DMA1SA
static uint64_t reg_dma1sa_read(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_DMA1SA_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_dma1sa_write(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_DMA1SA_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: DMA1DA
static uint64_t reg_dma1da_read(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_DMA1DA_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_dma1da_write(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_DMA1DA_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: DMA1SZ
static uint64_t reg_dma1sz_read(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_DMA1SZ_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_dma1sz_write(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_DMA1SZ_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: DMA2CTL
static uint64_t reg_dma2ctl_read(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_DMA2CTL_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_dma2ctl_write(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_DMA2CTL_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_DMA2CTL_DMAREQ_BITS_MASK) != ((*reg) & REG_DMA2CTL_DMAREQ_BITS_MASK)) {
        }

        if ((new_value & REG_DMA2CTL_DMAABORT_BITS_MASK) != ((*reg) & REG_DMA2CTL_DMAABORT_BITS_MASK)) {
        }

        if ((new_value & REG_DMA2CTL_DMAIE_BITS_MASK) != ((*reg) & REG_DMA2CTL_DMAIE_BITS_MASK)) {
        }

        if ((new_value & REG_DMA2CTL_DMAIFG_BITS_MASK) != ((*reg) & REG_DMA2CTL_DMAIFG_BITS_MASK)) {
        }

        if ((new_value & REG_DMA2CTL_DMAEN_BITS_MASK) != ((*reg) & REG_DMA2CTL_DMAEN_BITS_MASK)) {
        }

        if ((new_value & REG_DMA2CTL_DMALEVEL_BITS_MASK) != ((*reg) & REG_DMA2CTL_DMALEVEL_BITS_MASK)) {
        }

        if ((new_value & REG_DMA2CTL_DMASRCBYTE_BITS_MASK) != ((*reg) & REG_DMA2CTL_DMASRCBYTE_BITS_MASK)) {
        }

        if ((new_value & REG_DMA2CTL_DMADSTBYTE_BITS_MASK) != ((*reg) & REG_DMA2CTL_DMADSTBYTE_BITS_MASK)) {
        }

        if ((new_value & REG_DMA2CTL_DMASRCINCR_BITS_MASK) != ((*reg) & REG_DMA2CTL_DMASRCINCR_BITS_MASK)) {
        }

        if ((new_value & REG_DMA2CTL_DMADSTINCR_BITS_MASK) != ((*reg) & REG_DMA2CTL_DMADSTINCR_BITS_MASK)) {
        }

        if ((new_value & REG_DMA2CTL_DMADT_BITS_MASK) != ((*reg) & REG_DMA2CTL_DMADT_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: DMA2SA
static uint64_t reg_dma2sa_read(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_DMA2SA_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_dma2sa_write(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_DMA2SA_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: DMA2DA
static uint64_t reg_dma2da_read(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_DMA2DA_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_dma2da_write(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_DMA2DA_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: DMA2SZ
static uint64_t reg_dma2sz_read(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_DMA2SZ_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_dma2sz_write(MSP430_DMA_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_DMA2SZ_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_DMA_State *s = MSP430FR5739_DMA(opaque);
    uint64_t retvalue = 0;

    if ((addr >= DMACTL0) && ((addr + size) <= (DMACTL0 + 2))) {
        retvalue = reg_dmactl0_read(s, &s->dmactl0, (addr - DMACTL0));
    } else if ((addr >= DMACTL1) && ((addr + size) <= (DMACTL1 + 2))) {
        retvalue = reg_dmactl1_read(s, &s->dmactl1, (addr - DMACTL1));
    } else if ((addr >= DMACTL2) && ((addr + size) <= (DMACTL2 + 2))) {
        retvalue = reg_dmactl2_read(s, &s->dmactl2, (addr - DMACTL2));
    } else if ((addr >= DMACTL3) && ((addr + size) <= (DMACTL3 + 2))) {
        retvalue = reg_dmactl3_read(s, &s->dmactl3, (addr - DMACTL3));
    } else if ((addr >= DMACTL4) && ((addr + size) <= (DMACTL4 + 2))) {
        retvalue = reg_dmactl4_read(s, &s->dmactl4, (addr - DMACTL4));
    } else if ((addr >= DMAIV) && ((addr + size) <= (DMAIV + 2))) {
        retvalue = reg_dmaiv_read(s, &s->dmaiv, (addr - DMAIV));
    } else if ((addr >= DMA0CTL) && ((addr + size) <= (DMA0CTL + 2))) {
        retvalue = reg_dma0ctl_read(s, &s->dma0ctl, (addr - DMA0CTL));
    } else if ((addr >= DMA0SA) && ((addr + size) <= (DMA0SA + 4))) {
        retvalue = reg_dma0sa_read(s, &s->dma0sa, (addr - DMA0SA));
    } else if ((addr >= DMA0DA) && ((addr + size) <= (DMA0DA + 4))) {
        retvalue = reg_dma0da_read(s, &s->dma0da, (addr - DMA0DA));
    } else if ((addr >= DMA0SZ) && ((addr + size) <= (DMA0SZ + 2))) {
        retvalue = reg_dma0sz_read(s, &s->dma0sz, (addr - DMA0SZ));
    } else if ((addr >= DMA1CTL) && ((addr + size) <= (DMA1CTL + 2))) {
        retvalue = reg_dma1ctl_read(s, &s->dma1ctl, (addr - DMA1CTL));
    } else if ((addr >= DMA1SA) && ((addr + size) <= (DMA1SA + 4))) {
        retvalue = reg_dma1sa_read(s, &s->dma1sa, (addr - DMA1SA));
    } else if ((addr >= DMA1DA) && ((addr + size) <= (DMA1DA + 4))) {
        retvalue = reg_dma1da_read(s, &s->dma1da, (addr - DMA1DA));
    } else if ((addr >= DMA1SZ) && ((addr + size) <= (DMA1SZ + 2))) {
        retvalue = reg_dma1sz_read(s, &s->dma1sz, (addr - DMA1SZ));
    } else if ((addr >= DMA2CTL) && ((addr + size) <= (DMA2CTL + 2))) {
        retvalue = reg_dma2ctl_read(s, &s->dma2ctl, (addr - DMA2CTL));
    } else if ((addr >= DMA2SA) && ((addr + size) <= (DMA2SA + 4))) {
        retvalue = reg_dma2sa_read(s, &s->dma2sa, (addr - DMA2SA));
    } else if ((addr >= DMA2DA) && ((addr + size) <= (DMA2DA + 4))) {
        retvalue = reg_dma2da_read(s, &s->dma2da, (addr - DMA2DA));
    } else if ((addr >= DMA2SZ) && ((addr + size) <= (DMA2SZ + 2))) {
        retvalue = reg_dma2sz_read(s, &s->dma2sz, (addr - DMA2SZ));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_DMA_State *s = MSP430FR5739_DMA(opaque);

    if ((addr >= DMACTL0) && ((addr + size) <= (DMACTL0 + 2))) {
        reg_dmactl0_write(s, &s->dmactl0, (addr - DMACTL0), value, size);
    } else if ((addr >= DMACTL1) && ((addr + size) <= (DMACTL1 + 2))) {
        reg_dmactl1_write(s, &s->dmactl1, (addr - DMACTL1), value, size);
    } else if ((addr >= DMACTL2) && ((addr + size) <= (DMACTL2 + 2))) {
        reg_dmactl2_write(s, &s->dmactl2, (addr - DMACTL2), value, size);
    } else if ((addr >= DMACTL3) && ((addr + size) <= (DMACTL3 + 2))) {
        reg_dmactl3_write(s, &s->dmactl3, (addr - DMACTL3), value, size);
    } else if ((addr >= DMACTL4) && ((addr + size) <= (DMACTL4 + 2))) {
        reg_dmactl4_write(s, &s->dmactl4, (addr - DMACTL4), value, size);
    } else if ((addr >= DMAIV) && ((addr + size) <= (DMAIV + 2))) {
        reg_dmaiv_write(s, &s->dmaiv, (addr - DMAIV), value, size);
    } else if ((addr >= DMA0CTL) && ((addr + size) <= (DMA0CTL + 2))) {
        reg_dma0ctl_write(s, &s->dma0ctl, (addr - DMA0CTL), value, size);
    } else if ((addr >= DMA0SA) && ((addr + size) <= (DMA0SA + 4))) {
        reg_dma0sa_write(s, &s->dma0sa, (addr - DMA0SA), value, size);
    } else if ((addr >= DMA0DA) && ((addr + size) <= (DMA0DA + 4))) {
        reg_dma0da_write(s, &s->dma0da, (addr - DMA0DA), value, size);
    } else if ((addr >= DMA0SZ) && ((addr + size) <= (DMA0SZ + 2))) {
        reg_dma0sz_write(s, &s->dma0sz, (addr - DMA0SZ), value, size);
    } else if ((addr >= DMA1CTL) && ((addr + size) <= (DMA1CTL + 2))) {
        reg_dma1ctl_write(s, &s->dma1ctl, (addr - DMA1CTL), value, size);
    } else if ((addr >= DMA1SA) && ((addr + size) <= (DMA1SA + 4))) {
        reg_dma1sa_write(s, &s->dma1sa, (addr - DMA1SA), value, size);
    } else if ((addr >= DMA1DA) && ((addr + size) <= (DMA1DA + 4))) {
        reg_dma1da_write(s, &s->dma1da, (addr - DMA1DA), value, size);
    } else if ((addr >= DMA1SZ) && ((addr + size) <= (DMA1SZ + 2))) {
        reg_dma1sz_write(s, &s->dma1sz, (addr - DMA1SZ), value, size);
    } else if ((addr >= DMA2CTL) && ((addr + size) <= (DMA2CTL + 2))) {
        reg_dma2ctl_write(s, &s->dma2ctl, (addr - DMA2CTL), value, size);
    } else if ((addr >= DMA2SA) && ((addr + size) <= (DMA2SA + 4))) {
        reg_dma2sa_write(s, &s->dma2sa, (addr - DMA2SA), value, size);
    } else if ((addr >= DMA2DA) && ((addr + size) <= (DMA2DA + 4))) {
        reg_dma2da_write(s, &s->dma2da, (addr - DMA2DA), value, size);
    } else if ((addr >= DMA2SZ) && ((addr + size) <= (DMA2SZ + 2))) {
        reg_dma2sz_write(s, &s->dma2sz, (addr - DMA2SZ), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_DMA_State *device = MSP430FR5739_DMA(dev);

   device->dmactl0 = 0x0;
   device->dmactl1 = 0x0;
   device->dmactl2 = 0;
   device->dmactl3 = 0;
   device->dmactl4 = 0x0;
   device->dmaiv = 0;
   device->dma0ctl = 0x0;
   device->dma0sa = 0;
   device->dma0da = 0;
   device->dma0sz = 0;
   device->dma1ctl = 0x0;
   device->dma1sa = 0;
   device->dma1da = 0;
   device->dma1sz = 0;
   device->dma2ctl = 0x0;
   device->dma2sa = 0;
   device->dma2da = 0;
   device->dma2sz = 0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_DMA_State *s = MSP430FR5739_DMA(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_DMA, SIZE);
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
    .name          = TYPE_MSP430FR5739_DMA,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_DMA_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_dma_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_dma_register_types)
