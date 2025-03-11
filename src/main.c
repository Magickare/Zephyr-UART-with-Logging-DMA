#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>
#include "uart_dma.h"

LOG_MODULE_REGISTER(main, LOG_LEVEL_DBG);

void main(void) {
    LOG_INF("Zephyr UART DMA Example Started");

    // Initialize UART with DMA
    uart_dma_init();

    while (1) {
        k_sleep(K_SECONDS(1));
        LOG_INF("System Running...");
    }
}

