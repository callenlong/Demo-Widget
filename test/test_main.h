#ifndef TEST_MAIN_H
#define TEST_MAIN_H

#ifdef __cplusplus
 extern "C" {
#endif

#include <stdio.h>
#include <string.h>
#include <stdarg.h>

#include "stm32f4xx_hal.h"

#define USARTx                           USART2
#define USARTx_CLK_ENABLE()              __HAL_RCC_USART2_CLK_ENABLE()
#define USARTx_CLK_DISABLE()             __HAL_RCC_USART2_CLK_DISABLE()
#define USARTx_RX_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOA_CLK_ENABLE()
#define USARTx_TX_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOA_CLK_ENABLE()
#define USARTx_RX_GPIO_CLK_DISABLE()     __HAL_RCC_GPIOA_CLK_DISABLE()
#define USARTx_TX_GPIO_CLK_DISABLE()     __HAL_RCC_GPIOA_CLK_DISABLE()

#define USARTx_FORCE_RESET()             __HAL_RCC_USART2_FORCE_RESET()
#define USARTx_RELEASE_RESET()           __HAL_RCC_USART2_RELEASE_RESET()

#define USARTx_TX_PIN                    GPIO_PIN_2
#define USARTx_TX_GPIO_PORT              GPIOA
#define USARTx_TX_AF                     GPIO_AF7_USART2
#define USARTx_RX_PIN                    GPIO_PIN_3
#define USARTx_RX_GPIO_PORT              GPIOA
#define USARTx_RX_AF                     GPIO_AF7_USART2

#define LED_PIN                 GPIO_PIN_5
#define LED_GPIO_PORT           GPIOA
#define LED_GPIO_CLK_ENABLE()   __HAL_RCC_GPIOA_CLK_ENABLE()

void LED_Init(void);

#ifdef __cplusplus
}
#endif

#endif