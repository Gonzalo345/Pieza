//=====[Libraries]=============================================================

#include "matrix_keypad.h"
#include "led_rgb.h"
#include "analog_in.h"

//=====[Declaration of private defines]======================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============
unsigned int rojo = 0;
unsigned int verde = 0;
unsigned int azul = 0;
//=====[Declaration and initialization of private global variables]============

//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================

void controlTeclaUpdate()
{   
    int poteValue = 0;
    unsigned int tecla = 0;
    tecla = matrixKeypadUpdate();
    if( tecla == 1 ){
        poteValue = analogInUpdate();     // Tomo el valor analogico del potenciometro
        redUpdate(poteValue);
    //    rojo =+ 10;
    //    if( rojo >= 1024 ) rojo = 1024;
    }
    if( tecla == 2 ){
        poteValue = analogInUpdate();     
        greenUpdate(poteValue);
    //    verde =+ 10;
    //    if( verde >= 1024 ) verde = 1024;
    }
    if( tecla == 3 ){
        poteValue = analogInUpdate();     
        blueUpdate(poteValue);
    //    azul =+ 10;
    //    if( azul >= 1024 ) azul = 1024;
    }
    
}

void controlUpdate(int valor)
{   
    rgbUpdate( valor, valor, valor);
    
}
