//
// Created by ganymed on 30/03/16.
//

#include "util.h"
#include <USBAPI.h>


void sleep_ms_10ms_steps(int ms) {
    while(ms > 0) {
        _delay_ms(10);
        ms -= 10;
    }
}

void sleep_ms_100ms_steps(int ms) {
    while(ms > 0) {
        _delay_ms(100);
        ms -= 100;
    }
}
