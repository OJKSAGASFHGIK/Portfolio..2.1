#include <stdio.h>
#include <stdlib.h>

#include <mem.h>

int main(){
    printf("-Basic malloc:");
    int* p = (int*) malloc(sizeof(int)); // for teaching the variable is p that means pointer
    *p = 3;
    printf("\nThe value is %d", *p);
    free(p);
    printf("\nThe value is %d", *p);

    //Next level:
    printf("\n-Next level:");
    int* p2 = (int*) malloc(3*sizeof(int));
    p2[1] = 3;
    p2[2] = 9;
    printf("\nThe values are %d, %d and %d", p2[0], p2[1], p2[2]);

    //other note: "calloc":
    printf("\n-Basic calloc:");
    int* p3 = (int*) calloc(3, sizeof(int)); // It'll set undefined pointers to 0
    p3[1] = 3;
    p3[2] = 9;
    printf("\nThe values are %d, %d and %d", p3[0], p3[1], p3[2]);

    return 0; }
