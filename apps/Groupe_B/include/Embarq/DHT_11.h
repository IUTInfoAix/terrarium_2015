#include <string>
#include <stdint.h> // int8_t

#ifndef __DHT_11__H
#define __DHT_11__H

class DHT_11 {
    private:
        uint8_t sensorPin;                              // default sensor pin
        uint8_t temperature;                            // temperature value
        uint8_t humidity;                               // humidity value

    public:
        DHT_11 ();
        int8_t chkdelay(uint8_t us, uint8_t status, int checkError);    // check level duration
        int8_t read(uint8_t pin, std::string checkError);               // read sensor data
        uint8_t getHumidity();                          // get the humidity value (unit8)
        uint8_t getTemperature();                       // get the temperature value (unit8)
};

#endif