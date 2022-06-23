//=====[Libraries]=============================================================

#include "led_rgb.h"

#include "smart_room_system.h"
#import <Arduino.h>

//=====[Declaration of private defines]======================================

#define ledAzul     D0
#define ledVerde    D5
#define ledRojo     D1



void rgbInit()
{
    rgbLedOff();
    pinMode( ledVerde, OUTPUT );
    pinMode( ledAzul, OUTPUT );
    pinMode( ledRojo, OUTPUT );

    digitalWrite( ledVerde, HIGH );
    digitalWrite( ledAzul, HIGH );
    digitalWrite( ledRojo, HIGH );

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
    analogWrite( ledRojo, azul );
}
void redUpdate( int red ){

    analogWrite( ledRojo, red );

}
void greenUpdate( int green ){

    analogWrite( ledVerde, green );
}
void blueUpdate( int blue ){

    analogWrite( ledAzul, blue );

}

void rgbWhite( int blanco )
{
    analogWrite( ledAzul, blanco );
    analogWrite( ledVerde, blanco );
    analogWrite( ledRojo, blanco );
}

//=====[Implementations of private functions]==================================

void rgbLedOn(){

    analogWrite( ledAzul, 1024 );
    analogWrite( ledVerde, 1024 );
    analogWrite( ledRojo, 1024 );

}
void rgbLedOff(){  

    analogWrite( ledAzul, 0 );
    analogWrite( ledVerde, 0 );
    analogWrite( ledRojo, 0 );

}
