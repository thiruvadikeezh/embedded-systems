#include <FreeRTOS.h>
#include <task.h>
#include <stdio.h>
#include "pico/stdlib.h"

#define LED1   14    // GP14 - physical pin 19
#define LED2   15    // GP15 - physical pin 20

void vTaskBlinkBoth(void *pvParameters)
{
    // Setup both pins
    gpio_init(LED1);
    gpio_set_dir(LED1, GPIO_OUT);
    
    gpio_init(LED2);
    gpio_set_dir(LED2, GPIO_OUT);

    for(;;)
    {
        // Both ON
        gpio_put(LED1, 1);
        gpio_put(LED2, 1);
        printf("Both LEDs ON\n");

        vTaskDelay(pdMS_TO_TICKS(600));   // stay ON 600 ms

        // Both OFF
        gpio_put(LED1, 0);
        gpio_put(LED2, 0);
        printf("Both LEDs OFF\n");

        vTaskDelay(pdMS_TO_TICKS(800));   // stay OFF 800 ms
    }
}

int main(void)
{
    stdio_init_all();

    // Give USB serial some time to connect
    sleep_ms(2000);
    printf("Started - Both LEDs blink together\n");

    // Create one simple task
    xTaskCreate(
        vTaskBlinkBoth,      // function
        "BlinkBoth",         // name
        256,                 // stack size (words)
        NULL,                // parameters
        1,                   // priority
        NULL                 // task handle (not used)
    );

    vTaskStartScheduler();

    // Should never reach here
    while(1);
}
