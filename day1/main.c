
#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include <math.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main(){
    int size = (int)(sizeof(x) / sizeof(int) / 2);
    int c1[size];
    int c2[size];
    int count = 0;
    for(int i = 0; i < size * 2 - 1; i += 2){
        c1[count] = x[i];
        c2[count] = x[i+1];
        count++;
    }
    qsort(c1, size, sizeof(int), compare);
    qsort(c2, size, sizeof(int), compare);
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += abs(c1[i] - c2[i]);
    }
    printf("final result: %d\n", sum);
}

