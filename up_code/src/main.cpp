/* main.cpp
Software developed by Antonio Di Guardo
PERCRO lab - Scuola Superiore Sant'Anna
2018 - diguardoa@gmail.com
*/

//#include <stdio.h>
//#include "../Teensy3.6/main/mode.h"
#include <iostream>       // std::cout
#include <pthread.h> 
#include "project/logic.hpp"
#include "project/threadFunctions.hpp"
#include <time.h>
//#include <unistd.h>




int main()
{
	pthread_t tid1, tid2;
	int tret1, tret2;
	int a = 1;
	int b = 2;

	std::cout << "Hello World! \n";
	//cycle();
	//std::thread first (cycle);
	tret1 = pthread_create(&tid1, NULL, task, (void*)&a);
	tret2 = pthread_create(&tid2, NULL, task, (void*)&b);

	pthread_join(tid1, NULL);
	pthread_join(tid2, NULL);
	//sleep(1000);
	
	//first.join();
	return 0;
}

