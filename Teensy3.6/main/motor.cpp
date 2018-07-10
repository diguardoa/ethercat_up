/* motor.cpp
Software developed by Antonio Di Guardo
PERCRO lab - Scuola Superiore Sant'Anna
2018 - diguardoa@gmail.com
*/

#include "motor.h"
#include <Ethernet.h>

/*
 The function initialize the pwm pin (2). Notice that the motor accept commands between 0 and 255
 */
Motor::Motor(uint16_t ppwm_1, uint16_t ppwm_2) {
  this->pwm_pin1 = ppwm_1;
  this->pwm_pin2 = ppwm_2;
  pinMode(ppwm_1, OUTPUT); //direction
  pinMode(ppwm_2, OUTPUT); 
  analogWriteFrequency(ppwm_1,PWM_FREQUENCY);
  analogWriteFrequency(ppwm_2,PWM_FREQUENCY);  
  analogWrite(pwm_pin1, 255);
  analogWrite(pwm_pin2, 255);
};


/*
 The function produces PWM and manages direction. Control variable is saturated at 255
*/
void Motor::set_pwm(int16_t pwm) { 


  if(pwm > 0)
  {
    int final_pwm = 255 - pwm;
  if (final_pwm < 0)
      final_pwm = 0;
    analogWrite(pwm_pin1, 255);
    analogWrite(pwm_pin2, final_pwm);
  }
  else
  {
    int final_pwm = 255 + pwm;
    if (final_pwm < 0)
      final_pwm = 0;
    analogWrite(pwm_pin1, final_pwm);
    analogWrite(pwm_pin2, 255);
  }
};
