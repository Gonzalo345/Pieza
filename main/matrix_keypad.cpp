
//=====[Libraries]=============================================================

#include "matrix_keypad.h"
#import <Arduino.h>

//=====[Declaration of private defines]======================================

#define pin1    D4  
#define pin2    D5
#define pin3    D6
#define pin4    D7

union tipoUnion{ /* occupies 1 bytes */
    struct
    {
        unsigned int t1:1; /* occupies 1 bit */
        unsigned int t2:1;
        unsigned int t3:1;
        unsigned int t4:1;/* data */
    };
    unsigned int tecla; /* occupies 1 bytes */
}tecla;

void matrixKeypadInit()
{
    pinMode( pin1, INPUT );
    pinMode( pin2, INPUT );
    pinMode( pin3, INPUT );
    pinMode( pin4, INPUT );

}

unsigned int matrixKeypadUpdate()
{
    unsigned int keyDetected = 0;
    unsigned int keyReleased = 0;

    keyDetected = matrixKeypadScan();
    if( keyDetected != 0 ) {
    //    while( keyReleased != 0)
    //        keyReleased = matrixKeypadScan();
        return tecla.tecla;
    }
    else{
        return 0;
    }

}

//=====[Implementations of private functions]==================================

unsigned int matrixKeypadScan()
{
    tecla.tecla = 0;
    
    if(digitalRead(pin1)) { tecla.t1 = 1; }
    if(digitalRead(pin2)) { tecla.t2 = 1; }
    if(digitalRead(pin3)) { tecla.t3 = 1; }
    if(digitalRead(pin4)) { tecla.t4 = 1; }

    if( tecla.tecla != 0 ) {
        return tecla.tecla;
    }
    else {
        return 0;
    }
}
