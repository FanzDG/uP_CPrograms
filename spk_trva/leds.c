#include <stm32f10x.h>
#include "leds.h"

static void delay(volatile unsigned int t){
    while(t--);
}

void led_on_off(){
    GPIOC->BSRR = (1 << (13 + 16));   // PC13 = 0 -> LED encendido
    delay(500000);
    GPIOC->BSRR = (1 << 13);          // PC13 = 1 -> LED apagado
    delay(500000);
}