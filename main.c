#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "pico/cyw43_arch.h"
#include "pico/bootrom.h"
#include "class/cdc/cdc_device.h"

void tud_cdc_line_coding_cb(uint8_t itf, cdc_line_coding_t const *p_line_coding)
{
    uint32_t baud_rate = p_line_coding->bit_rate;
    if (baud_rate == 1200)
    {
        reset_usb_boot(0, 0);
    }
}

int main()
{
    tud_cdc_set_wanted_char('\0');

    stdio_init_all();

    if (cyw43_arch_init())
    {
        printf("WiFi chip init failed!");
        return -1;
    }

    while (1)
    {
        printf("Run...\r\n");
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
        sleep_ms(100);
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
        sleep_ms(100);
    }
}