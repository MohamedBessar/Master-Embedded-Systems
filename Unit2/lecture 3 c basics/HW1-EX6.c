/*
 * HW1-EX6.c
 *
 *  Created on: 15 Feb 2023
 *      Author: Cattoocule
 */


#include <stdio.h>
int main()
{
	float a, b, c;
	printf("#########Console_output######\n");
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &b);
	c = b;
	b = a;
	a = c;
	printf("After swapping, value of a = %f", a);
	printf("\nAfter swapping, value of b = %f", b);
	printf("\n#############################");
	return 0;
}
