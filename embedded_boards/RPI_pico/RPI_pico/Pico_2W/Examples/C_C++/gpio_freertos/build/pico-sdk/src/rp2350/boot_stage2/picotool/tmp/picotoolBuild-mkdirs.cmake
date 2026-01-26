# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/sudharsan/Desktop/embedded/Rpi_Pico/RPI_pico/Pico_2W/Examples/C_C++/gpio_freertos/build/_deps/picotool-src"
  "/home/sudharsan/Desktop/embedded/Rpi_Pico/RPI_pico/Pico_2W/Examples/C_C++/gpio_freertos/build/_deps/picotool-build"
  "/home/sudharsan/Desktop/embedded/Rpi_Pico/RPI_pico/Pico_2W/Examples/C_C++/gpio_freertos/build/_deps"
  "/home/sudharsan/Desktop/embedded/Rpi_Pico/RPI_pico/Pico_2W/Examples/C_C++/gpio_freertos/build/pico-sdk/src/rp2350/boot_stage2/picotool/tmp"
  "/home/sudharsan/Desktop/embedded/Rpi_Pico/RPI_pico/Pico_2W/Examples/C_C++/gpio_freertos/build/pico-sdk/src/rp2350/boot_stage2/picotool/src/picotoolBuild-stamp"
  "/home/sudharsan/Desktop/embedded/Rpi_Pico/RPI_pico/Pico_2W/Examples/C_C++/gpio_freertos/build/pico-sdk/src/rp2350/boot_stage2/picotool/src"
  "/home/sudharsan/Desktop/embedded/Rpi_Pico/RPI_pico/Pico_2W/Examples/C_C++/gpio_freertos/build/pico-sdk/src/rp2350/boot_stage2/picotool/src/picotoolBuild-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/sudharsan/Desktop/embedded/Rpi_Pico/RPI_pico/Pico_2W/Examples/C_C++/gpio_freertos/build/pico-sdk/src/rp2350/boot_stage2/picotool/src/picotoolBuild-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/sudharsan/Desktop/embedded/Rpi_Pico/RPI_pico/Pico_2W/Examples/C_C++/gpio_freertos/build/pico-sdk/src/rp2350/boot_stage2/picotool/src/picotoolBuild-stamp${cfgdir}") # cfgdir has leading slash
endif()
