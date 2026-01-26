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
#include "em_gpio.h"
#include "em_cmu.h"
#include "sl_sleeptimer.h"
#include <stdio.h>

void app_init(void)
{
    // Force LED OFF immediately (if stuck ON, this proves we reached here)
    CMU_ClockEnable(cmuClock_GPIO, true);
    GPIO_PinModeSet(gpioPortA, 4, gpioModePushPull, 0);
    GPIO_PinOutClear(gpioPortA, 4);   // LED OFF

    GPIO_PinOutSet(gpioPortA, 4);
    sl_sleeptimer_delay_millisecond(100);
    GPIO_PinOutClear(gpioPortA, 4);
    sl_sleeptimer_delay_millisecond(100);

    // Rest of your code...
}

void app_process_action(void)
{
    // Blink every 500 ms
    GPIO_PinOutSet(gpioPortA, 4);   // ON
    sl_sleeptimer_delay_millisecond(500);
    GPIO_PinOutClear(gpioPortA, 4); // OFF
    sl_sleeptimer_delay_millisecond(500);
}
