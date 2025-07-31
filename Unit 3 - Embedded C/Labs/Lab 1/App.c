#include "UART.h"
#include "Platform_Types.h"


uint8_t String[100] = "Learn-in-Depth: < Mina Gamal >";

int main()
{
	
	UART0_Send(String);

	return 0;
}