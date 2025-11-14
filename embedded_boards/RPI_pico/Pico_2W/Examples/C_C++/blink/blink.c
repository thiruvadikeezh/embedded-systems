// /**
//  * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
//  *
//  * SPDX-License-Identifier: BSD-3-Clause
//  */

// #include "pico/stdlib.h"

// // Pico W devices use a GPIO on the WIFI chip for the LED,
// // so when building for Pico W, CYW43_WL_GPIO_LED_PIN will be defined
// #ifdef CYW43_WL_GPIO_LED_PIN
// #include "pico/cyw43_arch.h"
// #endif

// #ifndef LED_DELAY_MS
// #define LED_DELAY_MS 100
// #endif

// // Perform initialisation
// int pico_led_init(void) {
// #if defined(PICO_DEFAULT_LED_PIN)
//     // A device like Pico that uses a GPIO for the LED will define PICO_DEFAULT_LED_PIN
//     // so we can use normal GPIO functionality to turn the led on and off
//     gpio_init(PICO_DEFAULT_LED_PIN);
//     gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_OUT);
//     return PICO_OK;
// #elif defined(CYW43_WL_GPIO_LED_PIN)
//     // For Pico W devices we need to initialise the driver etc
//     return cyw43_arch_init();
// #endif
// }

// // Turn the led on or off
// void pico_set_led(bool led_on) {
// #if defined(PICO_DEFAULT_LED_PIN)
//     // Just set the GPIO on or off
//     gpio_put(PICO_DEFAULT_LED_PIN, led_on);
// #elif defined(CYW43_WL_GPIO_LED_PIN)
//     // Ask the wifi "driver" to set the GPIO on or off
//     cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, led_on);
// #endif
// }

// int main() {
//     int rc = pico_led_init();
//     hard_assert(rc == PICO_OK);
//     while (true) {
//         pico_set_led(true);
//         sleep_ms(LED_DELAY_MS);
//         pico_set_led(false);
//         sleep_ms(LED_DELAY_MS);
//     }
// }


#define IO_BANK0_BASE    0x40014000U
#define SIO_BASE         0x50000000U

#define LED_PIN          25  // Onboard LED on Pico 2 (same as Pico 1)

#define IO_BANK0_GPIO_CTRL(pin) (*(volatile unsigned int *)(IO_BANK0_BASE + 0x04 + (pin) * 8))
#define SIO_GPIO_OE_SET       (*(volatile unsigned int *)(SIO_BASE + 0x24))
#define SIO_GPIO_OUT_XOR      (*(volatile unsigned int *)(SIO_BASE + 0x1C))

#define GPIO_FUNC_SIO         5

void delay(volatile unsigned int count)
{
    while (count--) __asm__("nop");
}

int main(void)
{
    // 1. Set GPIO function to SIO
    IO_BANK0_GPIO_CTRL(LED_PIN) = (IO_BANK0_GPIO_CTRL(LED_PIN) & ~0x1F) | GPIO_FUNC_SIO;

    // 2. Enable output
    SIO_GPIO_OE_SET = (1u << LED_PIN);

    // 3. Blink forever
    while (1)
    {
        SIO_GPIO_OUT_XOR = (1u << LED_PIN);
        delay(300000);
    }
}
