
#include "main.h"

int main(void)
{
  HAL_Init();
  LED_Init(); 

  while (1)
  {
    HAL_GPIO_TogglePin(LED_GPIO_PORT, LED_PIN);
    HAL_Delay(1000);
  }
}
