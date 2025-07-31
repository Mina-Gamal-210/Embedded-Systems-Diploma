#include "UART.h"
#include "Platform_Types.h"

#define UART0_Base  0x101f1000

#define UART0DR   *( (vuint32_t *)(UART0_Base + 0x00) )  



void UART0_Send(uint8_t tx_data[])
{
	uint32_t i=0;

	while(tx_data[i])
	{ 
		UART0DR = (uint32_t)tx_data[i];
		i++;
	}

} 
