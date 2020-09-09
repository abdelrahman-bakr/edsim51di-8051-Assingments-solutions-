#ifndef MORSE
#define MORSE 


#include <reg52.h>
#include <stdio.h> 
#include "Timer.h"

sbit MORSE_LED  = P1^0  ;
#define LED_ON  0 
#define LED_OFF 1 

#define MORSE_DOT_TIME 100 
#define MORSE_DASH_TIME 300 

#define MORSE_BETWEEN_PART_OF_SAME_LETTER_TIME 100 
#define MORSE_BETWEEN_TWO_LETTER_TIME 300  



void Blink_A_Dot();
void Blink_A_Dash();
void Morse_Code(int number);


#endif
