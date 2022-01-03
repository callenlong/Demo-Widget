#ifndef DEVICE_DRIVER_H
#define DEVICE_DRIVER_H

#ifdef __cplusplus
 extern "C" {
#endif

#include "stm32f4xx_hal.h"

#define LED_PIN GPIO_PIN_5
#define LED_GPIO_PORT GPIOA
#define LED_GPIO_CLK_ENABLE() __HAL_RCC_GPIOA_CLK_ENABLE()

void LED_Init(void);

#ifdef __cplusplus
}
#endif

#endif