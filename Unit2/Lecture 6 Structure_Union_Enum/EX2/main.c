/*
 * main.c
 *
 *  Created on: 8 Mar 2023
 *      Author: Cattoocule
 */


#include<stdio.h>

struct distance{
	int feet;
	float inch;
}s1,s2,sum;
int main()
{
	printf("Enter information for first distance: ");
	printf("\nEnter feet: ");
	fflush(stdout);
	scanf("%d", &s1.feet);
	printf("Enter inches: ");
	fflush(stdout);
	scanf("%f", &s1.inch);
	printf("Enter information for second distance: ");
	printf("\nEnter feet: ");
	fflush(stdout);
	scanf("%d", &s2.feet);
	printf("Enter inches: ");
	fflush(stdout);
	scanf("%f", &s2.inch);
	sum.feet = s1.feet + s2.feet;
	sum.inch = s1.inch + s2.inch;

	if(sum.inch > 12){
		sum.inch -= 12;
		++sum.feet;
	}
	printf("Sum of distances = %d \'-%.1f\"",sum.feet, sum.inch);
	return 0;
}
