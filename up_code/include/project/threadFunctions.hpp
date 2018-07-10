/* threadFunctions.hpp
Software developed by Antonio Di Guardo
PERCRO lab - Scuola Superiore Sant'Anna
2018 - diguardoa@gmail.com
*/

#ifndef THREADFUNCTIONS_H
#define THREADFUNCTIONS_H

#include <iostream>       // std::cout
#include <pthread.h> 
#include "project/logic.hpp"

// Buttazzo functions
void *task(void *p);

void time_copy(struct timespec *td, struct timespec ts);

void time_add_ms(struct timespec *t, int ms);

int time_cmp(struct timespec t1, struct timespec t2);

struct task_par {
	int arg;
	long wcet;
	int period;
	int deadline;
	int priority;
	int dmiss;
	struct timespec at;
	struct timespec dl;
};

void set_period(struct task_par *tp);

void wait_for_period(struct task_par *tp);

int deadline_miss(struct task_par *tp);

#endif