################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk/hardware/driver/configuration_over_swo/src/sl_cos.c 

OBJS += \
./gecko_sdk_4.5.0/hardware/driver/configuration_over_swo/src/sl_cos.o 

C_DEPS += \
./gecko_sdk_4.5.0/hardware/driver/configuration_over_swo/src/sl_cos.d 


# Each subdirectory must supply rules for building sources it contributes
gecko_sdk_4.5.0/hardware/driver/configuration_over_swo/src/sl_cos.o: C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk/hardware/driver/configuration_over_swo/src/sl_cos.c gecko_sdk_4.5.0/hardware/driver/configuration_over_swo/src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m33 -mthumb -std=c99 '-DDEBUG=1' '-DDEBUG_EFM=1' '-DEFR32BG22C224F512IM40=1' '-DHARDWARE_BOARD_DEFAULT_RF_BAND_2400=1' '-DHARDWARE_BOARD_SUPPORTS_1_RF_BAND=1' '-DHARDWARE_BOARD_SUPPORTS_RF_BAND_2400=1' '-DHFXO_FREQ=38400000' '-DSL_BOARD_NAME="BRD4108A"' '-DSL_BOARD_REV="A03"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"F:\embedded\embedded_boards\silicon_labs\efr32bg22\led_blink_learning\config" -I"F:\embedded\embedded_boards\silicon_labs\efr32bg22\led_blink_learning\autogen" -I"F:\embedded\embedded_boards\silicon_labs\efr32bg22\led_blink_learning" -I"C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk//platform/Device/SiliconLabs/EFR32BG22/Include" -I"C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk//app/common/util/app_button_press" -I"C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk//platform/common/inc" -I"C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk//hardware/board/inc" -I"C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk//platform/driver/button/inc" -I"C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk//hardware/driver/configuration_over_swo/inc" -I"C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk//platform/driver/debug/inc" -I"C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk//platform/service/device_init/inc" -I"C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/dmadrv/inc" -I"C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/common/inc" -I"C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk//platform/emlib/inc" -I"C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/gpiointerrupt/inc" -I"C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk//platform/service/iostream/inc" -I"C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk//platform/driver/leddrv/inc" -I"C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk//platform/service/power_manager/inc" -I"C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk//platform/common/toolchain/inc" -I"C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk//platform/service/system/inc" -I"C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk//platform/service/sleeptimer/inc" -I"C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk//platform/emdrv/uartdrv/inc" -I"C:/Users/sudharsan/SimplicityStudio/SDKs/gecko_sdk//platform/service/udelay/inc" -Os -Wall -Wextra -Wconversion -mno-sched-prolog -fno-builtin -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mcmse --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"gecko_sdk_4.5.0/hardware/driver/configuration_over_swo/src/sl_cos.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


