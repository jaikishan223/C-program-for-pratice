#include <stdio.h>

#define MAX_SIZE 10

void matrixMultiplication(int mat1[][MAX_SIZE],int mat2[][MAX_SIZE], int res[][MAX_SIZE], int rows1, int cols1, int cols2) {
    // Perform matrix multiplication  // Condition for multiplication int rows1, int cols1, int cols2
    // This loop is nested loop 


    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void displayMatrix(int mat[][MAX_SIZE], int rows, int cols) {
    // Display the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}


int main() {
    int mat1[MAX_SIZE][MAX_SIZE];
    int mat2[MAX_SIZE][MAX_SIZE];
    int res[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;

    // Input matrix 1
    printf("Enter the number of the and colums for matrix 1: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the element of matrix 1:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input matrix 2
    printf("Enter the number of rows and colums for matrix2: ");
    scanf("%d %d", &rows2, &cols2);

    printf("Enter the elements of matrix 2:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j <cols2; j++){
            scanf("&d", &mat2[i][j]);
        }
    }

    // Check for valid matrix sizes
    if (cols1 != rows2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

     // Perform matrix multiplication
    matrixMultiplication(mat1, mat2, res, rows1, cols1, cols2);

    // Display the resultant matrix
    printf("Resultant matrix:\n");
    displayMatrix(res, rows1, cols2);

    return 0;
}