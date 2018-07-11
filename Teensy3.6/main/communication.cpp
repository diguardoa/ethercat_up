/* communication.cpp
Software developed by Antonio Di Guardo
PERCRO lab - Scuola Superiore Sant'Anna
2018 - diguardoa@gmail.com
*/
#include "communication.h"


Communication::Communication(void) {
  pinMode(9,OUTPUT);
  digitalWrite(9,LOW);
  pinMode(10, OUTPUT);
  digitalWrite(10, HIGH);
  pinMode(4, OUTPUT);
  digitalWrite(4, HIGH);
  digitalWrite(9,HIGH); 
  IPAddress ip2(10,25,4,40);
  ip = ip2;
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

  // use a led on a pin to debug the behaviour
  pinMode(LED_COMMUNICATION, OUTPUT);
  digitalWrite(LED_COMMUNICATION, LOW);
};


uint8_t Communication::receive(void) {
	static uint8_t state = 0;
  
  Udp.beginPacket(UP_IP, UP_PORT_1);
  Udp.write("a");
  Udp.endPacket();

	if (state)
	{
		digitalWrite(LED_COMMUNICATION,HIGH);
		state = 0;
	}
	else
	{
		digitalWrite(LED_COMMUNICATION,LOW);
		state = 1;
	}
	return 0;
}

