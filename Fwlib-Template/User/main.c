#include "stm32f10x.h"   // 相当于51单片机中的  #include <reg51.h>
#include "./led/bsp_led.h"
#include "./key/bsp_key.h"

void delay(uint32_t count)
{
  for(;count!=0;count--);
}
int main(void)
{
	// 来到这里的时候，系统的时钟已经被配置成72M。
	LED_GPIO_Config();
	KEY_GPIO_Config();
	
	while(1)	
	{
	  if(KEY_scan(KEY1_GPIO_PORT, KEY1_GPIO_PIN) == KEY_ON )
		{
		  LED1_TOGGLE;
		}
		if(KEY_scan(KEY2_GPIO_PORT, KEY2_GPIO_PIN) == KEY_ON )
		{
		   LED2_TOGGLE;
		}
	}	
}