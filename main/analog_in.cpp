
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
  if( adcValue > 100 && adcValue <= 125 ) { adcValue = 5;} 
  if( adcValue > 125 && adcValue <= 150  ) { adcValue = 6;}
  if( adcValue > 150 && adcValue <= 175  ) { adcValue = 7;}
  if( adcValue > 175 && adcValue <= 200  ) { adcValue = 8;} 
  if( adcValue > 200 && adcValue <= 225  ) { adcValue = 9;}  
  if( adcValue > 225 && adcValue <= 250  ) { adcValue = 10;}
  if( adcValue > 250 && adcValue <= 275  ) { adcValue = 11;}
  if( adcValue > 275 && adcValue <= 300  ) { adcValue = 12;}  
  if( adcValue > 300 && adcValue <= 325  ) { adcValue = 13;}
  if( adcValue > 325 && adcValue <= 350  ) { adcValue = 14;}
  if( adcValue > 350 && adcValue <= 375  ) { adcValue = 15;}
  if( adcValue > 375 && adcValue <= 400  ) { adcValue = 16;}
  if( adcValue > 400 && adcValue <= 425  ) { adcValue = 17;}
  if( adcValue > 425 && adcValue <= 450  ) { adcValue = 18;} 
  if( adcValue > 450 && adcValue <= 475  ) { adcValue = 19;} 
  if( adcValue > 475 && adcValue <= 500  ) { adcValue = 20;} 
  if( adcValue > 500 && adcValue <= 525  ) { adcValue = 22;} 
  if( adcValue > 525 && adcValue <= 550  ) { adcValue = 24;} 
  if( adcValue > 550 && adcValue <= 575  ) { adcValue = 26;} 
  if( adcValue > 575 && adcValue <= 600  ) { adcValue = 28;} 
  if( adcValue > 600 && adcValue <= 625  ) { adcValue = 30;} 
  if( adcValue > 625 && adcValue <= 650  ) { adcValue = 32;} 
  if( adcValue > 650 && adcValue <= 675  ) { adcValue = 34;} 
  if( adcValue > 675 && adcValue <= 700  ) { adcValue = 36;} 
  if( adcValue > 700 && adcValue <= 725  ) { adcValue = 38;}
  if( adcValue > 725 && adcValue <= 750  ) { adcValue = 40;}
  if( adcValue > 750 && adcValue <= 775  ) { adcValue = 50;}
  if( adcValue > 775 && adcValue <= 800  ) { adcValue = 60;}
  if( adcValue > 800 && adcValue <= 825  ) { adcValue = 70;}
  if( adcValue > 825 && adcValue <= 850  ) { adcValue = 80;}
  if( adcValue > 850 && adcValue <= 875  ) { adcValue = 90;}
  if( adcValue > 875 && adcValue <= 900  ) { adcValue = 100;}
  if( adcValue > 900 && adcValue <= 925  ) { adcValue = 200;}
  if( adcValue > 925 && adcValue <= 950  ) { adcValue = 400;}
  if( adcValue > 950 && adcValue <= 975  ) { adcValue = 800;}
  if( adcValue > 975 ) { adcValue = 1024;}


  delay(10);
  return adcValue;
}
