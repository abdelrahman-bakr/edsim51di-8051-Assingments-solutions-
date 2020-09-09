#include "UART.h"
#include "Timer.h"
#include "Morse.h"

	

int main(void){
	unsigned char tx[BUFFER_SIZE] ; 
	unsigned char number ; 
	MORSE_LED = LED_OFF ; 
		
	UART_init(); 
	
	
	while(1){
		
		Write_String("please enter a number \n");
		number = read_char();
		Morse_Code(number - 48);
		Timer0_Delay_ms(MORSE_BETWEEN_TWO_LETTER_TIME);
		Write_String("done printing Number \t");
	  Write_char(number);	
		Write_char('\n');	
		
		
	}

}
