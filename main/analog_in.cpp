
#include "analog_in.h"
#import <Arduino.h>

#define analogPin A0 /* ESP8266 Analog Pin ADC0 = A0 */


int adcValue = 0;  /* Variable to store Output of ADC */

void analogInInit()
{
    delay(10);
}

int analogInUpdate()
{
  adcValue = analogRead(analogPin); /* Read the Analog Input value */
  if( adcValue >= 13 ) {
    adcValue = adcValue - 12;
  }
  if( adcValue <= 3 ) {
    adcValue = 0;
  }
  delay(10);
  return adcValue;
}
