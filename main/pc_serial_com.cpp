//=====[Libraries]=============================================================


#include "pc_serial_com.h"
#import <Arduino.h>

void pcSerialComInit()
{
    delay(10);
    // Inicia Serial
    Serial.begin(115200);
    Serial.println();
}

void pcSerialComUpdate(char texto, char dato)
{
    Serial.println(texto, dato);
    Serial.println();
}
