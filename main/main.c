#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void printONE(void *parameter) {

    for(;;) {

        printf("1\n");

        vTaskDelay(2000 / portTICK_PERIOD_MS);
    }
}

void printHW(void *parameter) {

    int i = 0;
    while (1) {
        printf("[%d] Hello world!\n", i);
        printf("something saved creditinals\n");
        i++;
        vTaskDelay(5000 / portTICK_PERIOD_MS);
    }

}


void app_main(void)
{
    xTaskCreatePinnedToCore(printHW," print HW",2048,NULL,1,NULL,1);
    
}
