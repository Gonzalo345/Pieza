
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
  if( adcValue > 15 && adcValue <= 25 ) { adcValue = 1;}
  if( adcValue > 25 && adcValue <= 50  ) { adcValue = 2;}    
  if( adcValue > 50 && adcValue <= 75  ) { adcValue = 3;}
  if( adcValue > 75 && adcValue <= 100  ) { adcValue = 4;}
  if( adcValue > 100 && adcValue <= 150 ) { adcValue = 5;} 
  if( adcValue > 150 && adcValue <= 200  ) { adcValue = 6;}
  if( adcValue > 200 && adcValue <= 250  ) { adcValue = 7;}
  if( adcValue > 250 && adcValue <= 300  ) { adcValue = 8;} 
  if( adcValue > 300 && adcValue <= 400  ) { adcValue = 9;}
  if( adcValue > 400 && adcValue <= 500  ) { adcValue = 10;}
  if( adcValue > 500 && adcValue <= 600  ) { adcValue = 40;} 
  if( adcValue > 600 && adcValue <= 700  ) { adcValue = 60;}
  if( adcValue > 700 && adcValue <= 800  ) { adcValue = 80;}
  if( adcValue > 800 && adcValue <= 900  ) { adcValue = 100;}
  if( adcValue > 900 ) { adcValue = 1000;}


  delay(10);
  return adcValue;
}
