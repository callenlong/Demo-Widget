#include "test_main.h"
#include <unity.h>

void setUp(void) {
    test_led_init();
}

void tearDown(void) {
    test_led_de_init();
}

int main() {
    HAL_Init();         // initialize the HAL library
    HAL_Delay(2000);    // service delay
    
    UNITY_BEGIN();

    RUN_TEST(test_led_builtin_pin_number);
    RUN_TEST(test_led_state_high);
    RUN_TEST(test_led_state_low);

    UNITY_END(); // stop unit testing

    while(1){}
}

void SysTick_Handler(void) {
    HAL_IncTick();
}