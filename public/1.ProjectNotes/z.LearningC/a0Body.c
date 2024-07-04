/*
    -Go deep in th packages below if you want.
    -I won't put this 'in this file' for questions of code size.
    -It just for pass a common body in C . */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mem.h>

#include "./aZPath.h" // for pass your modules

struct struct1{
    char name[12]; // the number inside is size
    int age;
}; // It's like a class

int main(){
    struct struct1 Person1;
    strcpy(Person1.name, "Greque");
    Person1.age = 24 ;
//    printf("Name: %s ; Age: %d ;", Person1.name, Person1.age);

    return 0;}