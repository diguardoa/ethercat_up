/* main.cpp
Software developed by Antonio Di Guardo
PERCRO lab - Scuola Superiore Sant'Anna
2018 - diguardoa@gmail.com
*/

#include <iostream>       // std::cout
#include <pthread.h> 
#include "project/logic.hpp"
#include "project/threadFunctions.hpp"
#include <time.h>
#include "project/allMacros.hpp"

Logic *stateMachine;

int main()
{
	int tret1, tret2;
	int b = 2;
	stateMachine = new Logic();
	std::cout << "Hello World! \n";

	stateMachine->waitTillEnd();

	return 0;
}

