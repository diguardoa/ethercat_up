/* logic.cpp
Software developed by Antonio Di Guardo
PERCRO lab - Scuola Superiore Sant'Anna
2018 - diguardoa@gmail.com
*/

#include "logic.h"

Logic::Logic(Sensor* sens, Motor* mot)
{
	sensor1 = sens;
	motor = mot; 
}

uint8_t Logic::step(uint8_t mode, uint8_t data)
{
	// Read Values from sensors
	float val1 = sensor1->get_value();

	// Elaborate
	switch (mode) {
		case 0:
		// Command the PWM with data
		motor->set_pwm(data);
		break;

		case 1:
		// Smooth feedback
		switch(data) {
			case 0:
			// test, continuous at 2.5 volt
			uint8_t send_vibration = 130;
			motor->set_pwm(send_vibration);
			break;

		}
		break;

		case 2:
		// Hard feedback
		switch(data) {
			case 0:
			// test, continuous at 5.0 volt
			uint8_t send_vibration = 255;
			motor->set_pwm(send_vibration);

			break;
		}
		break;	
	}

	// Send Motor Commands
	
	return 1;
}