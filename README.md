# cpp_embedded_cmake_template
A template project for C++ on an STM32 microcontroller.

## How to use
'cd cmake-build-debug'
'cmake -DCMAKE_TOOLCHAIN_FILE=../arm-none-eabi-gcc.cmake -DCMAKE_BUILD_TYPE=Debug ..'
'make'

## How to flash
'st-info --probe'
'st-flash write stm32test0.bin 0x8000000'
'sudo pacman -Syu openocd'
'openocd -f /usr/share/openocd/scripts/interface/stlink-v2.cfg -f /usr/share/openocd/scripts/target/stm32f0x.cfg'
'arm-none-eabi-gdb'
'arm-none-eabi-gdb stm32test0.elf'
'target extended-remote localhost:3333'

## Clean project
'rm -rv cmake-build-debug/*'
