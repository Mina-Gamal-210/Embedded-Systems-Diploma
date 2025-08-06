/* Linker Script for TM4C123GH6PM */
/* Written by Eng.Mina Gamal */

ENTRY(Reset_Handler)

MEMORY
{

  FLASH (rx) : ORIGIN = 0x00000000, LENGTH = 256K
  SRAM (rwx) : ORIGIN = 0x20000000, LENGTH = 32K
 
}


SECTIONS
{

	.text :
	{ 
	  *(.vectors*)
		*(.text*)
		*(.rodata*)
		. = ALIGN(4);
		_TEXT_END = .;
	}> FLASH


	.data :
	{ 
	   _DATA_START = .;
		 *(.data*)
		 . = ALIGN(4);
		 _DATA_END = .;
	}> SRAM AT> FLASH


	.bss :
	{ 
	  _BSS_START = .;
		*(.bss*)
		. = ALIGN(4);
		_BSS_END = .;
	}> SRAM
   

}