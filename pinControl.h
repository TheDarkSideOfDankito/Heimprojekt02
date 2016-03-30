//
// Created by ganymed on 30/03/16.
//

#ifndef HEIMPROJEKT02_PINCONTROL_H
#define HEIMPROJEKT02_PINCONTROL_H


#include <stdint.h>
#include <stdbool.h>


void setPinAsOutput(volatile uint8_t* ddr, uint8_t pin);
void setPinAsInput(volatile uint8_t* ddr, uint8_t pin);

void setPinToHigh(volatile uint8_t* port, uint8_t pin);
void setPinToLow(volatile uint8_t* port, uint8_t pin);

bool isPinSet(volatile uint8_t* port, uint8_t pin);


#endif //HEIMPROJEKT02_PINCONTROL_H
