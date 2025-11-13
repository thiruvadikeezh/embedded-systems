cmake_minimum_required(VERSION 3.13)

# Project name
project(stm32f446re_led_blink C ASM)

# CPU and flags
set(CPU cortex-m4)
set(CMAKE_C_FLAGS "-mcpu=${CPU} -mthumb -O0 -g3 -Wall -ffreestanding")
set(CMAKE_EXE_LINKER_FLAGS "-T${CMAKE_SOURCE_DIR}/linker.ld -nostdlib -nostartfiles -Wl,--gc-sections")

# Source files
set(SOURCES
    ${CMAKE_SOURCE_DIR}/main.c
    ${CMAKE_SOURCE_DIR}/startup_stm32f446xx.s
)

# Output ELF
add_executable(${PROJECT_NAME}.elf ${SOURCES})

# Generate binary file after linking
add_custom_command(TARGET ${PROJECT_NAME}.elf POST_BUILD
    COMMAND ${CMAKE_OBJCOPY} -O binary ${PROJECT_NAME}.elf ${PROJECT_NAME}.bin
    COMMAND ${CMAKE_SIZE} ${PROJECT_NAME}.elf
)
