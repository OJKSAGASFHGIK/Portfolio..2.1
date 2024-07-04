// ChatGPT
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// It's a slower version of a sort
void sort(int array[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
void printArray(int array[], int size) {
    for (int i=0; i < size; i++){
        printf("%d ", array[i]);
    }
}

int main() {
    int a1array[] = {4, 3, 2, 1, 0, };
    int a1size = sizeof(a1array)/sizeof(a1array[0]);
    sort(a1array, a1size);
    printArray(a1array, a1size);
    return 0;}
