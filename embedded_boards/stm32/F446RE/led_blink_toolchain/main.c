#define RCC_BASE        0x40023800U
#define GPIOA_BASE      0x40020000U

#define RCC_AHB1ENR     (*(volatile unsigned int *)(RCC_BASE + 0x30))
#define GPIOA_MODER     (*(volatile unsigned int *)(GPIOA_BASE + 0x00))
#define GPIOA_ODR       (*(volatile unsigned int *)(GPIOA_BASE + 0x14))

void delay(volatile unsigned int count)
{
    while (count--) __asm__("nop");
}

int main(void)
{
    // 1. Enable GPIOA clock
    RCC_AHB1ENR |= (1 << 0);

    // 2. Set PA5 as output (bits 11:10 = 01)
    GPIOA_MODER &= ~(3 << (5 * 2));  // Clear bits
    GPIOA_MODER |=  (1 << (5 * 2));  // Set as output mode

    // 3. Blink LED
    while (1)
    {
        GPIOA_ODR ^= (1 << 5);  // Toggle PA5
        delay(1000000);
    }
}
