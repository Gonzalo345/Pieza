//=====[Libraries]=============================================================

#include "matrix_keypad.h"
#include "led_rgb.h"
#include "analog_in.h"
#import <Arduino.h>

//=====[Declaration of private defines]======================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============
unsigned int rojo = 0;
unsigned int verde = 0;
unsigned int azul = 0;

//=====[Declaration and initialization of private global variables]============
union tipoUnion{ /* occupies 1 bytes */
    struct
    {
        unsigned int t1:1; /* occupies 1 bit */
        unsigned int t2:1;
        unsigned int t3:1;
        unsigned int t4:1;/* data */
    };
    unsigned int tecla; /* occupies 1 bytes */
}keypad;


void controlTeclaInit()
{   
    int cero = 0;
    delay(100);
    redUpdate(cero);
    blueUpdate(cero);
    greenUpdate(cero);
    keypad.tecla = 0;
}
void controlTeclaUpdate()
{   
    int poteValue = 0;
    keypad.tecla = matrixKeypadUpdate();

    if( keypad.t1 == 1 ){
        poteValue = analogInUpdate();     // Tomo el valor analogico del potenciometro
        redUpdate(poteValue);
    }

    if( keypad.t2 == 1 ){
        poteValue = analogInUpdate();     
        greenUpdate(poteValue);
    }

    if( keypad.t3 == 1 ){
        poteValue = analogInUpdate();     
        blueUpdate(poteValue);
    }

}

void controlUpdate(int valor)
{   
    rgbUpdate( valor, valor, valor);
    
}
