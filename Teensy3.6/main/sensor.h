/* sensor.h
Software developed by Antonio Di Guardo
PERCRO lab - Scuola Superiore Sant'Anna
2018 - diguardoa@gmail.com
*/

/*
 The class sensor can be used to pre-elaborate the value (ex: filtering..)
*/

#ifndef SENSOR_H
#define SENSOR_H

#include "mode.h"
#include <Ethernet.h>

class Sensor {
protected:
	volatile uint16_t* memory_pointer;

public:
	Sensor(volatile uint16_t*);
	uint16_t get_value();
};

#endif

