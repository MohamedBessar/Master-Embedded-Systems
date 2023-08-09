/*
 * main.c
 *
 *  Created on: 17 Feb 2023
 *      Author: Cattoocule
 */

#include <stdio.h>
void Reverse();
int main()
{
	printf("Enter a sentence: ");
	Reverse();
	return 0;
}
void Reverse()
{
	char c;
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	if (c != '\n')
	{
		Reverse();
		printf("%c",c);
	}
}
