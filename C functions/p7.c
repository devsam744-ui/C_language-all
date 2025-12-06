#include <stdio.h>
void main(){
    int matrix1[2][2]={
        {1, 2},
        {3, 4}
    };
    int matrix2[2][2]={
        {5, 6},
        {7, 8}
    };
    int sum_matrix[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Matrix 1:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix1[i][j]);
        }
    printf("\n");
        
    }
    printf("\nMatrix 2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix2[i][j]);
        }
    printf("\n");
    }
    printf("\nSum Matrix (Matrix 1 + Matrix 2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", sum_matrix[i][j]);
        }
    printf("\n");
    }
}