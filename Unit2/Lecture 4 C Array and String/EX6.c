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
	char ch, c[100];
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(c);
	printf("Enter character to find frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &ch);
	for (i = 0; c[i] != '\0'; ++i)
	{
		if(c[i] == ch)
			++count;
	}
	printf("Frequency of %c = %d", ch,count);
	return 0;
}
