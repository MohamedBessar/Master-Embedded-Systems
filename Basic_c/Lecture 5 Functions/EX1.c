/*
 * main.c
 *
 *  Created on: 17 Feb 2023
 *      Author: Cattoocule
 */

#include <stdio.h>
int prime_check(int num);
int main()
{
	int n1,n2,i,flag;
	printf("Enter two numbers(intervals): ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&n1,&n2);
	printf("Prime numbers between %d and %d are: ",n1,n2);
	for (i=n1+1;i<n2;++i)
	{
		flag=prime_check(i);
		if(flag==0)
			printf("%d ",i);
	}

	return 0;
}
int prime_check(int num)
{
	int j,flag=0;
	for(j=2;j<=num/2;++j)
	{
		if(num%j==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}
