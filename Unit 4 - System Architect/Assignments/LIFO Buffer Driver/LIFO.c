#include "LIFO.h"
#include "stdio.h"


LIFO_Status LIFO_Init(LIFO_Buff_t * LIFO_Buff , uint32_t * Buff , uint32_t Buff_size)
{

	//Checking if the LIFO is existing
	if(Buff == NULL)
		return LIFO_NULL;

   // Start Initializing
	LIFO_Buff->Base = (uint8_t * )Buff;
	LIFO_Buff->Head = LIFO_Buff->Base;
	LIFO_Buff->size = Buff_size;
	LIFO_Buff->count = 0;

	return LIFO_Ok;

}


LIFO_Status LIFO_Push(LIFO_Buff_t * LIFO_Buff ,int32_t item)
{

	//Checking if the LIFO is existing
	if(LIFO_Buff->Base == NULL)         //for dynamic memory allocation
		return LIFO_NULL;


	//check if the LIFO isn't Full

	if( ( LIFO_Buff->Head + sizeof(item) ) <= (LIFO_Buff->Base + LIFO_Buff->size) )
	{
		*(int32_t *)(LIFO_Buff->Head) = item;
		LIFO_Buff->count++;
		LIFO_Buff->Head += sizeof(item);
		return LIFO_Ok;
	}
	else
		return LIFO_Full;

}



LIFO_Status LIFO_Pop(LIFO_Buff_t * LIFO_Buff,uint32_t* item)
{

	//Checking if the LIFO is existing
	if(LIFO_Buff->Base == NULL)
		return LIFO_NULL;

	//Checking if the LIFO isn't Empty
	if(LIFO_Buff->count > 0 )
	{
		LIFO_Buff->Head -= sizeof(uint32_t);
		*item = *(uint32_t*)(LIFO_Buff->Head);
		LIFO_Buff->count--;
		return LIFO_Ok;
	}

	else
		return LIFO_Empty;


}

