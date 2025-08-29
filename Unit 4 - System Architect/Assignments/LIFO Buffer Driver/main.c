#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"
#include "LIFO.h"


uint32_t Buffer1[5];  // Creating first buffer (Static Allocation)



int main()
{
	uint32_t temp;
	uint32_t UART_data = 0, I2C_data = 150; //Virtual data to test

	LIFO_Buff_t UART_Buff, I2C_Buff;

	LIFO_Init(&UART_Buff,Buffer1,sizeof(Buffer1));


	uint32_t Buffer2_size = 20;
	uint32_t * Buffer2 = (uint32_t *) malloc(Buffer2_size);  // Creating Second buffer (Dynamic Allocation)
	LIFO_Init(&I2C_Buff, Buffer2, Buffer2_size);


	printf("Pushing Data to UART LIFO: ");

	for( ; UART_Buff.count < 5 ;UART_data++)
	{
		if ( LIFO_Push(&UART_Buff, UART_data) == LIFO_Ok)
			printf("%d ",UART_data);

		else
			{ printf("\nError: Buffer is Full\n");
		      break;
			}

	}

	printf("\nPopping Data from UART LIFO: ");

	for(; UART_Buff.count > 0 ;)
	{
		if ( LIFO_Pop(&UART_Buff, &temp) == LIFO_Ok)
			printf("%d ",temp);

		else
			printf("\nError: Buffer is Empty");
	}



	printf("\n\nPushing Data to I2C LIFO: ");

		for( ; I2C_Buff.count < 5 ;I2C_data++)
		{
			if ( LIFO_Push(&I2C_Buff, I2C_data) == LIFO_Ok)
				printf("%d ",I2C_data);

			else
				{ printf("\nError: Buffer is Full");
			      break;
				}

		}


		printf("\nPopping Data from I2C LIFO: ");

		for(; I2C_Buff.count > 0 ;)
		{
			if ( LIFO_Pop(&I2C_Buff, &temp) == LIFO_Ok)
				printf("%d ",temp);

			else
				printf("\nError: Buffer is Empty");
		}


	return 0;
}
