 #include "matrix_operations.h"
 #include <stdio.h>

 int main() {
     int matrixA[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
     int matrixB[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
     int resultMatrix[3][3];

     // Matrix Addition
     matrixAddition(3, 3, matrixA, matrixB, resultMatrix);
     printf("Matrix Addition:\n");
     for (int i = 0; i < 3; ++i) {
         for (int j = 0; j < 3; ++j) {
             printf("%d\t", resultMatrix[i][j]);
         }
         printf("\n");
     }

     // Matrix Multiplication
     matrixMultiplication(3, 3, 3, 3, matrixA, matrixB, resultMatrix);
     printf("\nMatrix Multiplication:\n");
     for (int i = 0; i < 3; ++i) {
         for (int j = 0; j < 3; ++j) {
             printf("%d\t", resultMatrix[i][j]);
         }
         printf("\n");
     }

     // Transpose Matrix A
     int transposedMatrixA[3][3];
     transposeMatrix(3, 3, matrixA, transposedMatrixA);
     printf("\nTranspose of Matrix A:\n");
     for (int i = 0; i < 3; ++i) {
         for (int j = 0; j < 3; ++j) {
             printf("%d\t", transposedMatrixA[i][j]);
         }
         printf("\n");
     }

     // Determinant of Matrix A
     int determinantA = calculateDeterminant(3, matrixA);
     printf("\nDeterminant of Matrix A: %d\n", determinantA);

     return 0;
 }
