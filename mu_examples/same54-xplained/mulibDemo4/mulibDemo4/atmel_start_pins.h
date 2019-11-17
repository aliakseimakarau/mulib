/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <hal_gpio.h>

// SAME54 has 14 pin functions

#define GPIO_PIN_FUNCTION_A 0
#define GPIO_PIN_FUNCTION_B 1
#define GPIO_PIN_FUNCTION_C 2
#define GPIO_PIN_FUNCTION_D 3
#define GPIO_PIN_FUNCTION_E 4
#define GPIO_PIN_FUNCTION_F 5
#define GPIO_PIN_FUNCTION_G 6
#define GPIO_PIN_FUNCTION_H 7
#define GPIO_PIN_FUNCTION_I 8
#define GPIO_PIN_FUNCTION_J 9
#define GPIO_PIN_FUNCTION_K 10
#define GPIO_PIN_FUNCTION_L 11
#define GPIO_PIN_FUNCTION_M 12
#define GPIO_PIN_FUNCTION_N 13

#define RESET_PIN GPIO(GPIO_PORTA, 6)
#define CE_PIN GPIO(GPIO_PORTA, 27)
#define CONF_WINC_EXT_INT_PIN GPIO(GPIO_PORTB, 7)
#define EDBG_UART_RX GPIO(GPIO_PORTB, 24)
#define EDBG_UART_TX GPIO(GPIO_PORTB, 25)
#define CONF_WINC_SPI_SCK GPIO(GPIO_PORTB, 26)
#define CONF_WINC_SPI_MOSI GPIO(GPIO_PORTB, 27)
#define CS_PIN GPIO(GPIO_PORTB, 28)
#define CONF_WINC_SPI_MISO GPIO(GPIO_PORTB, 29)
#define USER_BUTTON_ GPIO(GPIO_PORTB, 31)
#define LED0_ GPIO(GPIO_PORTC, 18)

#endif // ATMEL_START_PINS_H_INCLUDED
