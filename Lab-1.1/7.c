#include <stdio.h>
#include <stdlib.h>
#include "helper.h"


void findPrimeNumber(size_t row, size_t col, int arr[row][col]) {
    int result[row * col]; 
    int idx = 0;
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            if (arr[i][j] == 0 || arr[i][j] == 1 || isPrime(arr[i][j])) {
                result[idx] = arr[i][j]; 
                ++idx;
            }
        }
    }
    printArrayFunc(result, idx);
}

int main() {
    int arr[][3] = {{0,10,2},{35,4,5},{6,98,1}}; 
    size_t row = sizeof(arr) / sizeof(arr[0]);
    size_t col = sizeof(arr[0]) / sizeof(arr[0][0]);
    findPrimeNumber(row, col, arr);
}