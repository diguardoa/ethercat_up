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
#include "DMAChannel.h"
#include "ADC.h" 

IntervalTimer timer0;
int startTimerValue0 = 0;

Communication* network;
Motor* motor;
Logic* logic;

// ADC and DMA variables
const uint16_t ChannelsCfg_0 [] =  {0x4E, 0x4C, 0x46, 0x45};
/* 
 * CH0 - 0x45 - A0 
 * CH1 - 0x4E - A1
 * CH2 - 0x4C - A5
 * CH3 - 0x46 - A6
 */

ADC *adc = new ADC();
DMAChannel* dma0 = new DMAChannel(false);
DMAChannel* dma1 = new DMAChannel(false);
DMAMEM static volatile uint16_t adcbuffer_0[ADC_N];
int dma0_cycles = 0;


void setup() {
  // put your setup code here, to run once:

  network = new Communication();
  motor = new Motor(PIN_M_A,PIN_M_B);
  logic = new Logic(adcbuffer_0,motor);
  
  setup_adc();
  setup_dma();
  startTimerValue0 = timer0.begin(task_10ms, T10MS);


}

void loop() {
  // put your main code here, to run repeatedly:

}

void task_10ms() {
  network->receive();
  network->send(adcbuffer_0,ADC_N);

  logic->step(network->getMode(),network->getData());
}


void setup_adc() {
  //ADC0
  adc->setAveraging(8, ADC_0); // set number of averages
  adc->adc0->setResolution(12); // set bits of resolution
  adc->setConversionSpeed(ADC_CONVERSION_SPEED::HIGH_SPEED, ADC_0); // change the conversion speed 
  adc->setSamplingSpeed(ADC_SAMPLING_SPEED::HIGH_SPEED, ADC_0); // change the sampling speed
  //adc->adc0->setReference(ADC_REF_1V2);
  
  adc->adc0->enableDMA(); //ADC0_SC2 |= ADC_SC2_DMAEN;  // using software trigger, ie writing to ADC0_SC1A
  
} 

void setup_dma() {
  dma0->begin(true);              // allocate the DMA channel 
  // TCD is the Transfer Control Descriptors. It defines the behaviour of one DMA channel.
  dma0->TCD->SADDR = &ADC0_RA;    //SOURCE ADDRESS: where to read from
  dma0->TCD->SOFF = 0;            //SIGNED SOURCE ADDRESS OFFSET: source increment each transfer
  dma0->TCD->ATTR = 0x101;        //TRANSFER ATTRIBUTE (smod | ssize | dmod | dsize)
  dma0->TCD->NBYTES = 2;          //INNER MINOR BYTE COUNT bytes per transfer
  dma0->TCD->SLAST = 0;           //Last Source Address Adjustment
  dma0->TCD->DADDR = &adcbuffer_0[0];//Destination Address, where to write to
  dma0->TCD->DOFF = 2;               //Signed Destination Address Offset (soff?)
  dma0->TCD->DLASTSGA = -2*ADC_N;//BUF_SIZE; //Last Destination Address Adjustment/Scatter Gather Address
  dma0->TCD->BITER = ADC_N;//BUF_SIZE;       //Beginning Major Iteration Count
  dma0->TCD->CITER = ADC_N;//BUF_SIZE;       //Current 'Major' Iteration Count 

  dma0->triggerAtHardwareEvent(DMAMUX_SOURCE_ADC0); // Starts dma0 when ADC0 gets a value
  dma0->disableOnCompletion();    // require restart in code
  dma0->interruptAtCompletion();
  dma0->attachInterrupt(dma0_isr);
  

/*dma0->triggerAtTransfersOf(*dma1);
  dma0->triggerAtCompletionOf(*dma1);
*/
  
  dma1->begin(true);              // allocate the DMA channel 
  /*
   * The following code says that:
   * - start reading from the beginning of the list that contains analog input where to read
   * - each time it runs, increment by two bytes the pointer, i.e. read the next uint16_t pin address in the list
   * - the fist cycle read 8 pins (BITER) and the others always 8 pins (CITER)
   * - when i finish, turn back of 16 bytes (start from the beginning)
   * - every time pass the 2 byte pin (NBYTES) you want to read always (DOFF) to ADC0 (DADDR)
   * - this dma starts when dma0 finish to trasnfer or complete (so it starts always after dma0)
   */
  dma1->TCD->SADDR = &ChannelsCfg_0[0];
  dma1->TCD->SOFF = 2;            
  dma1->TCD->ATTR = 0x101;
  dma1->TCD->SLAST = -2*ADC_N;
  dma1->TCD->BITER = ADC_N;
  dma1->TCD->CITER = ADC_N;
  dma1->TCD->DADDR = &ADC0_SC1A;
  dma1->TCD->DLASTSGA = 0;
  dma1->TCD->NBYTES = 2;
  dma1->TCD->DOFF = 0;
  dma1->triggerAtTransfersOf(*dma0);
  dma1->triggerAtCompletionOf(*dma0);

  dma0->enable();
  dma1->enable();
}

void dma0_isr(void) {
    dma0->TCD->DADDR = &adcbuffer_0[0];
    dma0->clearInterrupt();
    dma0->enable();
    dma0_cycles++;
    // why? try without
    /*
    digitalWriteFast(4, HIGH);
    digitalWriteFast(4, LOW);
    */
}
