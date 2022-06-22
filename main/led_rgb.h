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
void rgbWhite( int blanco );
void rgbUpdate( int rojo, int verde, int azul );
void rgbLedOn ();
void rgbLedOff ();
void redUpdate( int red );
void greenUpdate( int green );
void blueUpdate( int blue );

//=====[#include guards - end]=================================================

#endif // _LED_RGB_H_
