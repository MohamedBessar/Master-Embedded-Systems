/*
 * EX1.c
 *
 *  Created on: 16 Feb 2023
 *      Author: Cattoocule
 */


#include <stdio.h>

int main()
{
	int i, count =0;
	char c[100];
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(c);
	for (i = 0; c[i] != '\0'; ++i)
	{
			++count;
	}
	printf("Length of string is: %d", count);
	return 0;
}
