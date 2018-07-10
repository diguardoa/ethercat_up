/* communication.cpp
Software developed by Antonio Di Guardo
PERCRO lab - Scuola Superiore Sant'Anna
2018 - diguardoa@gmail.com
*/
#include "communication.h"


Communication::Communication(void) {
 
  IPAddress ip(IP_TEENSY_1);
  Ethernet.begin(mac, ip);
  delay(70);
  localPort = PORT_TEENSY_1;
  //out_localPort = OUT_PORT_TEENSY_1;
  Udp.begin(localPort);
  /*
  * init local variables
  */
  option = 0;
  workingMode = 0;
  sensor = 0;
};


uint8_t Communication::receive(void) {
	return 0;
}

