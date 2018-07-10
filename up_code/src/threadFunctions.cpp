/* threadFunctions.cpp
Software developed by Antonio Di Guardo
PERCRO lab - Scuola Superiore Sant'Anna
2018 - diguardoa@gmail.com
*/

#include "project/threadFunctions.hpp"

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

void *task(void *p)
{
	struct timespec t;
	int period = 100; // expressed in milliseconds
	int *pi;
	pi = (int *)p;
	std::cout << "this is task" << *pi;
	clock_gettime(CLOCK_MONOTONIC, &t);
	time_add_ms(&t, period);

	while(1)
	{

		std::cout << *pi << "\n";

		clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, &t, NULL);
		time_add_ms(&t, period);

	}
}