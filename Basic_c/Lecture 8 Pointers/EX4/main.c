// Mohamed Bessar
// Pointers print elements of array with inverse


#include "stdio.h"

int main()
{
	int array[15];
	int* ptr = array;
	int num;
	printf("Input the number of elements to store in the array (max 15) : ");
	scanf("%d", &num);
	printf("Input %d elements in the array: ", num);
	for (int i = 0; i < num; i++)
	{
		printf("Element - %d : ",i);
		scanf("%d", ptr);
		ptr++;
	}
	for (int i = num; i > 0; i--)
	{
		printf("\nElement - %d : %d",i, *ptr);
		ptr--;
	}
	return 0;
}
