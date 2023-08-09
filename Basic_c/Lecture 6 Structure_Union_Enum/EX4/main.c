/*
 * main.c
 *
 *  Created on: 8 Mar 2023
 *      Author: Cattoocule
 */


#include<stdio.h>
#include<string.h>
struct student{
	char name[50];
	int roll;
	float mark;
}s[10];
int main()
{
	int i;
	printf("Enter information of students:");
	for(i = 0; i<10;++i)
	{
		s[i].roll = i+1;
		printf("\nFor roll number %d\n",s[i].roll);
		printf("Enter name: ");
		fflush(stdout);
		scanf("%s", s[i].name);
		printf("Enter mark: ");
		fflush(stdout);
		scanf("%f", &s[i].mark);
	}
	printf("Displaying information of students:\n");
	for(i=0;i<10; ++i)
	{
		printf("\nInformation for roll number %d",i+1);
		printf("\nName: ");
		puts(s[i].name);
		printf("\nMarks: %f", s[i].mark);
	}
	return 0;
}
