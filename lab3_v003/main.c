#include "UART.h"
#include "Timer.h"
#include "Morse.h"
#include <string.h> // memcpy



// global variable 
volatile int state = 0 ; 
volatile int index_isr = 0 ; 
volatile unsigned char check_isr ; 
unsigned char buffer_isr[BUFFER_SIZE] ; 


	void ser_intr(void)interrupt 4        //Subroutine for Interrupt
 {
	char c;
  c=SBUF;  
  IE=0x00; 	 //Turning off interrupt to prevent recursion
	 
	 buffer_isr[index_isr] = c; 
	 index_isr++ ; 
	 check_isr =  buffer_isr[index_isr]  ; 
	 if((check_isr != '\n')&&(check_isr != '\r')){
		 
		 buffer_isr[index_isr] = '\0'; 
		 state =1 ; 
		 index_isr = 0 ;
	
	 }else{
		state = 0 ; 
	 }
	 
  IE=0x90;                            //Reactivating the interrupt
 }

int main(void){
	unsigned char buffer[BUFFER_SIZE] ; 
	unsigned char number , index = 0  ; 
	MORSE_LED = LED_OFF ; 
		
	UART_init(); 
	
	
	while(1){
		
		Write_String("please enter a string \n");			// tell the user to enter a number 
	  gets_UART(buffer);			// read the string  
			

		
	while(buffer[index] != '\0'  ){ 		// loop on the read string elemnt by element 
		
				state = 0 ; 	// if an interrupt happen to set  it to 1 we will handle it right after finishing flashing the current char 
				number = buffer[index];  // read the number 
			
			if( (number < 48) || (number > 57)  ){   // check if it is numerical 
	
				Write_String("next char is  ");
				Write_char(number);	
				Write_String(" \nthis char is not numerical so ignored\n");
				index ++ ; 
			}
			else{
						Write_String("next char is  ");				// start of sending a number 		
						Write_char(number);		
						Write_String(" and will be sent now \n");			
					
						Morse_Code(number - 48);									// convert from ascii to decimal and initiate the sequence 
						Timer0_Delay_ms(MORSE_BETWEEN_TWO_LETTER_TIME);	// wait for time between letters 
					
						Write_String("done sending Number \t");				// verify that 	the number is sent 		
						Write_char(number);																					// tell which number is sent 
						Write_char('\n');					// print new line  
				
			    	index ++ ;  // increamnet index to go to next number 
				
				if(state == 1 ){
					
					index = 0  ;   // reset index to 0 so we begin at the new string 	
					Write_String("Sequence is cancelled \nNew sequence..\n");
					memcpy(buffer,buffer_isr,BUFFER_SIZE);		// copy the string saved in interrupt subroutine to the buffer we handle 
					Timer0_Delay_ms(100);
					state =0 ;  	// reset the state to 0 
				
				}
			
			}
		
				
		}
							Write_String("done sending numbers in the string \n");				// verify that 	the number is sent 		
							Timer0_Delay_ms(100);
							index = 0 ;   // reset index to 0 for a new string 		
				
																					
		
		
		
	}

}


