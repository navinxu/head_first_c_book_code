/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   文件名称：p223-01.c
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


void catalog(struct fish f) {
    printf("%s is a %s with %i teeth. He is %i\n", f.name, f.species, f.teeth, f.age);
}

int main() {

    struct fish snappy = {"Snappy", "Piranha", 69, 4};
    catalog(snappy);
    return 0;
}
