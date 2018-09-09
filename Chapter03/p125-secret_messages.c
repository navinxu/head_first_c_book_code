/*================================================================
*   Copyright (C) 2018 Sangfor Ltd. All rights reserved.
*   
*   文件名称：p125-secret_messages.c
*   创 建 者：Navin Xu
*   电子邮箱：admin@navinxu.com
*   创建日期：2018年06月22日
*   描    述：
================================================================*/
#include <stdio.h>

int main() {
    char word[10];
    int i = 0;
    while (scanf("%9s", word) == 1) {
        i ++;
        if (i % 2) {
            fprintf(stdout, "%s\n", word);
        } else {
            fprintf(stderr, "%s\n", word);
        }
    }
    return 0;
}
