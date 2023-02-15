/*
 * HW2-EX3.c
 *
 *  Created on: 15 Feb 2023
 *      Author: Cattoocule
 */

#include <stdio.h>

int main()
{
	int a, c = 1, factorial =1;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &a);
	if(a >0)
	{
	while (c <=a)
	{
		factorial  = factorial * c++;
	}
		printf("Factorial = %d", factorial);
	}
	else if (a == 0)
		printf("Factorial = %d", factorial);
	else
		printf("Error!!! Factorial of negative number doesn't exist.");
	return 0;
}
