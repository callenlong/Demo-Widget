#include "test_main.h"
#include <unity.h>

void setUp(void) {
    LED_Init();
}

void tearDown(void) {
    LED_DeInit();
}

int main() {
    HAL_Init();         // initialize the HAL library
    HAL_Delay(2000);    // service delay
    UNITY_BEGIN();
    RUN_TEST(test_led_builtin_pin_number);

    for (unsigned int i = 0; i < 5; i++)
    {
        RUN_TEST(test_led_state_high);
        HAL_Delay(500);
        RUN_TEST(test_led_state_low);
        HAL_Delay(500);
    }

    UNITY_END(); // stop unit testing

    while(1){}
}

void SysTick_Handler(void) {
    HAL_IncTick();
}