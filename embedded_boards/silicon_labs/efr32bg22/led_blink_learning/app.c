/***************************************************************************//**
 * @file
 * @brief Top level application functions
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/
#include <stdio.h>
#include "em_gpio.h"          // GPIO functions
#include "em_cmu.h"           // Clock management (if enabling clocks)
#include "sl_sleeptimer.h"    // Delays
#include "sl_simple_led_instances.h"  // If using SL LED
#include <stdbool.h>          // bool type

/***************************************************************************//**
 * Initialize application – runs once
 ******************************************************************************/
void app_init(void)
{
    // Enable GPIO clock
    CMU_ClockEnable(cmuClock_GPIO, true);

    // LED PA04 – push-pull output, start OFF
    GPIO_PinModeSet(gpioPortA, 4, gpioModePushPull, 0);

    // Quick startup blink to prove init ran
    printf("\r\n");
    printf("======================================\r\n");
    printf("  STARTUP TEST - EFR32BG22 is alive!\r\n");
    printf("  LED will blink forever now...\r\n");
    printf("  Watch console for messages every second\r\n");
    printf("======================================\r\n\r\n");

    // 3 quick blinks at start
    for (int i = 0; i < 3; i++) {
        GPIO_PinOutSet(gpioPortA, 4);   // LED ON
        sl_sleeptimer_delay_millisecond(200);
        GPIO_PinOutClear(gpioPortA, 4); // LED OFF
        sl_sleeptimer_delay_millisecond(200);
    }
}

/***************************************************************************//**
 * Main loop – runs forever
 ******************************************************************************/
void app_process_action(void)
{
    static uint32_t last_print_time = 0;
    uint32_t now = sl_sleeptimer_get_tick_count();

    // Blink LED every 500 ms
    if ((now % sl_sleeptimer_ms_to_tick(1000)) < sl_sleeptimer_ms_to_tick(500)) {
        GPIO_PinOutSet(gpioPortA, 4);   // ON for half second
    } else {
        GPIO_PinOutClear(gpioPortA, 4); // OFF for half second
    }

    // Print message every 1 second
    if (now - last_print_time >= sl_sleeptimer_ms_to_tick(1000)) {
        last_print_time = now;
        printf("Tick: %lu  - LED is blinking, everything is OK!\r\n", (unsigned long)now);
    }

    // Tiny delay to avoid 100% CPU
    sl_sleeptimer_delay_millisecond(10);
}
