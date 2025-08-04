 // startup code in assembly for Arm Cortex M3 (STM32F103C8T6)
 // Written by Eng.Mina Gamal

.global _reset

.section .vectors
.word    0x20001000
.word    _reset
.word   Vector_handler        /* 2 NMI */
.word   Vector_handler        /* 3 Hard Fault */
.word   Vector_handler        /* 4 MM Fault */
.word   Vector_handler        /* 5 Bus Fault */
.word   Vector_handler        /* 6 Usage Fault */
.word   Vector_handler        /* 7 RESERVED */
.word   Vector_handler        /* 8 RESERVED */
.word   Vector_handler        /* 9 RESERVED*/
.word   Vector_handler        /* 10 RESERVED */
.word   Vector_handler        /* 11 SV call */
.word   Vector_handler        /* 12 Debug reserved */
.word   Vector_handler        /* 13 RESERVED */
.word   Vector_handler        /* 14 PendSV */
.word   Vector_handler        /* 15 SysTick */

/* All the Vector table should be added but since this project is simple and has no interrupt i will stop at SisTick */


.section .text
.thumb_func
_reset:
	 bl main
	 b .
Vector_handler:
	b _reset

