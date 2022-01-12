#include <stdio.h>
#include <stdlib.h>
#include "helper.h"



void getPrimeNumber(int arr[], size_t arrLength) {
    int result[arrLength];
    int idx = 0;
    for (int i=0; i<arrLength; i++) {
        if (arr[i] == 0 || arr[i] == 1 || arr[i] == 2 || !isPrime(arr[i])) {
            result[idx] = arr[i]; 
            ++idx;
            continue;
        }
    }
    printArrayFunc(result, idx);
}

int main() {
    int arr[] = {0,10,2,35,4,5,6}; 
    size_t n = sizeof(arr) / sizeof(arr[0]);
    getPrimeNumber(arr, n);
}