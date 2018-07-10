/* main.ino
Software developed by Antonio Di Guardo
PERCRO lab - Scuola Superiore Sant'Anna
2018 - diguardoa@gmail.com
*/

#include <SPI.h>         // needed for Arduino versions later than 0018
#include <Ethernet.h>
#include <EthernetUdp.h>         // UDP library from: bjoern@cs.stanford.edu 12/30/2008
#include <IntervalTimer.h>
#include "communication.h"
#include "logic.h"
#include "motor.h"
#include "sensor.h"
#include "mode.h"

IntervalTimer timer0;
int startTimerValue0 = 0;

Communication* network;


void setup() {
  // put your setup code here, to run once:

  network = new Communication();

  startTimerValue0 = timer0.begin(task_10ms, T1S);

}

void loop() {
  // put your main code here, to run repeatedly:

}

void task_10ms() {
  network->receive();
}

