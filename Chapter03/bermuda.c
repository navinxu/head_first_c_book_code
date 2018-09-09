/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   文件名称：bermuda.c
*   创 建 者：Navin Xu
*   电子邮箱：admin@navinxu.com
*   创建日期：2018年06月24日
*   描    述：
================================================================*/
#include <stdio.h>

int main() {

    float latitude;
    float longitude;
    char info[80];

    while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3) {

        if ((latitude > 26) && (latitude < 34)) {
            if ((longitude > -76) && (longitude < -64)) {
                fprintf(stdout, "%f,%f,%s\n", latitude, longitude, info);
            }
        }
    }

    return 0;
}
