/*
 * HW2-EX1.c
 *
 *  Created on: 15 Feb 2023
 *      Author: Cattoocule
 */

#include <stdio.h>

int main()
{
	int a;
	printf("Enter an integer number you want to check: ");
	fflush(stdin); fflush(stdin);
	scanf("%d", &a);
	if (a % 2 == 0)
		printf("%d is even.", a);
	else
		printf("%d is odd.", a);
	return 0;
}
