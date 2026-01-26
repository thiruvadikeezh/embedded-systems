################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include gecko_sdk_4.5.0/platform/service/system/src/subdir.mk
-include gecko_sdk_4.5.0/platform/service/sleeptimer/src/subdir.mk
-include gecko_sdk_4.5.0/platform/service/iostream/src/subdir.mk
-include gecko_sdk_4.5.0/platform/service/device_init/src/subdir.mk
-include gecko_sdk_4.5.0/platform/emlib/src/subdir.mk
-include gecko_sdk_4.5.0/platform/emdrv/uartdrv/src/subdir.mk
-include gecko_sdk_4.5.0/platform/emdrv/gpiointerrupt/src/subdir.mk
-include gecko_sdk_4.5.0/platform/emdrv/dmadrv/src/subdir.mk
-include gecko_sdk_4.5.0/platform/driver/debug/src/subdir.mk
-include gecko_sdk_4.5.0/platform/common/toolchain/src/subdir.mk
-include gecko_sdk_4.5.0/platform/common/src/subdir.mk
-include gecko_sdk_4.5.0/platform/Device/SiliconLabs/EFR32BG22/Source/subdir.mk
-include gecko_sdk_4.5.0/hardware/driver/configuration_over_swo/src/subdir.mk
-include gecko_sdk_4.5.0/hardware/board/src/subdir.mk
-include autogen/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := final_test_led_uart
BUILD_ARTIFACT_EXTENSION := axf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: main-build

# Main-build Target
main-build: final_test_led_uart.axf

# Tool invocations
final_test_led_uart.axf: $(OBJS) $(USER_OBJS) makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C Linker'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m33 -mthumb -T "F:\embedded\embedded_boards\silicon_labs\efr32bg22\final_test_led_uart\autogen\linkerfile.ld" -Wl,--no-warn-rwx-segments -Xlinker --gc-sections -Xlinker -Map="final_test_led_uart.map" -mfpu=fpv5-sp-d16 -mfloat-abi=hard --specs=nano.specs -o final_test_led_uart.axf -Wl,--start-group "./app.o" "./main.o" "./autogen/sl_board_default_init.o" "./autogen/sl_device_init_clocks.o" "./autogen/sl_event_handler.o" "./autogen/sl_iostream_handles.o" "./autogen/sl_uartdrv_init.o" "./gecko_sdk_4.5.0/hardware/board/src/sl_board_control_gpio.o" "./gecko_sdk_4.5.0/hardware/board/src/sl_board_init.o" "./gecko_sdk_4.5.0/hardware/driver/configuration_over_swo/src/sl_cos.o" "./gecko_sdk_4.5.0/platform/Device/SiliconLabs/EFR32BG22/Source/startup_efr32bg22.o" "./gecko_sdk_4.5.0/platform/Device/SiliconLabs/EFR32BG22/Source/system_efr32bg22.o" "./gecko_sdk_4.5.0/platform/common/src/sl_assert.o" "./gecko_sdk_4.5.0/platform/common/src/sl_slist.o" "./gecko_sdk_4.5.0/platform/common/src/sl_stdio.o" "./gecko_sdk_4.5.0/platform/common/src/sl_string.o" "./gecko_sdk_4.5.0/platform/common/src/sl_syscalls.o" "./gecko_sdk_4.5.0/platform/common/toolchain/src/sl_memory.o" "./gecko_sdk_4.5.0/platform/driver/debug/src/sl_debug_swo.o" "./gecko_sdk_4.5.0/platform/emdrv/dmadrv/src/dmadrv.o" "./gecko_sdk_4.5.0/platform/emdrv/gpiointerrupt/src/gpiointerrupt.o" "./gecko_sdk_4.5.0/platform/emdrv/uartdrv/src/uartdrv.o" "./gecko_sdk_4.5.0/platform/emlib/src/em_burtc.o" "./gecko_sdk_4.5.0/platform/emlib/src/em_cmu.o" "./gecko_sdk_4.5.0/platform/emlib/src/em_core.o" "./gecko_sdk_4.5.0/platform/emlib/src/em_emu.o" "./gecko_sdk_4.5.0/platform/emlib/src/em_eusart.o" "./gecko_sdk_4.5.0/platform/emlib/src/em_gpio.o" "./gecko_sdk_4.5.0/platform/emlib/src/em_ldma.o" "./gecko_sdk_4.5.0/platform/emlib/src/em_msc.o" "./gecko_sdk_4.5.0/platform/emlib/src/em_rtcc.o" "./gecko_sdk_4.5.0/platform/emlib/src/em_system.o" "./gecko_sdk_4.5.0/platform/emlib/src/em_timer.o" "./gecko_sdk_4.5.0/platform/emlib/src/em_usart.o" "./gecko_sdk_4.5.0/platform/service/device_init/src/sl_device_init_dcdc_s2.o" "./gecko_sdk_4.5.0/platform/service/device_init/src/sl_device_init_emu_s2.o" "./gecko_sdk_4.5.0/platform/service/device_init/src/sl_device_init_hfxo_s2.o" "./gecko_sdk_4.5.0/platform/service/device_init/src/sl_device_init_lfxo_s2.o" "./gecko_sdk_4.5.0/platform/service/device_init/src/sl_device_init_nvic.o" "./gecko_sdk_4.5.0/platform/service/iostream/src/sl_iostream.o" "./gecko_sdk_4.5.0/platform/service/iostream/src/sl_iostream_eusart.o" "./gecko_sdk_4.5.0/platform/service/iostream/src/sl_iostream_retarget_stdio.o" "./gecko_sdk_4.5.0/platform/service/iostream/src/sl_iostream_uart.o" "./gecko_sdk_4.5.0/platform/service/sleeptimer/src/sl_sleeptimer.o" "./gecko_sdk_4.5.0/platform/service/sleeptimer/src/sl_sleeptimer_hal_burtc.o" "./gecko_sdk_4.5.0/platform/service/sleeptimer/src/sl_sleeptimer_hal_prortc.o" "./gecko_sdk_4.5.0/platform/service/sleeptimer/src/sl_sleeptimer_hal_rtcc.o" "./gecko_sdk_4.5.0/platform/service/sleeptimer/src/sl_sleeptimer_hal_timer.o" "./gecko_sdk_4.5.0/platform/service/system/src/sl_system_init.o" "./gecko_sdk_4.5.0/platform/service/system/src/sl_system_process_action.o" -lgcc -lc -lm -lnosys -Wl,--end-group -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building out file: final_test_led_uart.out'
	arm-none-eabi-objcopy "final_test_led_uart.axf" "final_test_led_uart.out"
	@echo ' '

	@echo 'Building hex file: final_test_led_uart.hex'
	arm-none-eabi-objcopy -O ihex "final_test_led_uart.axf" "final_test_led_uart.hex"
	@echo ' '

	@echo 'Building bin file: final_test_led_uart.bin'
	arm-none-eabi-objcopy -O binary "final_test_led_uart.axf" "final_test_led_uart.bin"
	@echo ' '

	@echo 'Building s37 file: final_test_led_uart.s37'
	arm-none-eabi-objcopy -O srec "final_test_led_uart.axf" "final_test_led_uart.s37"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "final_test_led_uart.axf" -A
	@echo ' '

# Other Targets
clean:
	-@$(foreach FILE, $(EXECUTABLES), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(OBJS), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(C_DEPS), $(shell $(RM) $(FILE)) )
	-$(RM) final_test_led_uart.axf
	-@echo ' '

.PHONY: all clean dependents main-build

-include ../makefile.targets
