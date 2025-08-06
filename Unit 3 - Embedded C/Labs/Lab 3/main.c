#include "Platform_Types.h"


#define SYSCTL_BASE 0x400FE000
#define SYSCTL_RCGC2_R   *((vuint32_t *)(SYSCTL_BASE + 0x108))

#define PORTF_BASE 0x40025000
#define GPIO_PORTF_DATA_R   *((vuint32_t *)(PORTF_BASE + 0x3FC))
#define GPIO_PORTF_DIR_R   *((vuint32_t *)(PORTF_BASE + 0x400))
#define GPIO_PORTF_DEN_R   *((vuint32_t *)(PORTF_BASE + 0x51C))


void delay(uint32_t d)
{
	uint32_t i;

	while(d--)
	{
		for(i=0;i<1000;i++);
	}

}



int main() 
{

 SYSCTL_RCGC2_R = 0x20;        //Enable GPIO_PORTF
 
 delay(1);  //Adding Delay before using Port F to ensure that it is enabled

 GPIO_PORTF_DIR_R |= 1<<3;    // set PF3 Pin as output
 GPIO_PORTF_DEN_R |= 1<<3;   
 GPIO_PORTF_DATA_R &= ~(1<<3);  //Reset PF3 Pin



 while(1)
 {

   GPIO_PORTF_DATA_R ^= 1<<3;  //Toggle PF3 Pin

   delay(300);

}

return 0;

}
