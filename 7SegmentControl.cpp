//
// Created by ganymed on 30/03/16.
//

#include "7SegmentControl.h"
#include "pinMappings.h"
#include "pinControl.h"
#include "util.h"


void setup7Segment() {
    setPinAsOutput(&LED_A_DDR, LED_A_DDR_PIN);
    setPinAsOutput(&LED_B_DDR, LED_B_DDR_PIN);
    setPinAsOutput(&LED_C_DDR, LED_C_DDR_PIN);
    setPinAsOutput(&LED_D_DDR, LED_D_DDR_PIN);
    setPinAsOutput(&LED_E_DDR, LED_E_DDR_PIN);
    setPinAsOutput(&LED_F_DDR, LED_F_DDR_PIN);
    setPinAsOutput(&LED_G_DDR, LED_G_DDR_PIN);
}


void show0() {
    setPinToHigh(&LED_A_PORT, LED_A_PIN);
    setPinToHigh(&LED_B_PORT, LED_B_PIN);
    setPinToHigh(&LED_C_PORT, LED_C_PIN);
    setPinToHigh(&LED_D_PORT, LED_D_PIN);
    setPinToHigh(&LED_E_PORT, LED_E_PIN);
    setPinToHigh(&LED_F_PORT, LED_F_PIN);
    setPinToLow(&LED_G_PORT, LED_G_PIN);
}

void show1() {
    setPinToLow(&LED_A_PORT, LED_A_PIN);
    setPinToHigh(&LED_B_PORT, LED_B_PIN);
    setPinToHigh(&LED_C_PORT, LED_C_PIN);
    setPinToLow(&LED_D_PORT, LED_D_PIN);
    setPinToLow(&LED_E_PORT, LED_E_PIN);
    setPinToLow(&LED_F_PORT, LED_F_PIN);
    setPinToLow(&LED_G_PORT, LED_G_PIN);
}

void show2() {
    setPinToHigh(&LED_A_PORT, LED_A_PIN);
    setPinToHigh(&LED_B_PORT, LED_B_PIN);
    setPinToLow(&LED_C_PORT, LED_C_PIN);
    setPinToHigh(&LED_D_PORT, LED_D_PIN);
    setPinToHigh(&LED_E_PORT, LED_E_PIN);
    setPinToLow(&LED_F_PORT, LED_F_PIN);
    setPinToHigh(&LED_G_PORT, LED_G_PIN);
}

void show3() {
    setPinToHigh(&LED_A_PORT, LED_A_PIN);
    setPinToHigh(&LED_B_PORT, LED_B_PIN);
    setPinToHigh(&LED_C_PORT, LED_C_PIN);
    setPinToHigh(&LED_D_PORT, LED_D_PIN);
    setPinToLow(&LED_E_PORT, LED_E_PIN);
    setPinToLow(&LED_F_PORT, LED_F_PIN);
    setPinToHigh(&LED_G_PORT, LED_G_PIN);
}

void show4() {
    setPinToLow(&LED_A_PORT, LED_A_PIN);
    setPinToHigh(&LED_B_PORT, LED_B_PIN);
    setPinToHigh(&LED_C_PORT, LED_C_PIN);
    setPinToLow(&LED_D_PORT, LED_D_PIN);
    setPinToLow(&LED_E_PORT, LED_E_PIN);
    setPinToHigh(&LED_F_PORT, LED_F_PIN);
    setPinToHigh(&LED_G_PORT, LED_G_PIN);
}

void show5() {
    setPinToHigh(&LED_A_PORT, LED_A_PIN);
    setPinToLow(&LED_B_PORT, LED_B_PIN);
    setPinToHigh(&LED_C_PORT, LED_C_PIN);
    setPinToHigh(&LED_D_PORT, LED_D_PIN);
    setPinToLow(&LED_E_PORT, LED_E_PIN);
    setPinToHigh(&LED_F_PORT, LED_F_PIN);
    setPinToHigh(&LED_G_PORT, LED_G_PIN);
}

void show6() {
    setPinToHigh(&LED_A_PORT, LED_A_PIN);
    setPinToLow(&LED_B_PORT, LED_B_PIN);
    setPinToHigh(&LED_C_PORT, LED_C_PIN);
    setPinToHigh(&LED_D_PORT, LED_D_PIN);
    setPinToHigh(&LED_E_PORT, LED_E_PIN);
    setPinToHigh(&LED_F_PORT, LED_F_PIN);
    setPinToHigh(&LED_G_PORT, LED_G_PIN);
}

void show7() {
    setPinToHigh(&LED_A_PORT, LED_A_PIN);
    setPinToHigh(&LED_B_PORT, LED_B_PIN);
    setPinToHigh(&LED_C_PORT, LED_C_PIN);
    setPinToLow(&LED_D_PORT, LED_D_PIN);
    setPinToLow(&LED_E_PORT, LED_E_PIN);
    setPinToLow(&LED_F_PORT, LED_F_PIN);
    setPinToLow(&LED_G_PORT, LED_G_PIN);
}

void show8() {
    setPinToHigh(&LED_A_PORT, LED_A_PIN);
    setPinToHigh(&LED_B_PORT, LED_B_PIN);
    setPinToHigh(&LED_C_PORT, LED_C_PIN);
    setPinToHigh(&LED_D_PORT, LED_D_PIN);
    setPinToHigh(&LED_E_PORT, LED_E_PIN);
    setPinToHigh(&LED_F_PORT, LED_F_PIN);
    setPinToHigh(&LED_G_PORT, LED_G_PIN);
}

void show9() {
    setPinToHigh(&LED_A_PORT, LED_A_PIN);
    setPinToHigh(&LED_B_PORT, LED_B_PIN);
    setPinToHigh(&LED_C_PORT, LED_C_PIN);
    setPinToHigh(&LED_D_PORT, LED_D_PIN);
    setPinToLow(&LED_E_PORT, LED_E_PIN);
    setPinToHigh(&LED_F_PORT, LED_F_PIN);
    setPinToHigh(&LED_G_PORT, LED_G_PIN);
}


void showNumber(uint8_t number) {
    if(number == 0) {
        show0();
    }
    else if(number == 1) {
        show1();
    }
    else if(number == 2) {
        show2();
    }
    else if(number == 3) {
        show3();
    }
    else if(number == 4) {
        show4();
    }
    else if(number == 5) {
        show5();
    }
    else if(number == 6) {
        show6();
    }
    else if(number == 7) {
        show7();
    }
    else if(number == 8) {
        show8();
    }
    else if(number == 9) {
        show9();
    }
}