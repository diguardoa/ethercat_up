/* threadFunctions.hpp
Software developed by Antonio Di Guardo
PERCRO lab - Scuola Superiore Sant'Anna
2018 - diguardoa@gmail.com
*/

#ifndef THREADFUNCTIONS_H
#define THREADFUNCTIONS_H

#include <iostream>       // std::cout
#include <pthread.h> 

// Buttazzo functions
void *task(void *p);

void time_copy(struct timespec *td, struct timespec ts);

void time_add_ms(struct timespec *t, int ms);


#endif