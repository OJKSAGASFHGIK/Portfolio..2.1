// ChatGPT
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <stdio.h>

// It's a faster version of a sort
void sort(int array[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (array[j] < array[min_idx]) {
                min_idx = j;
            }
        }
        temp = array[min_idx];
        array[min_idx] = array[i];
        array[i] = temp;
    }
}
void printArray(int array[], int size) {
    for (int i=0; i < size; i++){
        printf("%d ", array[i]);
    }
}

int main() {
    int a1array[] = {4, 3, 2, 7, 0, };
    int a1size = sizeof(a1array)/sizeof(a1array[0]);
    sort(a1array, a1size);
    printArray(a1array, a1size);
    return 0;}
