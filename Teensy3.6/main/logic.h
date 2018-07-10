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

class Logic {
private:


public:
	// input function
	uint8_t setInputs(int16_t, uint8_t);

	//output function
	int16_t getMotorCommand(void);
};

#endif
