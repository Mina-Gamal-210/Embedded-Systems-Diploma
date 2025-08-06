/* Startup code in c for TM4C123GH6PM  */
/* Written by Eng.Mina Gamal */

#include "Platform_Types.h"

extern int main();

extern uint32_t _TEXT_END;
extern uint32_t _DATA_START;
extern uint32_t _DATA_END;
extern uint32_t _BSS_START;
extern uint32_t _BSS_END;


volatile static unsigned long Stack_Array[256];

/* this Uninitialized staic Global array will be stored in .bss and it will be on RAM
   so if i take the address of the last element of the array and set it as stack top
   we will get a stack size = size of the array 265*4= 1024 B = 1KB 
   it doesn't matter where it will be stored in the .bss even if there is a part of .bss 
   after it as there is a gurantee that this array will be in RAM 
*/
 


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


  void (* const vector[]) () __attribute__((section(".vectors"))) =
{  
   (void (*)()) ((uint32_t)Stack_Array + sizeof(Stack_Array)),
   &Reset_Handler,
   &NMI_Handler,
   &Hard_Fault_Handler,
   &Mem_Manage_Handler,
   &Bus_Fault_Handler,
   &Usage_Fault_Handler

};






