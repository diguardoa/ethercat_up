/* communication.h
Software developed by Antonio Di Guardo
PERCRO lab - Scuola Superiore Sant'Anna
2018 - diguardoa@gmail.com
*/

#ifndef COMMUNICATION_H
#define COMMUNICATION_H

#include <SPI.h>         // needed for Arduino versions later than 0018
#include <Ethernet.h>
#include <EthernetUdp.h>
#include "mode.h"

class Communication {
private:
	EthernetUDP Udp;
	byte mac[12] = {0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED};
	IPAddress ip;
	IPAddress remote;
	unsigned int localPort;
	// Look in the documentation how to create multiple ports
	//unsigned int out_localPort;
	int16_t option;
	uint8_t workingMode;
	int16_t sensor; // in this implementation we suppose there is only one sensor

public:
	Communication(void);
	void sendSensorValue(int16_t);
	int16_t getOption(void);
	uint8_t getWorkingMode(void);


	uint8_t receive(void);


	
};

#endif
