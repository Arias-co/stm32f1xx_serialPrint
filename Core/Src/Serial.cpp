/*
 * Serial.cpp
 *
 *  Created on: Aug 24, 2020
 *      Author: Macbook
 */

#include "Serial.h"


Serial::Serial(UART_HandleTypeDef * uartx)
{
    // TODO Auto-generated constructor stub
    uart = uartx;
}

void Serial::write( uint8_t  *text )
{

    HAL_UART_Transmit( uart, text,strlen((char *)text), 1000 );
}


