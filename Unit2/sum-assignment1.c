/*
 * sum-assignment1.c
 *
 *  Created on: 15 Feb 2023
 *      Author: Cattoocule
 */

#include <stdio.h>

int main()
{
	int x = 0, y = 0;
	printf("##########Console-output###\n");
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &x, &y);
	printf("Sum: %d", x + y);
	printf("\n###########################");
	return 0;
}
