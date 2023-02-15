/*
 * HW2-EX1.c
 *
 *  Created on: 15 Feb 2023
 *      Author: Cattoocule
 */

#include <stdio.h>

int main()
{
	char a;
	printf("Enter an alphabet: ");
	fflush(stdin); fflush(stdin);
	scanf("%c", &a);
	if (a == 'a' || a == 'A'||a == 'e'||a == 'E'||a == 'i'||a == 'I' ||a == 'o'||a == 'O'||a == 'u'||a == 'U')
		printf("%c is a vowel.", a);
	else
		printf("%c is a constant.", a);
	return 0;
}
