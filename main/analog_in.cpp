
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

  if( adcValue <= 15 ) { adcValue = 0;}
  if( adcValue > 15 && adcValue <= 25 ) { adcValue = 0;}
  if( adcValue > 25 && adcValue <= 30  ) { adcValue = 2;}    
  if( adcValue > 30 && adcValue <= 40  ) { adcValue = 4;}
  if( adcValue > 40 && adcValue <= 50  ) { adcValue = 6;}
  if( adcValue > 50 && adcValue <= 60 ) { adcValue = 8;} 
  if( adcValue > 60 && adcValue <= 70  ) { adcValue = 10;}
  if( adcValue > 70 && adcValue <= 80  ) { adcValue = 14;}
  if( adcValue > 80 && adcValue <= 90  ) { adcValue = 18;} 
  if( adcValue > 80 && adcValue <= 100  ) { adcValue = 24;}
  if( adcValue > 100 && adcValue <= 110  ) { adcValue = 30;}
  if( adcValue > 110 && adcValue <= 120  ) { adcValue = 40;} 
  if( adcValue > 120 && adcValue <= 130  ) { adcValue = 60;}
  if( adcValue > 130 && adcValue <= 140  ) { adcValue = 80;}
  if( adcValue > 140 && adcValue <= 150  ) { adcValue = 100;}
  if( adcValue > 150 && adcValue <= 160  ) { adcValue = 140;}


  delay(10);
  return adcValue;
}
