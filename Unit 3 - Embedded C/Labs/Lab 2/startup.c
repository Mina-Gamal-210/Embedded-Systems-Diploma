/* Startup code in c for STM32F103C8T6 */
/* Written by Eng.Mina Gamal */

#include "Platform_Types.h"

extern int main();
extern uint32_t _Stack_Top;
extern uint32_t _TEXT_END;
extern uint32_t _DATA_START;
extern uint32_t _DATA_END;
extern uint32_t _BSS_START;
extern uint32_t _BSS_END;

void Reset_Handler()
{
   
   /* Copy .data from flash to SRAM */
   uint32_t DATA_SIZE = (uint32_t)&_DATA_END - (uint32_t)&_DATA_START;
   vuint8_t * D_src = (vuint8_t *) &_TEXT_END;
   vuint8_t * D_dest = (vuint8_t *) &_DATA_START;

   while(DATA_SIZE--)
   { 
      *(D_dest++) = *(D_src++);
   }


   /* Creating .bss section in SRAM with zeros */
   
   uint32_t BSS_SIZE = (uint32_t)&_BSS_END - (uint32_t)&_BSS_START;
   vuint8_t * B_src = (vuint8_t *) &_BSS_START;

   while(BSS_SIZE--)
   {
      *(B_src++) = 0;
   }

   main();
}



void Default_Handler(void) 
{
	Reset_Handler(); 
}

void NMI_Handler(void) __attribute__((weak,alias("Default_Handler"))); 

void Hard_Fault_Handler(void) __attribute__((weak,alias("Default_Handler")));

void Mem_Manage_Handler(void) __attribute__((weak,alias("Default_Handler")));

void Bus_Fault_Handler(void) __attribute__((weak,alias("Default_Handler")));

void Usage_Fault_Handler(void) __attribute__((weak,alias("Default_Handler")));


uint32_t vector[] __attribute__((section(".vectors"))) = {  
   
   (uint32_t) &_Stack_Top,
   (uint32_t) &Reset_Handler,
   (uint32_t) &NMI_Handler,
   (uint32_t) &Hard_Fault_Handler,
   (uint32_t) &Mem_Manage_Handler,
   (uint32_t) &Bus_Fault_Handler,
   (uint32_t) &Usage_Fault_Handler

};




