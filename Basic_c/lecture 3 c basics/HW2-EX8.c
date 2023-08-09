/*
 * HW2-EX3.c
 *
 *  Created on: 15 Feb 2023
 *      Author: Cattoocule
 */

#include <stdio.h>

int main()
{
	float a, b;
	char operator;
	printf("Enter operator either + or - or * or /: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &operator);
	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &a, &b);
	if (operator == '+')
		printf("%f + %f = %f", a,b,a+b);
	else if (operator == '-')
			printf("%f - %f = %f", a,b,a-b);
	else if (operator == '*')
				printf("%f * %f = %f", a,b,a*b);
	else if (operator == '/')
				printf("%f / %f = %f", a,b,a/b);

	return 0;
}
