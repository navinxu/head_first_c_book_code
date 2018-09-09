/*================================================================
*   Copyright (C) 2018 Sangfor Ltd. All rights reserved.
*   
*   文件名称：p105.c
*   创 建 者：Navin Xu
*   电子邮箱：admin@navinxu.com
*   创建日期：2018年06月22日
*   描    述：
================================================================*/
#include <stdio.h>

int main() {

    float latitude;
    float longitude;
    char info[80];
    int started = 0;

    puts("data=[");
    while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3) {
        if (started) {
            printf(",\n");
        } else {
            started = 1;
        }
        printf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, info);
    }

    puts("\n]");


    return 0;
}
