/*
 * EX1.c
 *
 *  Created on: 16 Feb 2023
 *      Author: Cattoocule
 */


#include <stdio.h>

int main()
{
	int i =0, a[20],size,number;
	printf("Enter number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &size);
	printf("Enter the values: ");
	for(i=0; i<size; i++)
	{
	fflush(stdin); fflush(stdout);
	scanf("%d", &a[i]);
	}
	printf("Enter the element to be searched: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &number);
	i = 0;
	while(i <size && number != a[i])
		i++;
	if (i  < size)
		printf("Number found in location:  %d", i+1);
	else
		printf("Number not found ");
	return 0;

}
