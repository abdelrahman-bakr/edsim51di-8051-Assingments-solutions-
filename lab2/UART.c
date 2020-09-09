#include "UART.h"

void UART_Init(){
				SCON=0x50;              // Configure serial control register
				PCON=0x80;              // SMOD bit set
				TMOD=0x20;              // Using timer1,8-bit reload mode for baudrate generation
				TH1=0xFD;               // 9600 baudrate(16 mhz clock)
				TR1=1;                  // Start timer
}

unsigned char read_char(){
	
				unsigned char character;
				while(!RI);                           // Wait until character received completely
				character=SBUF;                       // Read the character from buffer reg
				RI=0;                                 // Clear the flag
				return character;                     // Return the received character
	
}
void Write_char(unsigned char character){
	
				SBUF=character;      // Load the character to be transmitted in to the buffer reg
				while(!TI);          // Wait until transmission complete
				TI=0;                // Clear flag
}

void Write_String(char *str)
{
	
				int i;
				for(i=0;str[i]!=0;i++)	/* Send each char of string till the NULL */
				{
					Write_char(str[i]);	/* Call transmit data function */
				}
}	

void Read_String(char * rxBuffer){
	
	int index =0 ; 
	
			
				
			  

}