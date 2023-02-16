/*
 * EX1.c
 *
 *  Created on: 16 Feb 2023
 *      Author: Cattoocule
 */


#include <stdio.h>

int main()
{
	int n,i;
	float num[100], sum =0.0, average;
	printf("Enter the numbers of data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	while(n>100 || n<=0)
	{
		printf("!!! Error number should be in range (1:100)\n");
		printf("Enter the number again: ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&n);
	}
	for (i = 0; i<n; i++)
	{
		printf("%d. Enter number: ", i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &num[i]);
		sum += num[i];
	}
	average = sum/n;
	printf("Average = %.2f", average);
	return 0;
}
