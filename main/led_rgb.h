//=====[#include guards - begin]===============================================

#ifndef _LED_RGB_H_
#define _LED_RGB_H_

//=====[Libraries]=============================================================

//=====[Declaration of public defines]=======================================
#define OFF 0
#define ON  1
//=====[Declaration of public data types]======================================

//=====[Declarations (prototypes) of public functions]=========================

void rgbInit();
//int int int rgbStateRead();
void rgbWhite( unsigned int blanco );
void rgbUpdate( unsigned int rojo, unsigned int verde, unsigned int azul );
void rgbLedOn ();
void rgbLedOff ();

//=====[#include guards - end]=================================================

#endif // _LED_RGB_H_
