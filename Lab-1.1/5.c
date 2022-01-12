#include <stdio.h>
#include <stdlib.h>
#include "helper.h"


float findLargestNumberInMatrix(size_t row, size_t col, float arr[row][col]) {
    float largestNum = 0; 
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            if (largestNum < arr[i][j]) {
                largestNum = arr[i][j]; 
            }
        }
    }
    return largestNum;
    
}

int main() {
    float arr[][3] = {{0,10,2},{35,4,5},{6,98,1}}; 
    size_t row = sizeof(arr) / sizeof(arr[0]);
    size_t col = sizeof(arr[0]) / sizeof(arr[0][0]);
    printf("Largest number: %.2f\n", findLargestNumberInMatrix(row, col, arr));
}