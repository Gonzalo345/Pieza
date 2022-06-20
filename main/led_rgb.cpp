//=====[Libraries]=============================================================

#include "led_rgb.h"

#include "smart_room_system.h"
#import <Arduino.h>

//=====[Declaration of private defines]======================================

#define ledAzul     D0
#define ledVerde    D1
#define ledRoja     D2


//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

//DigitalOut sirenPin(PE_10);

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

static bool sirenState = OFF;

//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================

void rgbInit()
{
    rgbLedOff();
    pinMode( ledVerde, OUTPUT );
    pinMode( ledAzul, OUTPUT );
    pinMode( ledRoja, OUTPUT );

    digitalWrite( ledVerde, HIGH );
    digitalWrite( ledAzul, HIGH );
    digitalWrite( ledRoja, HIGH );

}

/*
int stateAzul int rgbStateRead()
{
    return sirenState;
}
*/

void rgbUpdate( int rojo, int verde, int azul )
{
    analogWrite( ledAzul, rojo );
    analogWrite( ledVerde, verde );
    analogWrite( ledRoja, azul );
}

void rgbWhite( int blanco )
{
    analogWrite( ledAzul, blanco );
    analogWrite( ledVerde, blanco );
    analogWrite( ledRoja, blanco );
}

//=====[Implementations of private functions]==================================

void rgbLedOn(){

    analogWrite( ledAzul, 1024 );
    analogWrite( ledVerde, 1024 );
    analogWrite( ledRoja, 1024 );

}
void rgbLedOff(){  

    analogWrite( ledAzul, 0 );
    analogWrite( ledVerde, 0 );
    analogWrite( ledRoja, 0 );

}
