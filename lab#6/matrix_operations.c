#include "matrix_operations.h"

// Function to perform matrix addition
void matrixAddition(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to perform matrix multiplication
void matrixMultiplication(int rows1, int cols1, int rows2, int cols2, int matrix1[rows1][cols1], int matrix2[rows2][cols2], int result[rows1][cols2]) {
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

// Function to transpose a matrix
void transposeMatrix(int rows, int cols, int matrix[rows][cols], int result[cols][rows]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[j][i] = matrix[i][j];
        }
    }
}

// Helper function for determinant calculation
int minor(int size, int matrix[size][size], int row, int col) {
    int minorMatrix[size - 1][size - 1];
    int i, j, r = 0, c = 0;

    for (i = 0; i < size; ++i) {
        for (j = 0; j < size; ++j) {
            if (i != row && j != col) {
                minorMatrix[r][c++] = matrix[i][j];

                if (c == size - 1) {
                    c = 0;
                    ++r;
                }
            }
        }
    }

    return calculateDeterminant(size - 1, minorMatrix);
}

// Function to calculate the determinant of a matrix
int calculateDeterminant(int size, int matrix[size][size]) {
    if (size == 1) {
        return matrix[0][0];
    } else if (size == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    } else {
        int det = 0;
        for (int j = 0; j < size; ++j) {
            det += ((j % 2 == 0 ? 1 : -1) * matrix[0][j] * minor(size, matrix, 0, j));
        }
        return det;
    }
}
