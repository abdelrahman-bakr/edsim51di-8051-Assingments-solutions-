#ifndef UART_DRIVER 
#define UART_DRIVER 


#include <reg52.h>
#include <stdio.h> 



#define RX_BUFFER_SIZE 64 

/*************************************************************************/ 
//			Functions prototypes 
/************************************************************************/			
unsigned char read_char(); 
void Write_char(unsigned char character);
void Write_String(char *str); 
void Read_String(char * rxBuffer);

void UART_Init(); 






#endif
