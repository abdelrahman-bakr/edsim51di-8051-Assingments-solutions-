
#include "ADC.h"


unsigned char adcConvert(){
	
 unsigned char adcData = 0x00;
    ADC_INTR = HIGH;
    ADC_READ  = HIGH;
    ADC_WRITE = HIGH;

	 //Conversion Start
    ADC_WRITE = LOW;
   Timer0_Delay_ms(50);
    ADC_WRITE = HIGH;
	 while(ADC_INTR==HIGH)
    {
        //empty
    }
		 Timer0_Delay_ms(50);
		
		 //Read Adc data
    ADC_READ = LOW;
    adcData = ADC_DATA; 
		
		 return(adcData);
		
		
}

void adcPrintValue(unsigned char adcData){
	
		int i = 0 ; 
	  int j = 0 ; 
	  unsigned char adcValueByte[10] = {0};
    unsigned char tmpAdcData = adcData;
		
		 while(tmpAdcData > 0)
    {
        adcValueByte[i++]=tmpAdcData%10;
        tmpAdcData =tmpAdcData/10;
    }
		for(j= (i-1); j>=0; --j)
    {
		 Write_char( adcValueByte[j] + 48 );
    }

}
