#include <stdio.h>

int main(){
    /* 
    %c = character
    %s = string
    %f = float
    %lf = double
    %d = integer // same that int

    %.1 = decimal precision
    %1 = minimum field width
    %- = left align
    */

    float a1 = 12.50;
    float a2 = 13.10;
    float a3 = 14.20;

    printf("$ %8.2f\n", a1);
    printf("$ %8.2f\n", a2);
    printf("$ %8.2f\n", a3);
    return 0;}