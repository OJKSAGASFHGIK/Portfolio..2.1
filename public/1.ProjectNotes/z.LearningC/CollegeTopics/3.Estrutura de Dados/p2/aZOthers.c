#include <stdio.h>

int* a1, a2;

int main() { 
    a2 = 3;
    a1 = &a2;
    a2 = 7;

    printf("%d", a2);
    printf(" %d", *a1);
    return 0; }

/*
-Topics that I yet need search:
C: FIFO Data Structure
Stacks in C

*/