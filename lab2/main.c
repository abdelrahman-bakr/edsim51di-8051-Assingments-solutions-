

#include "Timer.h"
#include "ADC.h"
#include "UART.h" 


///  crystal of 11.0592 MHz and 19200 baudrate 
/// Note When ADC is 0000 0000 there is an error other wise all values upto 255 displayed correctly 

int main(void){
	
 	unsigned char adcData  = 0x00; 
	UART_init();
	Write_String("everything is working fine \n");

	
	while (1) { 
		
			Timer0_Delay_ms(100);  // wait for 100 ms period 
		   adcData = adcConvert();  // make a conversion 
  		 adcPrintValue(adcData); // print the converted value 
	  	 Write_char('\n');			// new line 
	 	  
		
	
	}
	
	
return 1 ; 
}




