
#include "Morse.h"


void Morse_Code(int number){
	
	switch (number){
			
		case 0:  // 0 is four dashes 
			Blink_A_Dash();
							Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
			Blink_A_Dash();
							Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
			Blink_A_Dash();
							Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
			Blink_A_Dash();
							Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
			break ; 
		
		case 1 :  /// 1 is dot then four dashes 
				Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
		  	Blink_A_Dash();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
				Blink_A_Dash();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
				Blink_A_Dash();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
				Blink_A_Dash();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
			break ; 
		
		case 2 :  // 2 is two dots then 3 dashes 
				Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
				Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
			  Blink_A_Dash();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
				Blink_A_Dash();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
				Blink_A_Dash();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
		
		
			break ; 
		
		case 3: /// 3 is three dots then two dashes 
		   	Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
				Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
			  Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
			 Blink_A_Dash();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
				Blink_A_Dash();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
			
			
			break ; 
		case 4:  /// 4 is four dots then 1 dash 
		Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
		Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
		Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
		Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
		Blink_A_Dash();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
			
			
			break ; 
		case 5: /// 5 is five dots 
		Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
		Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
		Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
		Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
		Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
			break ; 
		case 6: /// 6 is one dash then four dots 
			Blink_A_Dash();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
			Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
		Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
		Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
		Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
			break ; 
		case 7:  /// 7 is two dashes then three dots 
			Blink_A_Dash();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
		Blink_A_Dash();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
			Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
		Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
		Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
		
			break ; 
		case 8 : 	///  8 is three dahses then two dots 
				Blink_A_Dash();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
			Blink_A_Dash();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
			Blink_A_Dash();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
			Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
		Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
		
			break ; 
		case 9 : /// 9 is four dashes then one dot 
				Blink_A_Dash();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
			Blink_A_Dash();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
			Blink_A_Dash();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
			Blink_A_Dash();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
		Blink_A_Dot();
								Timer0_Delay_ms(MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME);
		
			break ;
	  	 default:
			break ;
		
	}

}

void Blink_A_Dot(){
		
	MORSE_LED = LED_ON ; 
	Timer0_Delay_ms(MORSE_DOT_TIME);
	MORSE_LED = LED_OFF ; 
	Timer0_Delay_ms(MORSE_DOT_TIME);


}
void Blink_A_Dash(){

	MORSE_LED = LED_ON ; 
	Timer0_Delay_ms(MORSE_DASH_TIME);
	MORSE_LED = LED_OFF ; 
Timer0_Delay_ms(MORSE_DASH_TIME);
}