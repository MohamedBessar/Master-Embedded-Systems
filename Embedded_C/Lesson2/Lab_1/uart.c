
#include "uart.h"

#define UAR0DR *((volatile unsigned int*)((unsigned int*)0x101f1000))

void Uart_Send_String(unsigned char* p_tx_string)
{
	while(*p_tx_string != '\0') // loop untill end of string
	{
		UAR0DR = (unsigned int)(*p_tx_string); //Transmit char to UART register
		p_tx_string++; // Next character
	}
}