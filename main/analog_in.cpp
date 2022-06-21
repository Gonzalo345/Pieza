
#include "analog_in.h"
#import <Arduino.h>

void analogInInit()
{
    delay(10);
}

int analogInUpdate()
{
    int analogInPin = A0;  // ESP8266 Analog Pin ADC0 = A0
    int sensorValue = 0;  // value read from the pot
    // read the analog in value
    sensorValue = analogRead(analogInPin);
}
