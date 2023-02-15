/*
 * print-assignment2.c
 *
 *  Created on: 15 Feb 2023
 *      Author: Cattoocule
 */


#include <stdio.h>

int main()
{
	int a = 0;
	printf("##########Console-output###\n");
	printf("Enter a integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &a);
	printf("You entered: %d\n", a);
	printf("###########################");
	return 0;
}
