cmake_minimum_required(VERSION 3.20.0)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(zephyr_uart_dma)

target_sources(app PRIVATE src/main.c src/uart_dma.c)
target_include_directories(app PRIVATE include)

