#ifndef ADC_DRIVER 
#define ADC_DRIVER 


#include <reg52.h>
#include <stdio.h> 
#include "Timer.h"
#include "UART.h"


// Adc
#define ADC_DATA P2

sbit ADC_READ=P3^7;
sbit ADC_WRITE=P3^6;
sbit ADC_INTR=P3^2;

#define HIGH 1 
#define LOW  0 



/*************************************************************************/ 
//			Functions prototypes 
/************************************************************************/			
unsigned char adcConvert();
void adcPrintValue(unsigned char adcData);






#endif
