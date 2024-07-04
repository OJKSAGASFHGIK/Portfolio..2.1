#include <stdio.h>
#include <math.h>

int main(){
    // sqrt() cbrt()
    int a1 = 25;
    int a2 = 27;

    printf("Square root = %.lf\n", sqrt(a1));
    printf("Cube root = %lf\n", cbrt(a2));

    // double
    /* 
    double = for make calculations you usually use double
    4.0 = note that you need type 4.0 for say that it's a float 
    */ 
    // a3
    double a3 = 4.0/3;

    printf("4.0/3 = %.3lf\n", a3);

    // pow double // a3
    double result = pow(4, 2); // it's like 4^2

    printf("4^2 = %lf\n", result);

    // // a3 result
    return 0; }