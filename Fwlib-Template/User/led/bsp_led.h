#ifndef _BSP_LED_H
#define _BSP_LED_H

  #include "stm32f10x.h" 
	
	#define LED1_GPIO_CLK    RCC_APB2Periph_GPIOB
	#define LED1_GPIO_PORT   GPIOB
	#define LED1_GPIO_PIN    GPIO_Pin_0
	
	#define LED2_GPIO_CLK    RCC_APB2Periph_GPIOB
	#define LED2_GPIO_PORT   GPIOB
	#define LED2_GPIO_PIN    GPIO_Pin_1
	
	#define LED3_GPIO_CLK    RCC_APB2Periph_GPIOB
	#define LED3_GPIO_PORT   GPIOB
	#define LED3_GPIO_PIN    GPIO_Pin_5
	
	
void LED_GPIO_Config(void);

#define digitalTOGGLE(p,i) {p->ODR ^= i;}
#define  LED1_TOGGLE   digitalTOGGLE(LED1_GPIO_PORT,LED1_GPIO_PIN)
#define  LED2_TOGGLE   digitalTOGGLE(LED2_GPIO_PORT,LED2_GPIO_PIN)


#endif

	