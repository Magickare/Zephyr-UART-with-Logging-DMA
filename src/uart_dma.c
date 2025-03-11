#include "uart_dma.h"
#include <zephyr/device.h>
#include <zephyr/drivers/uart.h>
#include <zephyr/kernel.h>

#define UART_DEVICE DT_LABEL(DT_NODELABEL(usart1))

static const struct device *uart_dev = DEVICE_DT_GET(UART_DEVICE);

void uart_dma_init(void) {
    if (!device_is_ready(uart_dev)) {
        printk("UART Device not ready\n");
        return;
    }

    printk("UART DMA Initialized\n");
}

