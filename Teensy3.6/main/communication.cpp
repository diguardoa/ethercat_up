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
  delay(100);
  IPAddress ip(192,168,0,30); 
  IPAddress remote_IP(192,168,0,1);
  ip_s = ip;
  remote_IP_s = remote_IP;
  Ethernet.begin(mac, ip_s);
  delay(70);
  localPort = PORT_TEENSY_1;
  Udp.begin(localPort);
  /*
  * init local variables
  */
  option = 0;
  workingMode = 0;
  sensor = 0;

  mode = 0;
  data = 0;

  // use a led on a pin to debug the behaviour
  //pinMode(LED_COMMUNICATION, OUTPUT);
  //digitalWrite(LED_COMMUNICATION, LOW);
};

/*
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
*/
uint8_t Communication::send(volatile uint16_t* array, uint8_t size)
{
    static uint8_t state = 0;
  Udp.beginPacket(remote_IP_s, UP_PORT_1);
  for(int i=0; i<size; i++)
  {
    Udp.write(lowByte(array[i]));
    Udp.write(highByte(array[i]));
  } 
  Udp.endPacket();
/*
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
  */
}

uint8_t Communication::receive(void) {
  int packetSize = Udp.parsePacket();
  while (packetSize>1) {
    Udp.read(packetBuffer,2);
    mode = packetBuffer[0];
    data = packetBuffer[1];    
    return 1;
  }
  return 0;
}

uint8_t Communication::getData(void)
{
  return data;
}

uint8_t Communication::getMode(void)
{
  return mode;
}

void Communication::print_ip(void)
{
  Serial.println(ip_s);
//  Serial.println(data);
 // Serial.println(mode);
}

