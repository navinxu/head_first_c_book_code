/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   文件名称：p225-01.c
*   创 建 者：Navin Xu
*   电子邮箱：admin@navinxu.com
*   创建日期：2018年09月07日
*   描    述：
================================================================*/
#include <stdio.h>

struct fish {
    const char *name;
    const char *species;
    int teeth;
    int age;
};

void label(struct fish f) {

    printf("Name: %s\nSpecies: %s\n%i years old, %i teeth\n", f.name, f.species, f.age, f.teeth);
}

int main(){

    struct fish snappy;
    snappy.name = "Snappy";
    snappy.species = "Piranha";
    snappy.age = 69;
    snappy.teeth = 4;

    snappy.name = "Tommy";

    label(snappy);

    return 0;
}
