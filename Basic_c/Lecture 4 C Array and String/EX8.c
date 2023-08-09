/*
 * EX1.c
 *
 *  Created on: 16 Feb 2023
 *      Author: Cattoocule
 */


#include <stdio.h>
#include <string.h>

int main()
{
	int i=0, j =0;
	char c[100], tmp;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(c);
	j = strlen(c) - 1;
	while (i <j)
	{
		tmp = c[i];
		c[i] = c[j];
		c[j] = tmp;
		j--;
		i++;
	}


	printf("Reverse string is: %s", c);
	return 0;
}
