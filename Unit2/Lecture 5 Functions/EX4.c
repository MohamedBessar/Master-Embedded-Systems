/*
 * main.c
 *
 *  Created on: 17 Feb 2023
 *      Author: Cattoocule
 */

#include <stdio.h>
int Power(int number, int power);
int main()
{
	int num, power;
	printf("Enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);
	printf("Enter power number(positive number): ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &power);
	printf("%d ^ %d = %d",num,power,Power(num,power));
	return 0;
}
int Power(int number, int power)
{

	if (power != 0)
		return (number*Power(number, power-1));

	else
		return 1;
}
