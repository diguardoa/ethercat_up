/* main.cpp
Software developed by Antonio Di Guardo
PERCRO lab - Scuola Superiore Sant'Anna
2018 - diguardoa@gmail.com
*/

#include <stdio.h>
//#include "../Teensy3.6/main/mode.h"
//#include <iostream>       // std::cout
#include <pthread.h> 
//#include "project/logic.hpp"
//#include <time.h>
#include <unistd.h>

// Buttazzo functions
void *task(void *p);

void time_copy(struct timespec *td, struct timespec ts)
{
	td->tv_sec = ts.tv_sec;
	td->tv_nsec = ts.tv_nsec;
}

void time_add_ms(struct timespec *t, int ms)
{
	t->tv_sec += ms/1000;
	t->tv_nsec += (ms%1000)*1000000;

	if (t->tv_nsec > 1000000000)
	{
		t->tv_nsec -= 1000000000;
		t->tv_sec += 1;
	}
}


int main()
{
	pthread_t tid1, tid2;
	int tret1, tret2;
	int a = 1;
	int b = 2;

	printf("Hello World!");

	fflush(stdout);

	sleep(2);

	//cycle();
	//std::thread first (cycle);
	
	tret1 = pthread_create(&tid1, NULL, task, (void*)&a);
	tret2 = pthread_create(&tid2, NULL, task, (void*)&b);

	pthread_join(tid1, NULL);
	pthread_join(tid2, NULL);


	printf("hi");
	for(int i=0; i< 10; i++)
		a+=b;	
	//first.join();
	
	return 0;
}

void *task(void *p)
{
	struct timespec t;
	int period = 1000; // expressed in milliseconds
	int *pi;
	pi = (int *)p;
	printf("this is task");
	clock_gettime(CLOCK_MONOTONIC, &t);
	time_add_ms(&t, period);

	while(1)
	{

		printf("hi %d \n", *pi);
		//fflush(stdout);

		clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, &t, NULL);
		sleep(1);
		time_add_ms(&t, period);

	}
}
