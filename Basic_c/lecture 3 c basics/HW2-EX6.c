/*
 * HW2-EX3.c
 *
 *  Created on: 15 Feb 2023
 *      Author: Cattoocule
 */

#include <stdio.h>

int main()
{
	int a, c = 1, sum =0;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &a);
	while (c <=a)
	{
		sum += c++;
	}
	printf("Sum = %d", sum);
	return 0;
}
