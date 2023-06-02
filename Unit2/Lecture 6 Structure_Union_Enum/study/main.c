/*
 * main.c
 *
 *  Created on: 29 Mar 2023
 *      Author: Cattoocule
 */


#include <stdio.h>

struct sdataset {
	unsigned char data1;
	unsigned int data2;
	unsigned char data3;
	unsigned short data4
}data;

void (*GP_func) (char* base, int size);
void print_memory_range(char* base, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("%p \t %x\n", base, (unsigned char)*base);
		base++;
	}
}

int main()
{
	data.data1 = 0x11;
	data.data2 = 0xFFFFEEEE;
	data.data3 = 0x22;
	data.data4 = 0xABCD;
	GP_func = print_memory_range;
	GP_func(&data, sizeof(data));

	return 0;

}
