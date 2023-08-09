// Mohamed Bessar
// Pointer EX3: Reverse the string with pointer
#include "stdio.h"
#include "string.h"

int main()
{
	char array[] = "w3resource";
	char* ptr;
	int i;
	ptr = array;
	fflush(stdout);fflush(stdin);
	printf("Pointer : Print a string in reverse order :\n");
	printf("-------------------------------------- \n");
	printf("Input string: ");
	while(*ptr != '\0')
	{
		printf("%c", *ptr);
		ptr++;
	}
	fflush(stdout);fflush(stdin);
	printf("\nReverse String: ");
	for(i = 0; i < sizeof(array); i++)
	{
		printf("%c", *ptr);
		ptr--;
	}
	return 0;
}
