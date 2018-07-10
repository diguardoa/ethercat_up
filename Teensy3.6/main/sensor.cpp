/* sensor.cpp
Software developed by Antonio Di Guardo
PERCRO lab - Scuola Superiore Sant'Anna
2018 - diguardoa@gmail.com
*/

#include "sensor.h"

/*
The constructor accept a pointer to the memory in which the DMA write the value
*/

Sensor::Sensor(volatile uint16_t* mp) {
	memory_pointer = mp;
};

/*
The function simply return the value of the sensor
*/
uint16_t Sensor::get_value() {
	return (uint16_t) *memory_pointer;
};