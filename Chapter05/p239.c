/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   文件名称：p236.c
*   创 建 者：Navin Xu
*   电子邮箱：admin@navinxu.com
*   创建日期：2018年09月09日
*   描    述：
================================================================*/
#include <stdio.h>

typedef struct {
    const char *name;
    const char *species;
    int age;
} turtle;

void happy_birthday(turtle *t) {
    
        (*t).age = (*t).age + 1;
        printf("Happy birthday %s! You are now %i years old!\n",t->name, t->age);
}

int main() {

    
    turtle myrtle = {"Myrtle", "Leatherback sea turtle", 99};
    happy_birthday(&myrtle);
    printf("%s's age is now %i\n", myrtle.name, myrtle.age);

    return 0;
}
