#include <stdio.h>
#include <stdlib.h>

// #ifndef FOO_DOT_H    /* This is an "include guard" */
// #define FOO_DOT_H    /* prevents the file from being included twice. */
//                      /* Including a header file twice causes all kinds */
//                      /* of interesting problems.*/

/**
 * This is a function declaration.
 * It tells the compiler that the function exists somewhere.
 */
void printArrayFunc(int arr[], size_t length) {
    for (int i=0; i<length; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");
}

void printFloatArr(float arr[], size_t length) {
    for (int i=0; i<length; i++) {
        printf(" %.2f", arr[i]);
    }
    printf("\n");
}

void printMatrix(float arr[][100], int row, int col) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%f\t", arr[i][j]);
        }
        printf("\n");
    }
}

int isPrime(int num) {
    int flag = 0;
    for (int j=2; j<(int) (num/2)+1; j++) {
        if (num % j == 0) {
            // is a prime number
            flag = 1;
            break;
        }
    }
    return flag;
}

int isEven(int num) {
    if (num % 2 == 0 ) 
        return 1;
    return 0;
}