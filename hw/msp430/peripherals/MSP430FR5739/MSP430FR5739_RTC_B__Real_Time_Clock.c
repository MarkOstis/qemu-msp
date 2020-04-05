// Peripheral name: RTC_B__Real_Time_Clock

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"


#define TYPE_MSP430FR5739_RTC_B__REAL_TIME_CLOCK "msp430fr5739_rtc_b__real_time_clock"
#define SIZE 32
#define MSP430FR5739_RTC_B__REAL_TIME_CLOCK(obj) OBJECT_CHECK(MSP430_RTC_B__Real_Time_Clock_State, (obj), TYPE_MSP430FR5739_RTC_B__REAL_TIME_CLOCK)
// REGISTERS:
#define PERIPHERAL_OFFSET 0x04A0

#define RTCCTL01 0
#define RTCCTL23 2
#define RTCPS0CTL 8
#define RTCPS1CTL 10
#define RTCPS 12
#define RTCIV 14
#define RTCTIM0 16
#define RTCTIM1 18
#define RTCDATE 20
#define RTCYEAR 22
#define RTCAMINHR 24
#define RTCADOWDAY 26
#define BIN2BCD 28
#define BCD2BIN 30

// REGISTERS RESET VALUE
#define REG_RTCCTL01_RESET_VALUE 0x0
#define REG_RTCCTL23_RESET_VALUE 0x0
#define REG_RTCPS0CTL_RESET_VALUE 0x0
#define REG_RTCPS1CTL_RESET_VALUE 0x0
#define REG_RTCPS_RESET_VALUE 0
#define REG_RTCIV_RESET_VALUE 0
#define REG_RTCTIM0_RESET_VALUE 0
#define REG_RTCTIM1_RESET_VALUE 0
#define REG_RTCDATE_RESET_VALUE 0
#define REG_RTCYEAR_RESET_VALUE 0
#define REG_RTCAMINHR_RESET_VALUE 0
#define REG_RTCADOWDAY_RESET_VALUE 0
#define REG_BIN2BCD_RESET_VALUE 0
#define REG_BCD2BIN_RESET_VALUE 0

// REGISTERS BITS MASKS
#define REG_RTCCTL01_BITS_MASK 0xd3ff
#define REG_RTCCTL23_BITS_MASK 0x3bf
#define REG_RTCPS0CTL_BITS_MASK 0x1f
#define REG_RTCPS1CTL_BITS_MASK 0x1f
#define REG_RTCPS_BITS_MASK 0xffff
#define REG_RTCIV_BITS_MASK 0xffff
#define REG_RTCTIM0_BITS_MASK 0xffff
#define REG_RTCTIM1_BITS_MASK 0xffff
#define REG_RTCDATE_BITS_MASK 0xffff
#define REG_RTCYEAR_BITS_MASK 0xffff
#define REG_RTCAMINHR_BITS_MASK 0xffff
#define REG_RTCADOWDAY_BITS_MASK 0xffff
#define REG_BIN2BCD_BITS_MASK 0xffff
#define REG_BCD2BIN_BITS_MASK 0xffff

// FIELDS FOR REGISTER : RTCCTL01
#define REG_RTCCTL01_RTCRDYIFG_BITS_MASK (1 << 0)
#define REG_RTCCTL01_RTCAIFG_BITS_MASK (1 << 1)
#define REG_RTCCTL01_RTCTEVIFG_BITS_MASK (1 << 2)
#define REG_RTCCTL01_RTCOFIFG_BITS_MASK (1 << 3)
#define REG_RTCCTL01_RTCRDYIE_BITS_MASK (1 << 4)
#define REG_RTCCTL01_RTCAIE_BITS_MASK (1 << 5)
#define REG_RTCCTL01_RTCTEVIE_BITS_MASK (1 << 6)
#define REG_RTCCTL01_RTCOFIE_BITS_MASK (1 << 7)
#define REG_RTCCTL01_RTCTEV_BITS_MASK (3 << 8)
#define REG_RTCCTL01_RTCRDY_BITS_MASK (1 << 12)
#define REG_RTCCTL01_RTCHOLD_BITS_MASK (1 << 14)
#define REG_RTCCTL01_RTCBCD_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : RTCCTL23
#define REG_RTCCTL23_RTCCAL0_BITS_MASK (1 << 0)
#define REG_RTCCTL23_RTCCAL1_BITS_MASK (1 << 1)
#define REG_RTCCTL23_RTCCAL2_BITS_MASK (1 << 2)
#define REG_RTCCTL23_RTCCAL3_BITS_MASK (1 << 3)
#define REG_RTCCTL23_RTCCAL4_BITS_MASK (1 << 4)
#define REG_RTCCTL23_RTCCAL5_BITS_MASK (1 << 5)
#define REG_RTCCTL23_RTCCALS_BITS_MASK (1 << 7)
#define REG_RTCCTL23_RTCCALF_BITS_MASK (3 << 8)

// FIELDS FOR REGISTER : RTCPS0CTL
#define REG_RTCPS0CTL_RT0PSIFG_BITS_MASK (1 << 0)
#define REG_RTCPS0CTL_RT0PSIE_BITS_MASK (1 << 1)
#define REG_RTCPS0CTL_RT0IP_BITS_MASK (7 << 2)

// FIELDS FOR REGISTER : RTCPS1CTL
#define REG_RTCPS1CTL_RT1PSIFG_BITS_MASK (1 << 0)
#define REG_RTCPS1CTL_RT1PSIE_BITS_MASK (1 << 1)
#define REG_RTCPS1CTL_RT1IP_BITS_MASK (7 << 2)

// FIELDS FOR REGISTER : RTCPS

// FIELDS FOR REGISTER : RTCIV

// FIELDS FOR REGISTER : RTCTIM0

// FIELDS FOR REGISTER : RTCTIM1

// FIELDS FOR REGISTER : RTCDATE

// FIELDS FOR REGISTER : RTCYEAR

// FIELDS FOR REGISTER : RTCAMINHR

// FIELDS FOR REGISTER : RTCADOWDAY

// FIELDS FOR REGISTER : BIN2BCD

// FIELDS FOR REGISTER : BCD2BIN

// FIELDS FOR REGISTER : RTCSEC
#define REG_RTCSEC_SECONDS0_BITS_MASK (1 << 0)
#define REG_RTCSEC_SECONDS1_BITS_MASK (1 << 1)
#define REG_RTCSEC_SECONDS2_BITS_MASK (1 << 2)
#define REG_RTCSEC_SECONDS3_BITS_MASK (1 << 3)
#define REG_RTCSEC_SECONDS4_BITS_MASK (1 << 4)
#define REG_RTCSEC_SECONDS5_BITS_MASK (1 << 5)
#define REG_RTCSEC_SECONDS6_BITS_MASK (1 << 6)

// FIELDS FOR REGISTER : RTCMIN
#define REG_RTCMIN_MINUTES0_BITS_MASK (1 << 8)
#define REG_RTCMIN_MINUTES1_BITS_MASK (1 << 9)
#define REG_RTCMIN_MINUTES2_BITS_MASK (1 << 10)
#define REG_RTCMIN_MINUTES3_BITS_MASK (1 << 11)
#define REG_RTCMIN_MINUTES4_BITS_MASK (1 << 12)
#define REG_RTCMIN_MINUTES5_BITS_MASK (1 << 13)
#define REG_RTCMIN_MINUTES6_BITS_MASK (1 << 14)

// FIELDS FOR REGISTER : RTCHOUR
#define REG_RTCHOUR_HOUR0_BITS_MASK (1 << 0)
#define REG_RTCHOUR_HOUR1_BITS_MASK (1 << 1)
#define REG_RTCHOUR_HOUR2_BITS_MASK (1 << 2)
#define REG_RTCHOUR_HOUR3_BITS_MASK (1 << 3)
#define REG_RTCHOUR_HOUR4_BITS_MASK (1 << 4)
#define REG_RTCHOUR_HOUR5_BITS_MASK (1 << 5)
#define REG_RTCHOUR_HOUR6_BITS_MASK (1 << 6)

// FIELDS FOR REGISTER : RTCDOW
#define REG_RTCDOW_DOW0_BITS_MASK (1 << 8)
#define REG_RTCDOW_DOW1_BITS_MASK (1 << 9)
#define REG_RTCDOW_DOW2_BITS_MASK (1 << 10)
#define REG_RTCDOW_DOW3_BITS_MASK (1 << 11)
#define REG_RTCDOW_DOW4_BITS_MASK (1 << 12)
#define REG_RTCDOW_DOW5_BITS_MASK (1 << 13)
#define REG_RTCDOW_DOW6_BITS_MASK (1 << 14)

// FIELDS FOR REGISTER : RTCDAY
#define REG_RTCDAY_DAY0_BITS_MASK (1 << 0)
#define REG_RTCDAY_DAY1_BITS_MASK (1 << 1)
#define REG_RTCDAY_DAY2_BITS_MASK (1 << 2)
#define REG_RTCDAY_DAY3_BITS_MASK (1 << 3)
#define REG_RTCDAY_DAY4_BITS_MASK (1 << 4)
#define REG_RTCDAY_DAY5_BITS_MASK (1 << 5)
#define REG_RTCDAY_DAY6_BITS_MASK (1 << 6)

// FIELDS FOR REGISTER : RTCMON
#define REG_RTCMON_MONTH0_BITS_MASK (1 << 8)
#define REG_RTCMON_MONTH1_BITS_MASK (1 << 9)
#define REG_RTCMON_MONTH2_BITS_MASK (1 << 10)
#define REG_RTCMON_MONTH3_BITS_MASK (1 << 11)
#define REG_RTCMON_MONTH4_BITS_MASK (1 << 12)
#define REG_RTCMON_MONTH5_BITS_MASK (1 << 13)
#define REG_RTCMON_MONTH6_BITS_MASK (1 << 14)

// FIELDS FOR REGISTER : RTCAMIN
#define REG_RTCAMIN_MINUTES0_BITS_MASK (1 << 0)
#define REG_RTCAMIN_MINUTES1_BITS_MASK (1 << 1)
#define REG_RTCAMIN_MINUTES2_BITS_MASK (1 << 2)
#define REG_RTCAMIN_MINUTES3_BITS_MASK (1 << 3)
#define REG_RTCAMIN_MINUTES4_BITS_MASK (1 << 4)
#define REG_RTCAMIN_MINUTES5_BITS_MASK (1 << 5)
#define REG_RTCAMIN_MINUTES6_BITS_MASK (1 << 6)
#define REG_RTCAMIN_RTCAE_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : RTCAHOUR
#define REG_RTCAHOUR_HOUR0_BITS_MASK (1 << 8)
#define REG_RTCAHOUR_HOUR1_BITS_MASK (1 << 9)
#define REG_RTCAHOUR_HOUR2_BITS_MASK (1 << 10)
#define REG_RTCAHOUR_HOUR3_BITS_MASK (1 << 11)
#define REG_RTCAHOUR_HOUR4_BITS_MASK (1 << 12)
#define REG_RTCAHOUR_HOUR5_BITS_MASK (1 << 13)
#define REG_RTCAHOUR_HOUR6_BITS_MASK (1 << 14)
#define REG_RTCAHOUR_RTCAE_BITS_MASK (1 << 15)

// FIELDS FOR REGISTER : RTCADOW
#define REG_RTCADOW_DOW0_BITS_MASK (1 << 0)
#define REG_RTCADOW_DOW1_BITS_MASK (1 << 1)
#define REG_RTCADOW_DOW2_BITS_MASK (1 << 2)
#define REG_RTCADOW_DOW3_BITS_MASK (1 << 3)
#define REG_RTCADOW_DOW4_BITS_MASK (1 << 4)
#define REG_RTCADOW_DOW5_BITS_MASK (1 << 5)
#define REG_RTCADOW_DOW6_BITS_MASK (1 << 6)
#define REG_RTCADOW_RTCAE_BITS_MASK (1 << 7)

// FIELDS FOR REGISTER : RTCADAY
#define REG_RTCADAY_DAY0_BITS_MASK (1 << 8)
#define REG_RTCADAY_DAY1_BITS_MASK (1 << 9)
#define REG_RTCADAY_DAY2_BITS_MASK (1 << 10)
#define REG_RTCADAY_DAY3_BITS_MASK (1 << 11)
#define REG_RTCADAY_DAY4_BITS_MASK (1 << 12)
#define REG_RTCADAY_DAY5_BITS_MASK (1 << 13)
#define REG_RTCADAY_DAY6_BITS_MASK (1 << 14)
#define REG_RTCADAY_RTCAE_BITS_MASK (1 << 15)




 // Type definition
typedef struct {
   SysBusDevice parent_obj;

   MemoryRegion region;

   uint32_t rtcctl01;
   uint32_t rtcctl23;
   uint32_t rtcps0ctl;
   uint32_t rtcps1ctl;
   uint32_t rtcps;
   uint32_t rtciv;
   uint32_t rtctim0;
   uint32_t rtctim1;
   uint32_t rtcdate;
   uint32_t rtcyear;
   uint32_t rtcaminhr;
   uint32_t rtcadowday;
   uint32_t bin2bcd;
   uint32_t bcd2bin;
} MSP430_RTC_B__Real_Time_Clock_State;




 // Local functions definitions
// REG: RTCCTL01
static uint64_t reg_rtcctl01_read(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_RTCCTL01_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_rtcctl01_write(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_RTCCTL01_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_RTCCTL01_RTCRDYIFG_BITS_MASK) != ((*reg) & REG_RTCCTL01_RTCRDYIFG_BITS_MASK)) {
        }

        if ((new_value & REG_RTCCTL01_RTCAIFG_BITS_MASK) != ((*reg) & REG_RTCCTL01_RTCAIFG_BITS_MASK)) {
        }

        if ((new_value & REG_RTCCTL01_RTCTEVIFG_BITS_MASK) != ((*reg) & REG_RTCCTL01_RTCTEVIFG_BITS_MASK)) {
        }

        if ((new_value & REG_RTCCTL01_RTCOFIFG_BITS_MASK) != ((*reg) & REG_RTCCTL01_RTCOFIFG_BITS_MASK)) {
        }

        if ((new_value & REG_RTCCTL01_RTCRDYIE_BITS_MASK) != ((*reg) & REG_RTCCTL01_RTCRDYIE_BITS_MASK)) {
        }

        if ((new_value & REG_RTCCTL01_RTCAIE_BITS_MASK) != ((*reg) & REG_RTCCTL01_RTCAIE_BITS_MASK)) {
        }

        if ((new_value & REG_RTCCTL01_RTCTEVIE_BITS_MASK) != ((*reg) & REG_RTCCTL01_RTCTEVIE_BITS_MASK)) {
        }

        if ((new_value & REG_RTCCTL01_RTCOFIE_BITS_MASK) != ((*reg) & REG_RTCCTL01_RTCOFIE_BITS_MASK)) {
        }

        if ((new_value & REG_RTCCTL01_RTCTEV_BITS_MASK) != ((*reg) & REG_RTCCTL01_RTCTEV_BITS_MASK)) {
        }

        if ((new_value & REG_RTCCTL01_RTCRDY_BITS_MASK) != ((*reg) & REG_RTCCTL01_RTCRDY_BITS_MASK)) {
        }

        if ((new_value & REG_RTCCTL01_RTCHOLD_BITS_MASK) != ((*reg) & REG_RTCCTL01_RTCHOLD_BITS_MASK)) {
        }

        if ((new_value & REG_RTCCTL01_RTCBCD_BITS_MASK) != ((*reg) & REG_RTCCTL01_RTCBCD_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: RTCCTL23
static uint64_t reg_rtcctl23_read(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_RTCCTL23_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_rtcctl23_write(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_RTCCTL23_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_RTCCTL23_RTCCAL0_BITS_MASK) != ((*reg) & REG_RTCCTL23_RTCCAL0_BITS_MASK)) {
        }

        if ((new_value & REG_RTCCTL23_RTCCAL1_BITS_MASK) != ((*reg) & REG_RTCCTL23_RTCCAL1_BITS_MASK)) {
        }

        if ((new_value & REG_RTCCTL23_RTCCAL2_BITS_MASK) != ((*reg) & REG_RTCCTL23_RTCCAL2_BITS_MASK)) {
        }

        if ((new_value & REG_RTCCTL23_RTCCAL3_BITS_MASK) != ((*reg) & REG_RTCCTL23_RTCCAL3_BITS_MASK)) {
        }

        if ((new_value & REG_RTCCTL23_RTCCAL4_BITS_MASK) != ((*reg) & REG_RTCCTL23_RTCCAL4_BITS_MASK)) {
        }

        if ((new_value & REG_RTCCTL23_RTCCAL5_BITS_MASK) != ((*reg) & REG_RTCCTL23_RTCCAL5_BITS_MASK)) {
        }

        if ((new_value & REG_RTCCTL23_RTCCALS_BITS_MASK) != ((*reg) & REG_RTCCTL23_RTCCALS_BITS_MASK)) {
        }

        if ((new_value & REG_RTCCTL23_RTCCALF_BITS_MASK) != ((*reg) & REG_RTCCTL23_RTCCALF_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: RTCPS0CTL
static uint64_t reg_rtcps0ctl_read(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_RTCPS0CTL_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_rtcps0ctl_write(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_RTCPS0CTL_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_RTCPS0CTL_RT0PSIFG_BITS_MASK) != ((*reg) & REG_RTCPS0CTL_RT0PSIFG_BITS_MASK)) {
        }

        if ((new_value & REG_RTCPS0CTL_RT0PSIE_BITS_MASK) != ((*reg) & REG_RTCPS0CTL_RT0PSIE_BITS_MASK)) {
        }

        if ((new_value & REG_RTCPS0CTL_RT0IP_BITS_MASK) != ((*reg) & REG_RTCPS0CTL_RT0IP_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: RTCPS1CTL
static uint64_t reg_rtcps1ctl_read(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_RTCPS1CTL_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_rtcps1ctl_write(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_RTCPS1CTL_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_RTCPS1CTL_RT1PSIFG_BITS_MASK) != ((*reg) & REG_RTCPS1CTL_RT1PSIFG_BITS_MASK)) {
        }

        if ((new_value & REG_RTCPS1CTL_RT1PSIE_BITS_MASK) != ((*reg) & REG_RTCPS1CTL_RT1PSIE_BITS_MASK)) {
        }

        if ((new_value & REG_RTCPS1CTL_RT1IP_BITS_MASK) != ((*reg) & REG_RTCPS1CTL_RT1IP_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: RTCPS
static uint64_t reg_rtcps_read(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_RTCPS_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_rtcps_write(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_RTCPS_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: RTCIV
static uint64_t reg_rtciv_read(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_RTCIV_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_rtciv_write(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_RTCIV_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: RTCTIM0
static uint64_t reg_rtctim0_read(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_RTCTIM0_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_rtctim0_write(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_RTCTIM0_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_RTCSEC_SECONDS0_BITS_MASK) != ((*reg) & REG_RTCSEC_SECONDS0_BITS_MASK)) {
        }

        if ((new_value & REG_RTCSEC_SECONDS1_BITS_MASK) != ((*reg) & REG_RTCSEC_SECONDS1_BITS_MASK)) {
        }

        if ((new_value & REG_RTCSEC_SECONDS2_BITS_MASK) != ((*reg) & REG_RTCSEC_SECONDS2_BITS_MASK)) {
        }

        if ((new_value & REG_RTCSEC_SECONDS3_BITS_MASK) != ((*reg) & REG_RTCSEC_SECONDS3_BITS_MASK)) {
        }

        if ((new_value & REG_RTCSEC_SECONDS4_BITS_MASK) != ((*reg) & REG_RTCSEC_SECONDS4_BITS_MASK)) {
        }

        if ((new_value & REG_RTCSEC_SECONDS5_BITS_MASK) != ((*reg) & REG_RTCSEC_SECONDS5_BITS_MASK)) {
        }

        if ((new_value & REG_RTCSEC_SECONDS6_BITS_MASK) != ((*reg) & REG_RTCSEC_SECONDS6_BITS_MASK)) {
        }

        if ((new_value & REG_RTCMIN_MINUTES0_BITS_MASK) != ((*reg) & REG_RTCMIN_MINUTES0_BITS_MASK)) {
        }

        if ((new_value & REG_RTCMIN_MINUTES1_BITS_MASK) != ((*reg) & REG_RTCMIN_MINUTES1_BITS_MASK)) {
        }

        if ((new_value & REG_RTCMIN_MINUTES2_BITS_MASK) != ((*reg) & REG_RTCMIN_MINUTES2_BITS_MASK)) {
        }

        if ((new_value & REG_RTCMIN_MINUTES3_BITS_MASK) != ((*reg) & REG_RTCMIN_MINUTES3_BITS_MASK)) {
        }

        if ((new_value & REG_RTCMIN_MINUTES4_BITS_MASK) != ((*reg) & REG_RTCMIN_MINUTES4_BITS_MASK)) {
        }

        if ((new_value & REG_RTCMIN_MINUTES5_BITS_MASK) != ((*reg) & REG_RTCMIN_MINUTES5_BITS_MASK)) {
        }

        if ((new_value & REG_RTCMIN_MINUTES6_BITS_MASK) != ((*reg) & REG_RTCMIN_MINUTES6_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: RTCTIM1
static uint64_t reg_rtctim1_read(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_RTCTIM1_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_rtctim1_write(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_RTCTIM1_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_RTCHOUR_HOUR0_BITS_MASK) != ((*reg) & REG_RTCHOUR_HOUR0_BITS_MASK)) {
        }

        if ((new_value & REG_RTCHOUR_HOUR1_BITS_MASK) != ((*reg) & REG_RTCHOUR_HOUR1_BITS_MASK)) {
        }

        if ((new_value & REG_RTCHOUR_HOUR2_BITS_MASK) != ((*reg) & REG_RTCHOUR_HOUR2_BITS_MASK)) {
        }

        if ((new_value & REG_RTCHOUR_HOUR3_BITS_MASK) != ((*reg) & REG_RTCHOUR_HOUR3_BITS_MASK)) {
        }

        if ((new_value & REG_RTCHOUR_HOUR4_BITS_MASK) != ((*reg) & REG_RTCHOUR_HOUR4_BITS_MASK)) {
        }

        if ((new_value & REG_RTCHOUR_HOUR5_BITS_MASK) != ((*reg) & REG_RTCHOUR_HOUR5_BITS_MASK)) {
        }

        if ((new_value & REG_RTCHOUR_HOUR6_BITS_MASK) != ((*reg) & REG_RTCHOUR_HOUR6_BITS_MASK)) {
        }

        if ((new_value & REG_RTCDOW_DOW0_BITS_MASK) != ((*reg) & REG_RTCDOW_DOW0_BITS_MASK)) {
        }

        if ((new_value & REG_RTCDOW_DOW1_BITS_MASK) != ((*reg) & REG_RTCDOW_DOW1_BITS_MASK)) {
        }

        if ((new_value & REG_RTCDOW_DOW2_BITS_MASK) != ((*reg) & REG_RTCDOW_DOW2_BITS_MASK)) {
        }

        if ((new_value & REG_RTCDOW_DOW3_BITS_MASK) != ((*reg) & REG_RTCDOW_DOW3_BITS_MASK)) {
        }

        if ((new_value & REG_RTCDOW_DOW4_BITS_MASK) != ((*reg) & REG_RTCDOW_DOW4_BITS_MASK)) {
        }

        if ((new_value & REG_RTCDOW_DOW5_BITS_MASK) != ((*reg) & REG_RTCDOW_DOW5_BITS_MASK)) {
        }

        if ((new_value & REG_RTCDOW_DOW6_BITS_MASK) != ((*reg) & REG_RTCDOW_DOW6_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: RTCDATE
static uint64_t reg_rtcdate_read(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_RTCDATE_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_rtcdate_write(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_RTCDATE_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_RTCDAY_DAY0_BITS_MASK) != ((*reg) & REG_RTCDAY_DAY0_BITS_MASK)) {
        }

        if ((new_value & REG_RTCDAY_DAY1_BITS_MASK) != ((*reg) & REG_RTCDAY_DAY1_BITS_MASK)) {
        }

        if ((new_value & REG_RTCDAY_DAY2_BITS_MASK) != ((*reg) & REG_RTCDAY_DAY2_BITS_MASK)) {
        }

        if ((new_value & REG_RTCDAY_DAY3_BITS_MASK) != ((*reg) & REG_RTCDAY_DAY3_BITS_MASK)) {
        }

        if ((new_value & REG_RTCDAY_DAY4_BITS_MASK) != ((*reg) & REG_RTCDAY_DAY4_BITS_MASK)) {
        }

        if ((new_value & REG_RTCDAY_DAY5_BITS_MASK) != ((*reg) & REG_RTCDAY_DAY5_BITS_MASK)) {
        }

        if ((new_value & REG_RTCDAY_DAY6_BITS_MASK) != ((*reg) & REG_RTCDAY_DAY6_BITS_MASK)) {
        }

        if ((new_value & REG_RTCMON_MONTH0_BITS_MASK) != ((*reg) & REG_RTCMON_MONTH0_BITS_MASK)) {
        }

        if ((new_value & REG_RTCMON_MONTH1_BITS_MASK) != ((*reg) & REG_RTCMON_MONTH1_BITS_MASK)) {
        }

        if ((new_value & REG_RTCMON_MONTH2_BITS_MASK) != ((*reg) & REG_RTCMON_MONTH2_BITS_MASK)) {
        }

        if ((new_value & REG_RTCMON_MONTH3_BITS_MASK) != ((*reg) & REG_RTCMON_MONTH3_BITS_MASK)) {
        }

        if ((new_value & REG_RTCMON_MONTH4_BITS_MASK) != ((*reg) & REG_RTCMON_MONTH4_BITS_MASK)) {
        }

        if ((new_value & REG_RTCMON_MONTH5_BITS_MASK) != ((*reg) & REG_RTCMON_MONTH5_BITS_MASK)) {
        }

        if ((new_value & REG_RTCMON_MONTH6_BITS_MASK) != ((*reg) & REG_RTCMON_MONTH6_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: RTCYEAR
static uint64_t reg_rtcyear_read(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_RTCYEAR_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_rtcyear_write(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_RTCYEAR_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: RTCAMINHR
static uint64_t reg_rtcaminhr_read(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_RTCAMINHR_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_rtcaminhr_write(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_RTCAMINHR_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_RTCAMIN_MINUTES0_BITS_MASK) != ((*reg) & REG_RTCAMIN_MINUTES0_BITS_MASK)) {
        }

        if ((new_value & REG_RTCAMIN_MINUTES1_BITS_MASK) != ((*reg) & REG_RTCAMIN_MINUTES1_BITS_MASK)) {
        }

        if ((new_value & REG_RTCAMIN_MINUTES2_BITS_MASK) != ((*reg) & REG_RTCAMIN_MINUTES2_BITS_MASK)) {
        }

        if ((new_value & REG_RTCAMIN_MINUTES3_BITS_MASK) != ((*reg) & REG_RTCAMIN_MINUTES3_BITS_MASK)) {
        }

        if ((new_value & REG_RTCAMIN_MINUTES4_BITS_MASK) != ((*reg) & REG_RTCAMIN_MINUTES4_BITS_MASK)) {
        }

        if ((new_value & REG_RTCAMIN_MINUTES5_BITS_MASK) != ((*reg) & REG_RTCAMIN_MINUTES5_BITS_MASK)) {
        }

        if ((new_value & REG_RTCAMIN_MINUTES6_BITS_MASK) != ((*reg) & REG_RTCAMIN_MINUTES6_BITS_MASK)) {
        }

        if ((new_value & REG_RTCAMIN_RTCAE_BITS_MASK) != ((*reg) & REG_RTCAMIN_RTCAE_BITS_MASK)) {
        }

        if ((new_value & REG_RTCAHOUR_HOUR0_BITS_MASK) != ((*reg) & REG_RTCAHOUR_HOUR0_BITS_MASK)) {
        }

        if ((new_value & REG_RTCAHOUR_HOUR1_BITS_MASK) != ((*reg) & REG_RTCAHOUR_HOUR1_BITS_MASK)) {
        }

        if ((new_value & REG_RTCAHOUR_HOUR2_BITS_MASK) != ((*reg) & REG_RTCAHOUR_HOUR2_BITS_MASK)) {
        }

        if ((new_value & REG_RTCAHOUR_HOUR3_BITS_MASK) != ((*reg) & REG_RTCAHOUR_HOUR3_BITS_MASK)) {
        }

        if ((new_value & REG_RTCAHOUR_HOUR4_BITS_MASK) != ((*reg) & REG_RTCAHOUR_HOUR4_BITS_MASK)) {
        }

        if ((new_value & REG_RTCAHOUR_HOUR5_BITS_MASK) != ((*reg) & REG_RTCAHOUR_HOUR5_BITS_MASK)) {
        }

        if ((new_value & REG_RTCAHOUR_HOUR6_BITS_MASK) != ((*reg) & REG_RTCAHOUR_HOUR6_BITS_MASK)) {
        }

        if ((new_value & REG_RTCAHOUR_RTCAE_BITS_MASK) != ((*reg) & REG_RTCAHOUR_RTCAE_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: RTCADOWDAY
static uint64_t reg_rtcadowday_read(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_RTCADOWDAY_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_rtcadowday_write(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_RTCADOWDAY_BITS_MASK;
    if ((*reg) != new_value) {
        if ((new_value & REG_RTCADOW_DOW0_BITS_MASK) != ((*reg) & REG_RTCADOW_DOW0_BITS_MASK)) {
        }

        if ((new_value & REG_RTCADOW_DOW1_BITS_MASK) != ((*reg) & REG_RTCADOW_DOW1_BITS_MASK)) {
        }

        if ((new_value & REG_RTCADOW_DOW2_BITS_MASK) != ((*reg) & REG_RTCADOW_DOW2_BITS_MASK)) {
        }

        if ((new_value & REG_RTCADOW_DOW3_BITS_MASK) != ((*reg) & REG_RTCADOW_DOW3_BITS_MASK)) {
        }

        if ((new_value & REG_RTCADOW_DOW4_BITS_MASK) != ((*reg) & REG_RTCADOW_DOW4_BITS_MASK)) {
        }

        if ((new_value & REG_RTCADOW_DOW5_BITS_MASK) != ((*reg) & REG_RTCADOW_DOW5_BITS_MASK)) {
        }

        if ((new_value & REG_RTCADOW_DOW6_BITS_MASK) != ((*reg) & REG_RTCADOW_DOW6_BITS_MASK)) {
        }

        if ((new_value & REG_RTCADOW_RTCAE_BITS_MASK) != ((*reg) & REG_RTCADOW_RTCAE_BITS_MASK)) {
        }

        if ((new_value & REG_RTCADAY_DAY0_BITS_MASK) != ((*reg) & REG_RTCADAY_DAY0_BITS_MASK)) {
        }

        if ((new_value & REG_RTCADAY_DAY1_BITS_MASK) != ((*reg) & REG_RTCADAY_DAY1_BITS_MASK)) {
        }

        if ((new_value & REG_RTCADAY_DAY2_BITS_MASK) != ((*reg) & REG_RTCADAY_DAY2_BITS_MASK)) {
        }

        if ((new_value & REG_RTCADAY_DAY3_BITS_MASK) != ((*reg) & REG_RTCADAY_DAY3_BITS_MASK)) {
        }

        if ((new_value & REG_RTCADAY_DAY4_BITS_MASK) != ((*reg) & REG_RTCADAY_DAY4_BITS_MASK)) {
        }

        if ((new_value & REG_RTCADAY_DAY5_BITS_MASK) != ((*reg) & REG_RTCADAY_DAY5_BITS_MASK)) {
        }

        if ((new_value & REG_RTCADAY_DAY6_BITS_MASK) != ((*reg) & REG_RTCADAY_DAY6_BITS_MASK)) {
        }

        if ((new_value & REG_RTCADAY_RTCAE_BITS_MASK) != ((*reg) & REG_RTCADAY_RTCAE_BITS_MASK)) {
        }

        (*reg) = new_value;
    }
}

// REG: BIN2BCD
static uint64_t reg_bin2bcd_read(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_BIN2BCD_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_bin2bcd_write(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_BIN2BCD_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

// REG: BCD2BIN
static uint64_t reg_bcd2bin_read(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset) {
    uint32_t value = ((*reg) & REG_BCD2BIN_BITS_MASK) >> (offset * 8);
    return value;
}

static void reg_bcd2bin_write(MSP430_RTC_B__Real_Time_Clock_State *dev, uint32_t *reg, uint32_t offset, uint64_t val, unsigned int size) {
    uint32_t new_value = (val << (offset * 8))  & REG_BCD2BIN_BITS_MASK;
    if ((*reg) != new_value) {
        (*reg) = new_value;
    }
}

static uint64_t regs_read(void *opaque, hwaddr addr, unsigned int size) {
    MSP430_RTC_B__Real_Time_Clock_State *s = MSP430FR5739_RTC_B__REAL_TIME_CLOCK(opaque);
    uint64_t retvalue = 0;

    if ((addr >= RTCCTL01) && ((addr + size) <= (RTCCTL01 + 2))) {
        retvalue = reg_rtcctl01_read(s, &s->rtcctl01, (addr - RTCCTL01));
    } else if ((addr >= RTCCTL23) && ((addr + size) <= (RTCCTL23 + 2))) {
        retvalue = reg_rtcctl23_read(s, &s->rtcctl23, (addr - RTCCTL23));
    } else if ((addr >= RTCPS0CTL) && ((addr + size) <= (RTCPS0CTL + 2))) {
        retvalue = reg_rtcps0ctl_read(s, &s->rtcps0ctl, (addr - RTCPS0CTL));
    } else if ((addr >= RTCPS1CTL) && ((addr + size) <= (RTCPS1CTL + 2))) {
        retvalue = reg_rtcps1ctl_read(s, &s->rtcps1ctl, (addr - RTCPS1CTL));
    } else if ((addr >= RTCPS) && ((addr + size) <= (RTCPS + 2))) {
        retvalue = reg_rtcps_read(s, &s->rtcps, (addr - RTCPS));
    } else if ((addr >= RTCIV) && ((addr + size) <= (RTCIV + 2))) {
        retvalue = reg_rtciv_read(s, &s->rtciv, (addr - RTCIV));
    } else if ((addr >= RTCTIM0) && ((addr + size) <= (RTCTIM0 + 2))) {
        retvalue = reg_rtctim0_read(s, &s->rtctim0, (addr - RTCTIM0));
    } else if ((addr >= RTCTIM1) && ((addr + size) <= (RTCTIM1 + 2))) {
        retvalue = reg_rtctim1_read(s, &s->rtctim1, (addr - RTCTIM1));
    } else if ((addr >= RTCDATE) && ((addr + size) <= (RTCDATE + 2))) {
        retvalue = reg_rtcdate_read(s, &s->rtcdate, (addr - RTCDATE));
    } else if ((addr >= RTCYEAR) && ((addr + size) <= (RTCYEAR + 2))) {
        retvalue = reg_rtcyear_read(s, &s->rtcyear, (addr - RTCYEAR));
    } else if ((addr >= RTCAMINHR) && ((addr + size) <= (RTCAMINHR + 2))) {
        retvalue = reg_rtcaminhr_read(s, &s->rtcaminhr, (addr - RTCAMINHR));
    } else if ((addr >= RTCADOWDAY) && ((addr + size) <= (RTCADOWDAY + 2))) {
        retvalue = reg_rtcadowday_read(s, &s->rtcadowday, (addr - RTCADOWDAY));
    } else if ((addr >= BIN2BCD) && ((addr + size) <= (BIN2BCD + 2))) {
        retvalue = reg_bin2bcd_read(s, &s->bin2bcd, (addr - BIN2BCD));
    } else if ((addr >= BCD2BIN) && ((addr + size) <= (BCD2BIN + 2))) {
        retvalue = reg_bcd2bin_read(s, &s->bcd2bin, (addr - BCD2BIN));
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }
    return retvalue;
}

static void regs_write(void *opaque, hwaddr addr, uint64_t value, unsigned int size) {
    MSP430_RTC_B__Real_Time_Clock_State *s = MSP430FR5739_RTC_B__REAL_TIME_CLOCK(opaque);

    if ((addr >= RTCCTL01) && ((addr + size) <= (RTCCTL01 + 2))) {
        reg_rtcctl01_write(s, &s->rtcctl01, (addr - RTCCTL01), value, size);
    } else if ((addr >= RTCCTL23) && ((addr + size) <= (RTCCTL23 + 2))) {
        reg_rtcctl23_write(s, &s->rtcctl23, (addr - RTCCTL23), value, size);
    } else if ((addr >= RTCPS0CTL) && ((addr + size) <= (RTCPS0CTL + 2))) {
        reg_rtcps0ctl_write(s, &s->rtcps0ctl, (addr - RTCPS0CTL), value, size);
    } else if ((addr >= RTCPS1CTL) && ((addr + size) <= (RTCPS1CTL + 2))) {
        reg_rtcps1ctl_write(s, &s->rtcps1ctl, (addr - RTCPS1CTL), value, size);
    } else if ((addr >= RTCPS) && ((addr + size) <= (RTCPS + 2))) {
        reg_rtcps_write(s, &s->rtcps, (addr - RTCPS), value, size);
    } else if ((addr >= RTCIV) && ((addr + size) <= (RTCIV + 2))) {
        reg_rtciv_write(s, &s->rtciv, (addr - RTCIV), value, size);
    } else if ((addr >= RTCTIM0) && ((addr + size) <= (RTCTIM0 + 2))) {
        reg_rtctim0_write(s, &s->rtctim0, (addr - RTCTIM0), value, size);
    } else if ((addr >= RTCTIM1) && ((addr + size) <= (RTCTIM1 + 2))) {
        reg_rtctim1_write(s, &s->rtctim1, (addr - RTCTIM1), value, size);
    } else if ((addr >= RTCDATE) && ((addr + size) <= (RTCDATE + 2))) {
        reg_rtcdate_write(s, &s->rtcdate, (addr - RTCDATE), value, size);
    } else if ((addr >= RTCYEAR) && ((addr + size) <= (RTCYEAR + 2))) {
        reg_rtcyear_write(s, &s->rtcyear, (addr - RTCYEAR), value, size);
    } else if ((addr >= RTCAMINHR) && ((addr + size) <= (RTCAMINHR + 2))) {
        reg_rtcaminhr_write(s, &s->rtcaminhr, (addr - RTCAMINHR), value, size);
    } else if ((addr >= RTCADOWDAY) && ((addr + size) <= (RTCADOWDAY + 2))) {
        reg_rtcadowday_write(s, &s->rtcadowday, (addr - RTCADOWDAY), value, size);
    } else if ((addr >= BIN2BCD) && ((addr + size) <= (BIN2BCD + 2))) {
        reg_bin2bcd_write(s, &s->bin2bcd, (addr - BIN2BCD), value, size);
    } else if ((addr >= BCD2BIN) && ((addr + size) <= (BCD2BIN + 2))) {
        reg_bcd2bin_write(s, &s->bcd2bin, (addr - BCD2BIN), value, size);
    } else {
        qemu_log_mask(LOG_GUEST_ERROR, "%s: Bad offset 0x%"HWADDR_PRIx", size = %u\n", __func__, addr, size);
    }

}

static void device_reset_callback(DeviceState *dev) {
    MSP430_RTC_B__Real_Time_Clock_State *device = MSP430FR5739_RTC_B__REAL_TIME_CLOCK(dev);

   device->rtcctl01 = 0x0;
   device->rtcctl23 = 0x0;
   device->rtcps0ctl = 0x0;
   device->rtcps1ctl = 0x0;
   device->rtcps = 0;
   device->rtciv = 0;
   device->rtctim0 = 0;
   device->rtctim1 = 0;
   device->rtcdate = 0;
   device->rtcyear = 0;
   device->rtcaminhr = 0;
   device->rtcadowday = 0;
   device->bin2bcd = 0;
   device->bcd2bin = 0;

}

static const MemoryRegionOps mmio_ops= {
    .read  = regs_read,
    .write = regs_write,
    .endianness = DEVICE_NATIVE_ENDIAN,
};

static void device_init_callback(Object *obj) {
    MSP430_RTC_B__Real_Time_Clock_State *s = MSP430FR5739_RTC_B__REAL_TIME_CLOCK(obj);

    memory_region_init_io(&s->region, obj, &mmio_ops, s, TYPE_MSP430FR5739_RTC_B__REAL_TIME_CLOCK, SIZE);
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
    .name          = TYPE_MSP430FR5739_RTC_B__REAL_TIME_CLOCK,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(MSP430_RTC_B__Real_Time_Clock_State),
    .instance_init = device_init_callback,
    .class_init    = class_init,
};

static void msp430fr5739_rtc_b__real_time_clock_register_types(void) {
    type_register_static(&info);
}

type_init(msp430fr5739_rtc_b__real_time_clock_register_types)
