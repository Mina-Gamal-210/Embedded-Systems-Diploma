#include "Platform_Types.h"

#define RCC_Base   0x40021000
#define PortA_Base 0x40010800

#define RCC_APB2ENR  *((vuint32_t *)(RCC_Base + 0x18))
#define GPIOA_CRL    *((vuint32_t *)(PortA_Base + 0x00))
#define GPIOA_CRH    *((vuint32_t *)(PortA_Base + 0x04))
#define GPIOA_ODR    *((vuint32_t *)(PortA_Base + 0x0C))


void delay(uint32_t d){
	uint32_t i;
	while(d--)
	{
		for(i=0;i<500;i++);
	}
}


int main(void)
{
	RCC_APB2ENR |= 1<<2;           // Enable PortA Clock
	GPIOA_CRL   &= ~(0xF<<20);    // Resetting bits 20:23
	GPIOA_CRL   |= 0x2<<20;      // setting bits 20:23 with 0x2
	GPIOA_ODR   &=  ~(1<<5);    //Reset PA5

	while(1){
		GPIOA_ODR ^= 1<<5;    // Toggle PA5
		delay(500);
	}


}
