
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
    controlTeclaInit();
}

void smartRoomSystemUpdate()
{
    controlTeclaUpdate();
    //pcSerialComUpdate();
    //eventLogUpdate();
    //motorControlUpdate();
}

//=====[Implementations of private functions]==================================
