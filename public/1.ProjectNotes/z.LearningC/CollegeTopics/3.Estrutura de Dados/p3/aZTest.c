#include <stdio.h>

void incrementa_por_referencia(int *x) {
    (*x)++;
    printf("Dentro da função: %d\n", *x);
}

int main() {
    int num = 5;
    printf("Antes da função: %d\n", num);
    incrementa_por_referencia(&num);
    printf("Depois da função: %d\n", num);
    return 0;
}