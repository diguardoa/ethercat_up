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
	Logic *pi;
	pi = (Logic *)p;
	int period = pi->period; // expressed in milliseconds
	struct task_par tp;
	tp.deadline = period;
	tp.period = period;
	tp.dmiss = 0;

	set_period(&tp);

	while(1)
	{
		pi->runnable();

		if (deadline_miss(&tp))
		{
			printf("deadline miss \n");
		}
		wait_for_period(&tp);
	}
}

int time_cmp(struct timespec t1, struct timespec t2)
{
	if (t1.tv_sec > t2.tv_sec) return 1;
	if (t1.tv_sec < t2.tv_sec) return -1;
	if (t1.tv_nsec > t2.tv_nsec) return 1;
	if (t1.tv_nsec < t2.tv_nsec) return -1;

}


void set_period(struct task_par *tp)
{
	struct timespec t;

	clock_gettime(CLOCK_MONOTONIC, &t);
	time_copy(&(tp->at), t);
	time_copy(&(tp->dl), t);
	time_add_ms(&(tp->at), tp->period);
	time_add_ms(&(tp->dl), tp->deadline);

}

void wait_for_period(struct task_par *tp)
{
	clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, &(tp->at), NULL);

	time_add_ms(&(tp->at), tp->period);
	time_add_ms(&(tp->dl), tp->deadline);
}

int deadline_miss(struct task_par *tp)
{
	struct timespec now;
	clock_gettime(CLOCK_MONOTONIC, &now);

	if (time_cmp(now, tp->dl) > 0)
	{
		tp->dmiss++;
		return 1;
	}
	return 0;
}