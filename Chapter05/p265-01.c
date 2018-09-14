/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   文件名称：p265-01.c
*   创 建 者：Navin Xu
*   电子邮箱：admin@navinxu.com
*   创建日期：2018年09月14日
*   描    述：
================================================================*/
#include <stdio.h>

typedef union {
    short count;
    double weight;
} fruit;

int main() {


    fruit aFruit = {2.1}; // 只能指定第一个字段
    //fruit aFruit = {.weight=2.1};
    //aFruit.count = 35;
    //aFruit.weight = 36.5;

    printf("%i\n", aFruit.count);
    printf("%2.1f", aFruit.weight);

    return 0;
}

