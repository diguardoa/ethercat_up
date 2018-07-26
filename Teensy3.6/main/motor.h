/* motor.h
Software developed by Antonio Di Guardo
PERCRO lab - Scuola Superiore Sant'Anna
2018 - diguardoa@gmail.com
*/


#ifndef MOTOR_H
#define MOTOR_H

#include "mode.h"
#include <Ethernet.h>

class Motor {
private:
	uint16_t pwm_pin1;
	uint16_t pwm_pin2;
  int16_t saved_pwm;
	
public:
	Motor(uint16_t ppwm_1,uint16_t ppwm_2);
	void set_pwm(int16_t); // the direction is coded on the sign
  void print_pwm(void);
};

#endif
