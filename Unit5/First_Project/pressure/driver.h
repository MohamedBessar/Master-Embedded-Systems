/*
 * driver.h
 *
 *  Created on: 17 Aug 2023
 *      Author: Cattoocule
 */

#ifndef DRIVER_H_
#define DRIVER_H_

#include "stdint.h"
#include "stdio.h"

#define SET_BIT(ADDRESS, BIT) (ADDRESS |= (1<<BIT))
#define TOGGLE_BIT(ADDRESS, BIT) ((ADDRESS) ^= (1<<BIT))
#define RESET_BIT(ADDRESS, BIT) ((ADDRESS) &= ~(1<<BIT))
#define READ_BIT(ADDRESS, BIT) ((ADDRESS) & (1<<(BIT)))

#define GPIO_PORTA 0x40010800
#define BASE_RCC 0x40021000

#define APB2ENR *(volatile uint32_t *)(BASE_RCC + 0x18)

#define GPIO_CRL *(volatile uint32_t *)(GPIO_PORTA + 0x00)
#define GPIO_CRH *(volatile uint32_t *)(GPIO_PORTA + 0x04)
#define GPIO_IDR *(volatile uint32_t *)(GPIO_PORTA + 0x08)
#define GPIO_ODR *(volatile uint32_t *)(GPIO_PORTA + 0x0C)


void Delay(int n);
int getPressureVal();
void set_Alarm_Acuator(int i);
void GPIO_Init();


#endif /* DRIVER_H_ */
