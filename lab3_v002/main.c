#include "UART.h"
#include "Timer.h"
#include "Morse.h"

	

int main(void){
	unsigned char buffer[BUFFER_SIZE] ; 
	unsigned char number , index = 0  ; 
	MORSE_LED = LED_OFF ; 
		
	UART_init(); 
	
	
	while(1){
		
		Write_String("please enter a string \n");			// tell the user to enter a number 
	  gets_UART(buffer);			// read the string  
			
		
		
		
		while(buffer[index] != '\0'){ 		// loop on the read string elemnt by element 
				
			  number = buffer[index]; 
			
			if( (number < 48) || (number > 57)  ){
	
				Write_String("next char is  ");
				Write_char(number);	
				Write_String(" \nthis char is not numerical so ignored\n");
				index ++ ; 
			}
			else{
						Write_String("next char is  ");
						Write_char(number);		
						Write_String(" and will be sent now \n");				// start of sending a number 		
					
						Morse_Code(number - 48);									// convert from ascii to decimal and initiate the sequence 
						Timer0_Delay_ms(MORSE_BETWEEN_TWO_LETTER_TIME);	// wait for time between letters 
					
						Write_String("done sending Number \t");				// verify that 	the number is sent 		
						Write_char(number);																					// tell which number is sent 
						Write_char('\n');					// print new line  
				
				index ++ ;  // increamnet index to go to next number 
			
			}
			
				
		}
	
				
							Write_String("done sending numbers in the string \n");				// verify that 	the number is sent 		
							Timer0_Delay_ms(100);
							index = 0 ;   // reset index to 0 for a new string 				
																					
		
		
		
	}

}


