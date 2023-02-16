/*
 * EX1.c
 *
 *  Created on: 16 Feb 2023
 *      Author: Cattoocule
 */


#include <stdio.h>

int main()
{
	int a[20],i,element,num,location;
	printf("Enter number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);
	for (i=0;i<num;i++)
	{
		printf("Enter a%d: ", i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d", &a[i]);
	}

	printf("Enter the number to be inserted: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &element);
	printf("Enter the location of element: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &location);

	for (i=num; i>=location; i--)
	{
		a[i] = a[i - 1];
	}
	++num;
	a[location - 1] = element;

	for (i=0;i<num;i++)
	{
		printf(" %d", a[i]);
	}
	return 0;

}
