#include "stm8s.h"


void GPIO_setup(void);


void main (void)
{
		
		
		GPIO_setup();
	   
		
			while(1){
				
					GPIO_WriteHigh(GPIOA,GPIO_PIN_3); //LED ON					
					delay_us(13);
					GPIO_WriteLow(GPIOA,GPIO_PIN_3); //LED OFF						
					delay_us(13);
					
			
			
	}
	
}


void GPIO_setup(void)
{
	GPIO_DeInit(GPIOB);
	GPIO_DeInit(GPIOC);
		GPIO_DeInit(GPIOA);
		
	GPIO_Init(GPIOB, GPIO_PIN_5, GPIO_MODE_OUT_PP_LOW_FAST);    //PB5 LED OUTPUT
	
	GPIO_Init(GPIOC, GPIO_PIN_4, GPIO_MODE_OUT_PP_LOW_FAST);    //PC5 LED OUTPUT
	GPIO_Init(GPIOC, GPIO_PIN_6, GPIO_MODE_IN_PU_NO_IT);    //PC6 TSOP I/P

	GPIO_Init(GPIOA, GPIO_PIN_3,  GPIO_MODE_OUT_PP_LOW_FAST);   //PA3 TR TX  O/P
	}
