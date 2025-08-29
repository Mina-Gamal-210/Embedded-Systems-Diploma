#ifndef _LIFO_H_
#define _LIFO_H_
#include "stdint.h"


//Data Types
typedef struct
{
	uint8_t * Base;
	uint8_t * Head;
	uint32_t size;
	uint32_t count;

}LIFO_Buff_t;

typedef enum {LIFO_Ok , LIFO_Full , LIFO_Empty , LIFO_NULL} LIFO_Status;


// Functions

LIFO_Status LIFO_Push(LIFO_Buff_t * LIFO_Buff ,int32_t item);
LIFO_Status LIFO_Pop(LIFO_Buff_t * LIFO_Buff,uint32_t* item);
LIFO_Status LIFO_Init(LIFO_Buff_t * LIFO_Buff , uint32_t * Buff, uint32_t Buff_size);


#endif
