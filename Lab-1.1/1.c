#include <stdio.h>
#include <stdlib.h>
#include <helper.h>

void printFunc(int arr[], size_t length) {
    for (int i=0; i<length; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");
}

void oddNumberOfArray(int arr[], size_t arrLength) {
    int oddNumbers[arrLength];
    int idx = 0;
    // printf("Length of array: %ld \n", arrLength);
    // printf("Length : %ld \n", sizeof(*arr));
    for (int i=0; i<arrLength; i++) {
        if (arr[i] % 2 != 0) {
            oddNumbers[idx] = arr[i]; 
            ++idx; 
        }
    }
    printf("Length of odd array: %d \n", idx);
    printFunc(oddNumbers, idx);
}

int main() {
    int arr[] = {0,1,2,3,4,5,6}; 
    size_t n = sizeof(arr) / sizeof(arr[0]);
    oddNumberOfArray(arr, n);
}