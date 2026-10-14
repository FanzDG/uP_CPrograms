#include <stm32f10x.h>

void init_gpio(){
    RCC->APB2ENR |= (1 << 4);      // Reloj del puerto C
    GPIOC->CRH &= ~(0xF << 20);    // Limpia CNF13 y MODE13
    GPIOC->CRH |= (1 << 21);       // PC13 salida push-pull, 2 MHz
}