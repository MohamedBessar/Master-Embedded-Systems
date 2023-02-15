/*
 * HW1-EX4.c
 *
 *  Created on: 15 Feb 2023
 *      Author: Cattoocule
 */

#include <stdio.h>

int main()
{
	float x,y;
	printf("##########Console-output###\n");
	printf("Enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&x, &y);
	printf("Product: %f", x * y);
	printf("\n###########################");
}
