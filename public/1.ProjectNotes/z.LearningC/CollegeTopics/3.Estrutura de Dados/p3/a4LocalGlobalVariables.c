#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a1 = -1;
void func1(){
    int a2;
    if (a1 > 0){
        a2 = 1;
    }else{
        a2 = 0;
    }
    printf("The result is: %d", a2);
}

int main(int argc, char **argv){
    func1();
    return 0;}