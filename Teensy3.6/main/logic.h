/* logic.h
Software developed by Antonio Di Guardo
PERCRO lab - Scuola Superiore Sant'Anna
2018 - diguardoa@gmail.com
*/

/*
 The interface strongly depends on the number of motors used
*/
#ifndef LOGIC_H
#define LOGIC_H

#include "mode.h"
#include "motor.h"
#include "sensor.h"

class Logic {
private:
	Sensor* sensor1;
	Sensor* sensor2;
	Sensor* sensor3;
	Sensor* sensor4;

	Motor* motor;
public:
	Logic(volatile uint16_t*, Motor*);
	
	uint8_t step(uint8_t mode, uint8_t data);
};

#endif
