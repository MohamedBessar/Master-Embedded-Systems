/*
 * EX1.c
 *
 *  Created on: 16 Feb 2023
 *      Author: Cattoocule
 */


#include <stdio.h>

int main()
{
	int a[10][10], trans[10][10], i,j,b,c;
	printf("Enter rows and columns of the matrix: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &b,&c);

	for (i = 0; i<b; ++i)
		for (j = 0; j<c; ++j)
		{
			printf("Enter element %d %d of matrix: ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%d", &a[i][j]);
		}
	printf("The entered matrix: \n");
	for (i = 0; i<b; ++i)
		for (j = 0; j<c; ++j)
		{
			printf("%d  ",a[i][j]);
			if (j == c-1)
				printf("\n\n");
		}
	for (i = 0; i<b; ++i)
		for (j = 0; j<c; ++j)
		{
			trans[j][i] = a[i][j];
		}
	for (i = 0; i<c; ++i)
		for (j = 0; j<b; ++j)
		{
			printf("%d  ",trans[i][j]);
			if (j == b-1)
				printf("\n\n");
		}
	return 0;

}
