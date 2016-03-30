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


void test() {
    int delay = 1000;

    show0();
    sleep_ms_100ms_steps(delay);

    show1();
    sleep_ms_100ms_steps(delay);

    show2();
    sleep_ms_100ms_steps(delay);

    show3();
    sleep_ms_100ms_steps(delay);

    show4();
    sleep_ms_100ms_steps(delay);

    show5();
    sleep_ms_100ms_steps(delay);

    show6();
    sleep_ms_100ms_steps(delay);

    show7();
    sleep_ms_100ms_steps(delay);

    show8();
    sleep_ms_100ms_steps(delay);

    show9();
    sleep_ms_100ms_steps(delay);
}


void cascadeLeds(int delay) {
    setPinToHigh(&LED_A_PORT, LED_A_PIN);
    sleep_ms_10ms_steps(delay);

    setPinToLow(&LED_A_PORT, LED_A_PIN);
    setPinToHigh(&LED_B_PORT, LED_B_PIN);
    sleep_ms_10ms_steps(delay);

    setPinToLow(&LED_B_PORT, LED_B_PIN);
    setPinToHigh(&LED_C_PORT, LED_C_PIN);
    sleep_ms_10ms_steps(delay);

    setPinToLow(&LED_C_PORT, LED_C_PIN);
    setPinToHigh(&LED_D_PORT, LED_D_PIN);
    sleep_ms_10ms_steps(delay);

    setPinToLow(&LED_D_PORT, LED_D_PIN);
    setPinToHigh(&LED_E_PORT, LED_E_PIN);
    sleep_ms_10ms_steps(delay);

    setPinToLow(&LED_E_PORT, LED_E_PIN);
    setPinToHigh(&LED_F_PORT, LED_F_PIN);
    sleep_ms_10ms_steps(delay);

    setPinToLow(&LED_F_PORT, LED_F_PIN);
}