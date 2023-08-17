/*
 * driver.c
 *
 *  Created on: 17 Aug 2023
 *      Author: Cattoocule
 */

#include "driver.h"

void Delay(int n)
{
	for(; n != 0; n--);
}

void set_Alarm_Acuator(int i)
{
	if (i == 1)
		SET_BIT(GPIO_ODR, 13);
	else if (i == 0)
		RESET_BIT(GPIO_ODR, 13);
}

int getPressureVal()
{
	return (GPIO_IDR & 0xFF);
}

void GPIO_Init()
{
	SET_BIT(APB2ENR, 2);
	GPIO_CRL &= 0xFF0FFFFF;
	GPIO_CRL |= 0x00000000;
	GPIO_CRH &= 0xFF0FFFFF;
	GPIO_CRH |= 0x22222222;
}
