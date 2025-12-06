// Enter values for two matrices and display their product (matrix multiplication)
#include <stdio.h>
#include <stdlib.h>

/* Declarations (keep this order: declaration -> main -> definitions) */
void read_matrix(int rows, int cols, int mat[rows][cols]);
void multiply_matrices(int r1, int c1, int c2,
                       int a[r1][c1], int b[c1][c2], int prod[r1][c2]);
void print_matrix(int rows, int cols, int mat[rows][cols]);

int main(void) {
    int r1, c1, r2, c2;

    printf("Enter rows and columns for first matrix (rows cols): ");
    if (scanf("%d %d", &r1, &c1) != 2 || r1 <= 0 || c1 <= 0) {
        fprintf(stderr, "Invalid dimensions for first matrix\n");
        return 1;
    }

    printf("Enter rows and columns for second matrix (rows cols): ");
    if (scanf("%d %d", &r2, &c2) != 2 || r2 <= 0 || c2 <= 0) {
        fprintf(stderr, "Invalid dimensions for second matrix\n");
        return 1;
    }

    if (c1 != r2) {
        fprintf(stderr, "Matrix multiplication not possible: columns of A must equal rows of B (got %d and %d)\n", c1, r2);
        return 1;
    }

    /* allocate matrices as variable-length arrays on the stack (C99) */
    int a[r1][c1];
    int b[r2][c2];
    int prod[r1][c2];

    printf("Enter elements of first matrix (%d x %d):\n", r1, c1);
    read_matrix(r1, c1, a);

    printf("Enter elements of second matrix (%d x %d):\n", r2, c2);
    read_matrix(r2, c2, b);

    multiply_matrices(r1, c1, c2, a, b, prod);

    printf("Product matrix (%d x %d):\n", r1, c2);
    print_matrix(r1, c2, prod);

    return 0;
}

/* Definitions */
void read_matrix(int rows, int cols, int mat[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Element [%d,%d]: ", i, j);
            if (scanf("%d", &mat[i][j]) != 1) {
                fprintf(stderr, "Failed to read element [%d,%d]\n", i, j);
                exit(EXIT_FAILURE);
            }
        }
    }
}

void multiply_matrices(int r1, int c1, int c2,
                       int a[r1][c1], int b[c1][c2], int prod[r1][c2]) {
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            prod[i][j] = 0;
            for (int k = 0; k < c1; ++k) {
                prod[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void print_matrix(int rows, int cols, int mat[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}