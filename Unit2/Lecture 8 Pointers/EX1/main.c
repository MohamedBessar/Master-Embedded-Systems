// Mohamed Bessar
// Pointer Assignment


#include "stdio.h"

int main()
{
	int m = 29;
	printf("Address of m : %x\n", &m);
	printf("Value of m is : %d\n", m);
	printf("\n");
	int* ab = &m;
	printf("now ab is assigned with the address of m.");
	printf("Address of pointer ab is : %x\n", ab);
	printf("Content of pointer ab is : %d\n", *ab);
	printf("\n");

	m = 34;
	printf("The value of m is assigned to %d now.", m);
	printf("Address of pointer ab is : %x\n", ab);
	printf("Content of pointer ab is : %d\n", *ab);
	printf("\n");

	*ab = 7;
	printf("The pointer variable ab is assigned with the value 7 now.");
	printf("Address m is : %x\n", &m);
	printf("Value m is : %d\n", m);
	return 0;
}
