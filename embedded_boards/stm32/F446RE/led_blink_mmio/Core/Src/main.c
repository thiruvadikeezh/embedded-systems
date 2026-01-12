#include <stdint.h>
#include <stdio.h>


#define RCC_AHB1ENR (*(volatile uint32_t*)0x40023830)
#define GPIOA_MODER (*(volatile uint32_t*)0x40020000)
#define GPIOA_ODR   (*(volatile uint32_t*)0x40020014)


int main()
{
	RCC_AHB1ENR |= (1 << 0); // enabling the clock


	GPIOA_MODER &= ~(3 << (5 * 2)); //clearing the bits

	GPIOA_MODER |= (1 << (5 * 2));


	while(1)
	{
		GPIOA_ODR |= (1 << 5);  // LED ON;


		for(volatile int i = 0; i < 50000; i++); //delay FOR

		GPIOA_ODR &= ~(1 << 5); // LED OFF

		for(volatile int i = 0; i < 50000; i++); //delay
	}
}
