cmake_minimum_required(VERSION 3.20)
include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(blinky C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(blinky main.c)

target_link_libraries(blinky pico_stdlib pico_cyw43_arch_none)

pico_enable_stdio_usb(blinky 1)
pico_enable_stdio_uart(blinky 0)
pico_add_extra_outputs(blinky)
