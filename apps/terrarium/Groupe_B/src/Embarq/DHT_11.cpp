#include "DHT_11.h"
#include "mock.h"
#include <unistd.h>     // usleep

#define micros()                mock::myMock_micros()
#define DigitalRead(x, y)       mock::myMock_DigitalRead_working(x, y)
#define LOW 0
#define HIGH 1
#define delay(x)                usleep(x*100)   // sleep for x milliseconds
#define delayMicroseconds(x)    usleep(x)       // sleep for x microseconds

DHT_11::DHT_11 () {}

/*
* checkError in functions chkdelay() and read() needs to test the errors
*
* functions pinMode() and digitalWrite() need to be mock
*/

int8_t DHT_11::chkdelay(uint8_t us, uint8_t status, int checkError) {
    sensorPin = status;
    //pinMode(sensorPin, INPUT);
    double t = micros();
    while(DigitalRead(sensorPin, checkError) == status) // wait for a status variation
        if ((micros() - t) > us) return 1;  // or a timeout
    return 0;
}

int8_t DHT_11::read(uint8_t pin, std::string checkError) {

    // Part for the errors tests
    int dataLineBusyError = 0;
    int timeoutError = 0;
    if(checkError == "data line busy") {
        dataLineBusyError = 3;
    } else if (checkError == "Timeout") {
        timeoutError = 2;
    }

    uint8_t bytes[5]; // input buffer
    uint8_t cnt = 7;
    uint8_t idx = 0;
    uint8_t chksum;
    unsigned long t;

    sensorPin = pin;

    // Initialize the buffer
    for (uint8_t i=0; i< 5; i++) bytes[i] = 0;

    // Verify if the data line is busy
    if (chkdelay(100, HIGH, dataLineBusyError)) return -3; // data line busy

    // Send Start signal
    /*pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);*/
    delay(18);
    //digitalWrite(pin, HIGH);
    delayMicroseconds(40);



    // Wait the Acknowledge signal
    if (chkdelay(100, LOW, timeoutError)) return -2;  // Timeout
    if (chkdelay(100, HIGH, timeoutError)) return -2; // Timeout

    // Read data output from the sensor
    for (int i=0; i<40; i++)
    {
        if (chkdelay(60, LOW, timeoutError)) return -2;  // Timeout
        t = micros();
        if (chkdelay(80, HIGH, timeoutError)) return -2; // Timeout

    if ((micros() - t) > 40) bytes[idx] += (1 << cnt); // bit 1 received

    if (cnt == 0)   // end of the byte
    {
        cnt = 7;    // reset at MSB
        idx++;      // point to next byte
    }
    else cnt--;
    }

    // Update variables
    // bytes[1] and bytes[3] are allways zero
    humidity    = bytes[0];
    temperature = bytes[2];

    // Verify the Checksum value
    chksum = bytes[0] + bytes[2];
    if (chksum != bytes[4]) return -1; // checksum error

    return 0; // OK
}

uint8_t DHT_11::getHumidity() {

}

uint8_t DHT_11::getTemperature() {

}