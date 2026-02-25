#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include "esp_log.h"

void vTaskCode(void * parameter);

static const char* TAG = "esp32-task1";

void app_main() 
{
  TaskHandle_t xHandle = NULL;

  xTaskCreate(
      vTaskCode,
      "Task",
      configMINIMAL_STACK_SIZE*5,
      NULL,
      CONFIG_ESP32_PTHREAD_TASK_PRIO_DEFAULT,
      &xHandle);

  configASSERT( xHandle );

  vTaskDelay(1000 / portTICK_PERIOD_MS);

  if (xHandle != NULL)
  {
    vTaskDelete(xHandle);
  }  
}

void vTaskCode(void * parameter)
{
  int counter = 0;

  for(;;)
  {
    ESP_LOGI(TAG, "Loop iteration %d", ++counter);
  }
}