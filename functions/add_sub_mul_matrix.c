#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to add two matrices
void matrixAddition(int mat1[][COLS], int mat2[][COLS], int result[][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to multiply two matrices
void matrixMultiplication(int mat1[][COLS], int mat2[][COLS], int result[][COLS]) {
    int i, j, k;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            result[i][j] = 0;
            for (k = 0; k < COLS; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to subtract two matrices
void matrixSubtraction(int mat1[][COLS], int mat2[][COLS], int result[][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int mat[][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int matrix1[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[ROWS][COLS] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[ROWS][COLS];

    printf("Matrix 1:\n");
    printMatrix(matrix1);

    printf("Matrix 2:\n");
    printMatrix(matrix2);

    printf("Addition:\n");
    matrixAddition(matrix1, matrix2, result);
    printMatrix(result);

    printf("Multiplication:\n");
    matrixMultiplication(matrix1, matrix2, result);
    printMatrix(result);

    printf("Subtraction:\n");
    matrixSubtraction(matrix1, matrix2, result);
    printMatrix(result);

    return 0;
}

/*output:
Matrix 1:
1	2	3	
4	5	6	
7	8	9	

Matrix 2:
9	8	7	
6	5	4	
3	2	1	

Addition:
10	10	10	
10	10	10	
10	10	10	

Multiplication:
30	24	18	
84	69	54	
138	114	90	

Subtraction:
-8	-6	-4	
-2	0	2	
4	6	8	

*/