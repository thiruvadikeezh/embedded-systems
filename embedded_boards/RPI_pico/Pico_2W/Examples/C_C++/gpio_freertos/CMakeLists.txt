cmake_minimum_required(VERSION 3.13)

# Critical for Pico 2W / RP2350
set(PICO_BOARD pico2_w)

include(pico_sdk_import.cmake)
include(FreeRTOS_Kernel_import.cmake)

project(gpio_freertos C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(gpio_freertos
    main.c
)

# This line fixes header finding !!!
target_include_directories(gpio_freertos PRIVATE ${CMAKE_CURRENT_LIST_DIR})

target_link_libraries(gpio_freertos
    pico_stdlib
    FreeRTOS-Kernel
    FreeRTOS-Kernel-Heap4
)

pico_enable_stdio_usb(gpio_freertos 1)
pico_enable_stdio_uart(gpio_freertos 0)

pico_add_extra_outputs(gpio_freertos)
