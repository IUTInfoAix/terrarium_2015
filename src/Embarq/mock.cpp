#include "mock.h"
#include <stdlib.h>     // srand, rand
#include <sys/time.h>   // gettimeofday


/* mock::mock() {
    digitalWorking = 0;
}

uint8_t mock::getDigitalWorking() {
    return digitalWorking;
} */

double mock::myMock_micros() {
    struct timeval tv;
    gettimeofday(&tv,NULL);
    return tv.tv_usec;
}

uint8_t mock::myMock_DigitalRead_working(uint8_t pin, int checkError) {

    if(checkError != 0) {
        return pin;
    } else {
        if(pin == 0) {
            return 1;
        } else {
            return 0;
        }
    }

    /*mock Mock = new mock();
    uint8_t digitalWorking = Mock.getDigitalWorking();
    if(digitalWorking == 0)
        digitalWorking = 1;
    else 
        digitalWorking = 0;
    return digitalWorking;*/
}