
//=====[Libraries]=============================================================

#include "smart_room_system.h"
#include "led_rgb.h"
#include "control_rgb.h"
#include "pc_serial_com.h"
#include "matrix_keypad.h"
#include "analog_in.h"
#import <Arduino.h>


void smartRoomSystemInit()
{
    pcSerialComInit();
    rgbInit();
    matrixKeypadInit();
    analogInInit();
}

void smartRoomSystemUpdate()
{
    int sensorValue = 0;

    pcSerialComInit();
    sensorValue = analogInUpdate();
    controlAnalogUpdate(sensorValue);
    Serial.print("Potenciometro =");
    Serial.print(sensorValue);
    Serial.println();
    //pcSerialComUpdate();
    //eventLogUpdate();
    //motorControlUpdate();
}

//=====[Implementations of private functions]==================================
