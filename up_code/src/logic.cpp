/* logic.cpp
Software developed by Antonio Di Guardo
PERCRO lab - Scuola Superiore Sant'Anna
2018 - diguardoa@gmail.com
*/

#include "project/logic.hpp"


/*
The constructor create the thread
*/
Logic::Logic() {
	// set period
	period = LOGIC_PERIOD;

	teensy1 = new RemoteDevice("10.25.4.41",UP_PORT, TEENSY1_PORT);
	// launch the thread
	tret1 = pthread_create(&tid1, NULL, task, (void*)this);	

}

/*
This function should be called to avoid the program ends
*/
void Logic::waitTillEnd() 
{
	pthread_join(tid1, NULL);
}


/*
The function contains the code to be executed for each period
*/
void Logic::runnable()
{
	char buffer[256];
	int n = teensy1->receive(buffer);
	if (n>0)
	{
		printf("%d \n",n);
		printf(buffer);
		printf("\n");
	}	
	teensy1->send("aa", 2);
}