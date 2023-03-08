/*
 * main.c
 *
 *  Created on: 8 Mar 2023
 *      Author: Cattoocule
 */

#include<stdio.h>
struct complex{
	float real;
	float imaginary;
}n1,n2,sum;

int main()
{
	printf("For 1st complex number: ");
	printf("\nEnter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f %f",&n1.real, &n1.imaginary);
	printf("For 2nd number:");
	printf("\nEnter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f %f",&n2.real, &n2.imaginary);
	sum.real = n1.real + n2.real;
	sum.imaginary = n1.imaginary + n2.imaginary;
	printf("Sum = %.1f + %.1fi",sum.real, sum.imaginary);
	return 0;
}
