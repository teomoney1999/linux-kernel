#include <stdio.h>
#include <stdlib.h>
#include "helper.h"

void get(int arr[], size_t arrLength) {
    int result[arrLength];
    int idx = 0;
    for (int i=0; i<arrLength; i++) {
        if (i == 0) {
            result[idx] = arr[i] + arr[i+1]; 
        }
        else if (i > 0 || i < arrLength - 1) {
            result[idx] = arr[i-1] + arr[i] + arr[i+1];
        }
        else {
            result[idx] = arr[i-1] + arr[i];
        }
        ++idx;
    }
    printArrayFunc(result, idx);
}

int main() {
    int arr[] = {0,1,2,3,4,5,6}; 
    size_t n = sizeof(arr) / sizeof(arr[0]);
    get(arr, n);
}