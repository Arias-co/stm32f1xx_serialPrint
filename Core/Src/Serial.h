/*
 * Serial.h
 *
 *  Created on: Aug 24, 2020
 *      Author: Macbook
 */

#ifndef SRC_SERIAL_H_
#define SRC_SERIAL_H_

#include "main.h"
#include "Print.h"



class Serial: public Print
{
private:

public:

    UART_HandleTypeDef *uart;
    Serial( UART_HandleTypeDef * uartx );
    virtual void write( uint8_t * text );

};

#endif /* SRC_SERIAL_H_ */
