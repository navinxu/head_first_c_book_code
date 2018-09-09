/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   文件名称：p139-writeToFile.c
*   创 建 者：Navin Xu
*   电子邮箱：admin@navinxu.com
*   创建日期：2018年06月24日
*   描    述：
================================================================*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char line[80];
    FILE * in = fopen("spooky.csv", "r");
    FILE * file1 = fopen("ufos.csv", "w");
    FILE * file2 = fopen("disapearances.csv", "w");
    FILE * file3 = fopen("other.csv", "w");

    while (fscanf(in, "%79[^\n]\n", line) == 1) {
        if (strstr(line, "UFO")) {
            fprintf(file1, "%s\n", line);
        } else if (strstr(line, "Disappearance")) {
            fprintf(file2, "%s\n", line);
        } else{
            fprintf(file3, "%s\n", line);
        }
    }

    fclose(in);
    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
}
