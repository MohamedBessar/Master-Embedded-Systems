/*
 * main.c
 *
 *  Created on: 8 Mar 2023
 *      Author: Cattoocule
 */

#include<stdio.h>

struct student{
		char name[50];
		int roll;
		float marks;
	};

int main()
{
	struct student s;
	printf("Enter information of student:");
	printf("\nEnter name: ");
	fflush(stdout);
	scanf("%s", s.name);
	printf("Enter roll: ");
	fflush(stdout);
	scanf("%d", &s.roll);
	printf("Enter marks: ");
	fflush(stdout);
	scanf("%f", &s.marks);
	printf("\nDisplaying information of student: ");
	printf("\nName: %s",s.name);
	printf("\nRoll: %d",s.roll);
	printf("\nMarks: %f",s.marks);
	return 0;
}

