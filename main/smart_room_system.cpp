
//=====[Libraries]=============================================================

#include "smart_room_system.h"
#include "led_rgb.h"
#include "control_rgb.h"
#include "pc_serial_com.h"
#include "matrix_keypad.h"


//=====[Declaration of private defines]======================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================

void smartRoomSystemInit()
{
    pcSerialComInit();
    rgbInit();
    matrixKeypadInit();
}

void smartRoomSystemUpdate()
{
    pcSerialComInit();
    //pcSerialComUpdate();
    //eventLogUpdate();
    //motorControlUpdate();
}

//=====[Implementations of private functions]==================================
