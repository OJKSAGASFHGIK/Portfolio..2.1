#include <stdio.h>
#include "./aZLibrary.h"

int main(){
    int a1 = 3;
    int a2 = 4;

    printf("%d + %d = %d\n", a1, a2, sum(a1, a2));
    printf("%d - %d = %d\n", a1, a2, sub(a1, a2));
    return 0;
}