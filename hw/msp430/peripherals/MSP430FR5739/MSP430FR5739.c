typedef struct {
    const char *device_name;
    const char *device_name_to_create;
    uint32_t device_base_addr;
}msp430fr5739_peripheral_t;

static msp430fr5739_peripheral_t periphs[] = {
    {"msp430fr5739_adc10_b", "msp430fr5739_adc10_b", 0x0700},
    {"msp430fr5739_cs__clock_system", "msp430fr5739_cs__clock_system", 0x0160},
    {"msp430fr5739_comparator_d", "msp430fr5739_comparator_d", 0x08C0},
    {"msp430fr5739_crc16", "msp430fr5739_crc16", 0x0150},
    {"msp430fr5739_dma", "msp430fr5739_dma", 0x0500},
    {"msp430fr5739_fram", "msp430fr5739_fram", 0x0140},
    {"msp430fr5739_mpu", "msp430fr5739_mpu", 0x05A0},
    {"msp430fr5739_mpy_16__multiplier__16_bit_mode", "msp430fr5739_mpy_16__multiplier__16_bit_mode", 0x04C0},
    {"msp430fr5739_mpy_32__multiplier__32_bit_mode", "msp430fr5739_mpy_32__multiplier__32_bit_mode", 0x04D0},
    {"msp430fr5739_pmm__power_management_system", "msp430fr5739_pmm__power_management_system", 0x0120},
    {"msp430fr5739_port_a", "msp430fr5739_port_a", 0x0200},
    {"msp430fr5739_port_1_2", "msp430fr5739_port_1_2", 0x0200},
    {"msp430fr5739_port_b", "msp430fr5739_port_b", 0x0220},
    {"msp430fr5739_port_3_4", "msp430fr5739_port_3_4", 0x0220},
    {"msp430fr5739_port_j", "msp430fr5739_port_j", 0x0320},
    {"msp430fr5739_shared_reference", "msp430fr5739_shared_reference", 0x01B0},
    {"msp430fr5739_rtc_b__real_time_clock", "msp430fr5739_rtc_b__real_time_clock", 0x04A0},
    {"msp430fr5739_sfr__special_function_registers", "msp430fr5739_sfr__special_function_registers", 0x0100},
    {"msp430fr5739_sys__system_module", "msp430fr5739_sys__system_module", 0x0180},
    {"msp430fr5739_timer0_a3", "msp430fr5739_timer0_a3", 0x0340},
    {"msp430fr5739_timer1_a3", "msp430fr5739_timer1_a3", 0x0380},
    {"msp430fr5739_timer0_b3", "msp430fr5739_timer0_b3", 0x03C0},
    {"msp430fr5739_timer1_b3", "msp430fr5739_timer1_b3", 0x0400},
    {"msp430fr5739_timer2_b3", "msp430fr5739_timer2_b3", 0x0440},
    {"msp430fr5739_usci_a0__uart_mode", "msp430fr5739_usci_a0__uart_mode", 0x05C0},
    {"msp430fr5739_usci_a0__spi_mode", "msp430fr5739_usci_a0__spi_mode", 0x05C0},
    {"msp430fr5739_usci_b0__spi_mode", "msp430fr5739_usci_b0__spi_mode", 0x0640},
    {"msp430fr5739_usci_b0__i2c_mode", "msp430fr5739_usci_b0__i2c_mode", 0x0640},
    {"msp430fr5739_usci_a1__uart_mode", "msp430fr5739_usci_a1__uart_mode", 0x05E0},
    {"msp430fr5739_usci_a1__spi_mode", "msp430fr5739_usci_a1__spi_mode", 0x05E0},
    {"msp430fr5739_watchdog_timer", "msp430fr5739_watchdog_timer", 0x015C},
};
