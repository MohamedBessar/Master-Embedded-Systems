/*
 * HW1-EX4.c
 *
 *  Created on: 15 Feb 2023
 *      Author: Cattoocule
 */

#include <stdio.h>

int main()
{
	char x;
	printf("##########Console-output###\n");
	printf("Enter two character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);
	printf("ASCII value of %c = %d", x, x);
	printf("\n###########################");
}
