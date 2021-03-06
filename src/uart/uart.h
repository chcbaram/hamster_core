/*
 * uart.h
 *
 *  Created on: 2017. 2. 13.
 *      Author: baram
 */

#ifndef UART_H_
#define UART_H_

#include <stdint.h>


#include "def.h"
#include "util.h"

#ifdef __cplusplus
extern "C" {
#endif




#define UART_CH_MAX    8



bool uartInit(void);


uint32_t    uartOpen(uint8_t channel, char *port_name, uint32_t baud);
uint32_t    uartClose(uint8_t channel);
uint32_t    uartAvailable(uint8_t channel);
void        uartWaitForEnable(uint8_t channel, uint32_t timeout);
void        uartPutch(uint8_t channel, uint8_t ch);
uint8_t     uartGetch(uint8_t channel);
int32_t     uartWrite(uint8_t channel, uint8_t *p_data, uint32_t length);
uint8_t     uartRead(uint8_t channel);
int32_t     uartPrintf(uint8_t channel, const char *fmt, ...);
int32_t     uartPrint(uint8_t channel, uint8_t *p_str);
uint32_t    uartReadBytes(uint8_t channel, uint8_t *p_data, uint32_t length);

uint32_t millis(void);


#ifdef __cplusplus
}
#endif

#endif
