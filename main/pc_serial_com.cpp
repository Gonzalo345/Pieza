//=====[Libraries]=============================================================


#include "pc_serial_com.h"
#import <Arduino.h>

//=====[Declaration of private defines]======================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================

void pcSerialComInit()
{
    delay(10);
    // Inicia Serial
    Serial.begin(115200);
    Serial.println();
}
