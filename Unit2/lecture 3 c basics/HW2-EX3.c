/*
 * HW2-EX3.c
 *
 *  Created on: 15 Feb 2023
 *      Author: Cattoocule
 */

#include <stdio.h>

int main()
{
	float a,b,c;
	printf("Enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f", &a, &b, &c);
	if (a > b && a > c)
		printf("\nLargest number = %f", a);
	else if (b > a && b > c)
		printf("\nLargest number = %f", b);
	else
		printf("\nLargest number = %f", c);
	return 0;
}
