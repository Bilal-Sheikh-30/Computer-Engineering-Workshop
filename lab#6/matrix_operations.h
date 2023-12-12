#ifndef MATRIX_OPERATIONS_H
#define MATRIX_OPERATIONS_H
void matrixAddition(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]);
void matrixMultiplication(int rows1, int cols1, int rows2, int cols2, int matrix1[rows1][cols1], int matrix2[rows2][cols2], int result[rows1][cols2]);
void transposeMatrix(int rows, int cols, int matrix[rows][cols], int result[cols][rows]);
int calculateDeterminant(int size, int matrix[size][size]);
#endif