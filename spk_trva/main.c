#include "leds.h"
#include "gpios.h"

int main(void){
    init_gpio();

    while(1){
        led_on_off();
    }
}