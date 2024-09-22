#include "Arduino.h"

extern "C" void app_main()
{
    initArduino();
    pinMode(4, OUTPUT);
    digitalWrite(4, HIGH);
    // Do your own thing

    while(1){
        delay(1);
        digitalWrite(4, !digitalRead(4));
    }
}