/* main.c - STM32 ADC + UART skeleton example */
#include "main.h"
#include "stdio.h"
#include "string.h"

UART_HandleTypeDef huart2;
ADC_HandleTypeDef hadc1;

// Redirect printf to UART
int __io_putchar(int ch) {
  HAL_UART_Transmit(&huart2, (uint8_t*)&ch, 1, HAL_MAX_DELAY);
  return ch;
}

void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_USART2_UART_Init(void);
static void MX_ADC1_Init(void);

int main(void) {
  HAL_Init();
  SystemClock_Config();
  MX_GPIO_Init();
  MX_USART2_UART_Init();
  MX_ADC1_Init();

  char buf[80];

  while (1) {
    HAL_ADC_Start(&hadc1);
    if (HAL_ADC_PollForConversion(&hadc1, 10) == HAL_OK) {
      uint32_t adc = HAL_ADC_GetValue(&hadc1);
      float voltage = (adc / 4095.0f) * 3.3f;

      snprintf(buf, sizeof(buf), "ADC=%lu, Voltage=%.2f V\r\n", adc, voltage);
      HAL_UART_Transmit(&huart2, (uint8_t*)buf, strlen(buf), HAL_MAX_DELAY);
    }
    HAL_Delay(1000);
  }
}
