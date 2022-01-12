#include <stdio.h>
#include <stdlib.h>
#include "helper.h"

void getNegativeNumberInArray(int arr[], size_t arrLength) {
    int oddNumbers[arrLength];
    int idx = 0;
    // printf("Length of array: %ld \n", arrLength);
    // printf("Length : %ld \n", sizeof(*arr));
    for (int i=0; i<arrLength; i++) {
        if (arr[i] < 0) {
            oddNumbers[idx] = arr[i]; 
            ++idx; 
        }
    }
    // printf("Length of odd array: %d \n", idx);
    printArrayFunc(oddNumbers, idx);
}

int main() {
    int arr[] = {0,-1,2,-3,4,5,-6}; 
    size_t n = sizeof(arr) / sizeof(arr[0]);
    getNegativeNumberInArray(arr, n);
}