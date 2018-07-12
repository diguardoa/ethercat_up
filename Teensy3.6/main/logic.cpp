/* logic.cpp
Software developed by Antonio Di Guardo
PERCRO lab - Scuola Superiore Sant'Anna
2018 - diguardoa@gmail.com
*/

#include "logic.h"

Logic::Logic(volatile uint16_t* memory, Motor* mot)
{
	sensor1 = new Sensor(&memory[0]);
	sensor2 = new Sensor(&memory[1]);
	sensor3 = new Sensor(&memory[2]);
	sensor4 = new Sensor(&memory[3]);

	motor = mot; 
}

uint8_t Logic::step(uint8_t mode, uint8_t data)
{
	// Read Values from sensors
	float val1 = sensor1->get_value();

	// Elaborate


	// Send Motor Commands
	motor->set_pwm(data);
	return 1;
}