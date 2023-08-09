#include "uart.h"

unsigned char string_buffer[100] = "learn_in_depth: MohamedBessar";

void main(void)
{
	Uart_Send_String(string_buffer);
} 