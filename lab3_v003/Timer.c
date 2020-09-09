
#include "Timer.h"

void Timer0_Delay_1ms(void){

	TMOD |= 0x01 ; 
	TL0 = 0x65 ;
	TH0 = 0xFC ; 
	TR0=1;                  // Start timer
	while (TF0 != 1 ){}

}
void Timer0_Delay_ms(int time){

	int i = 0 ; 
	 for( i = 0 ; i <  time ; i++){
		 
		Timer0_Delay_1ms();	
		 
	 }

}