//=====[Libraries]=============================================================

#include "smart_room_system.h"



//=====[Main function the program entry point after power on or reset]========

void setup(){
  smartRoomSystemInit();
}
void loop() {
  smartRoomSystemUpdate();
}
