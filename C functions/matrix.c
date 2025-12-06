#include <stdio.h>

#define MAX_SIZE 10

void main_18() {
 int R1, C1, R2, C2;
 int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], Product[MAX_SIZE][MAX_SIZE];
 int i, j, k, sum;

 // Get dimensions for Matrix A
 printf("Enter rows and columns for first matrix (A): ");
 scanf("%d %d", &R1, &C1);

 // Get dimensions for Matrix B
 printf("Enter rows and columns for second matrix (B): ");
 scanf("%d %d", &R2, &C2);

 // Check for compatibility
 if (C1 != R2) {
 printf("Error! Matrix multiplication is not possible.\n");
 printf("Number of columns in A must equal number of rows in B.\n");
 return;
 }

 // Input elements for Matrix A
 printf("Enter elements of matrix A (%d x %d):\n", R1, C1);
 for (i = 0; i < R1; i++) {
 for (j = 0; j < C1; j++) {
 printf("A[%d][%d]: ", i, j);
 scanf("%d", &A[i][j]);
 }
 }

 // Input elements for Matrix B
 printf("Enter elements of matrix B (%d x %d):\n", R2, C2);
 for (i = 0; i < R2; i++) {
 for (j = 0; j < C2; j++) {
 printf("B[%d][%d]: ", i, j);
 scanf("%d", &B[i][j]);
 }
 }

 // Multiplication logic
 for (i = 0; i < R1; i++) { // R1 is the row of the result matrix
 for (j = 0; j < C2; j++) { // C2 is the column of the result matrix
 sum = 0;
 for (k = 0; k < C1; k++) { // C1 (or R2) is the common dimension
 sum += A[i][k] * B[k][j];
 }
 Product[i][j] = sum;
 }
 }

 // Display the product matrix
 printf("\nProduct Matrix (A x B) is:\n");
 for (i = 0; i < R1; i++) {
 for (j = 0; j < C2; j++) {
 printf("%d\t", Product[i][j]);
 }
 printf("\n");
 }
}
