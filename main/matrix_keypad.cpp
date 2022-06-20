
//=====[Libraries]=============================================================

#include "matrix_keypad.h"
#import <Arduino.h>

//=====[Declaration of private defines]======================================

#define pinUno    D4  
#define pinDos    D5
#define pinTres   D6
#define pinCuatro D7

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================

void matrixKeypadInit()
{
    pinMode( pinUno, INPUT );
    pinMode( pinDos, INPUT );
    pinMode( pinTres, INPUT );
    pinMode( pinCuatro, INPUT );

}

unsigned int matrixKeypadUpdate()
{
    unsigned int keyDetected = 0;
    unsigned int keyReleased = 0;

    keyDetected = matrixKeypadScan();
    if( keyDetected != 0 ) {
    //    while( keyReleased != 0)
    //        keyReleased = matrixKeypadScan();
        return keyDetected;
    }
    else{
        return 0;
    }

}

//=====[Implementations of private functions]==================================

unsigned int matrixKeypadScan()
{
    unsigned int keyDetected;

    keyDetected = 1 * digitalRead( pinUno );
    keyDetected = 2 * digitalRead( pinDos );
    keyDetected = 4 * digitalRead( pinTres );
    keyDetected = 8 * digitalRead( pinCuatro );

    if( keyDetected != 0 ){
        return keyDetected;
    }
    else{
        return 0;
    }
}
