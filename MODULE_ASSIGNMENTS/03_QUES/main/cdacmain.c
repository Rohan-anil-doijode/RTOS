#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <driver/gpio.h>

void sensortask_1(void *pvparameters)
{
    while(1)
    {
        printf("SENSOR TASK  1 RUNNING\n");
        vTaskDelay(100/ portTICK_PERIOD_MS);  
    }
}
void sensortask_2(void *pvparameters)
{
    while(1)
    {
        printf("SENSOR TASK  2 RUNNING\n");
        vTaskDelay(200/ portTICK_PERIOD_MS);  
    }
}
void sensortask_3(void *pvparameters)
{
    while(1)
    {
        printf("SENSOR TASK  3 RUNNING\n");
        vTaskDelay(300/ portTICK_PERIOD_MS);  
    }
}
void sensortask_4(void *pvparameters)
{
    while(1)
    {
        printf("SENSOR TASK  4 RUNNING\n");
        vTaskDelay(400/ portTICK_PERIOD_MS);  
    }
}
void sensortask_5(void *pvparameters)
{
    while(1)
    {
        printf("SENSOR TASK 5 RUNNING\n");
        vTaskDelay(500/ portTICK_PERIOD_MS);  
    }
}
void sensortask_6(void *pvparameters)
{
    while(1)
    {
        printf("SENSOR TASK 6 RUNNING\n");
        vTaskDelay(600/ portTICK_PERIOD_MS);  
    }
}
void sensortask_7(void *pvparameters)
{
    while(1)
    {
        printf("SENSOR TASK 7 RUNNING\n");
        vTaskDelay(700/ portTICK_PERIOD_MS);  
    }
}
void sensortask_8(void *pvparameters)
{
    while(1)
    {
        printf("SENSOR TASK 8 RUNNING\n");
        vTaskDelay(800/ portTICK_PERIOD_MS);  
    }
}
void sensortask_9(void *pvparameters)
{
    while(1)
    {
        printf("SENSOR TASK 9 RUNNING\n");
        vTaskDelay(900/ portTICK_PERIOD_MS);  
    }
}
void sensortask_10(void *pvparameters)
{
    while(1)
    {
        printf("SENSOR TASK 10 RUNNING\n");
        vTaskDelay(1000/ portTICK_PERIOD_MS);  
    }
}


void app_main()
{
    xTaskCreate(sensortask_1,"sensortask_1",1024,NULL,5,NULL);
    xTaskCreate(sensortask_2,"sensortask_2",1024,NULL,5,NULL);
    xTaskCreate(sensortask_3,"sensortask_3",1024,NULL,5,NULL);
    xTaskCreate(sensortask_4,"sensortask_4",1024,NULL,5,NULL);
    xTaskCreate(sensortask_5,"sensortask_5",1024,NULL,5,NULL);
    xTaskCreate(sensortask_6,"sensortask_6",1024,NULL,5,NULL);
    xTaskCreate(sensortask_7,"sensortask_7",1024,NULL,5,NULL);
    xTaskCreate(sensortask_8,"sensortask_8",1024,NULL,5,NULL);
    xTaskCreate(sensortask_9,"sensortask_9",1024,NULL,5,NULL);
    xTaskCreate(sensortask_10,"sensortask_10",1024,NULL,5,NULL);
}