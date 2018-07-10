/* logic.h
Software developed by Antonio Di Guardo
PERCRO lab - Scuola Superiore Sant'Anna
2018 - diguardoa@gmail.com
*/

#ifndef LOGIC_H
#define LOGIC_H

#include <unistd.h>
#include <pthread.h> 
#include "project/threadFunctions.hpp"
#include "project/allMacros.hpp"

class Logic {
private:
	// thread-related variables
	pthread_t tid1;
	int tret1;
	
public:
	int period;
	Logic();
	void waitTillEnd();

	void runnable(void); 
};

#endif
