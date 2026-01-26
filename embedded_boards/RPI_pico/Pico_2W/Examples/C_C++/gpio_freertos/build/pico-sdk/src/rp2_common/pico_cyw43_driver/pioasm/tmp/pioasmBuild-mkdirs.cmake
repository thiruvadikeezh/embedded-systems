# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/sudharsan/Desktop/embedded/Rpi_Pico/RPI_pico/pico-sdk/tools/pioasm"
  "/home/sudharsan/Desktop/embedded/Rpi_Pico/RPI_pico/Pico_2W/Examples/C_C++/gpio_freertos/build/pioasm"
  "/home/sudharsan/Desktop/embedded/Rpi_Pico/RPI_pico/Pico_2W/Examples/C_C++/gpio_freertos/build/pioasm-install"
  "/home/sudharsan/Desktop/embedded/Rpi_Pico/RPI_pico/Pico_2W/Examples/C_C++/gpio_freertos/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/tmp"
  "/home/sudharsan/Desktop/embedded/Rpi_Pico/RPI_pico/Pico_2W/Examples/C_C++/gpio_freertos/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src/pioasmBuild-stamp"
  "/home/sudharsan/Desktop/embedded/Rpi_Pico/RPI_pico/Pico_2W/Examples/C_C++/gpio_freertos/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src"
  "/home/sudharsan/Desktop/embedded/Rpi_Pico/RPI_pico/Pico_2W/Examples/C_C++/gpio_freertos/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src/pioasmBuild-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/sudharsan/Desktop/embedded/Rpi_Pico/RPI_pico/Pico_2W/Examples/C_C++/gpio_freertos/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src/pioasmBuild-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/sudharsan/Desktop/embedded/Rpi_Pico/RPI_pico/Pico_2W/Examples/C_C++/gpio_freertos/build/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src/pioasmBuild-stamp${cfgdir}") # cfgdir has leading slash
endif()
