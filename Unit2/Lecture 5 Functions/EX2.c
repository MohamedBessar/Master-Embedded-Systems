/*
 * main.c
 *
 *  Created on: 17 Feb 2023
 *      Author: Cattoocule
 */

#include <stdio.h>
int factorial(int n);
int main()
{
	int num;
	printf("Enter positive number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);
	printf("Factorial of %d = %ld",num, factorial(num));
	return 0;
}
int factorial(int n)
{
	if (n !=1)
		return n*factorial(n-1);
}
