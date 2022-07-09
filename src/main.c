/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/

#include <stdio.h>
#include "lvgl.h"
#include "app_hal.h"

#include "timely.h"
#include "timely_config.h"

int main(void)
{
    printf("Initializing lvgl...\n");
    lv_init();

    printf("Initializing hal...\n");
    hal_setup();

    printf("Initializing timely...\n");
    timely_launcher_init();
    hal_loop();
}
