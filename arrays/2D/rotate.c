#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9} };
    int n = 3; // Size of the square matrix
    int i, j;

    // Step 1: Transpose the matrix
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Step 2: Reverse each row
    for (i = 0; i < n; i++) {
        for (j = 0; j < n / 2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - j - 1];
            matrix[i][n - j - 1] = temp;
        }
    }

    // Print the rotated matrix
    printf("Matrix After 90 Degree Clockwise Rotation:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
