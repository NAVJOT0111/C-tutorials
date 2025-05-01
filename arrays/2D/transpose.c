#include <stdio.h>

int main(){

    int arr[3][4] = {{1,2,3,1},{4,5,6,1},{7,8,9,1}};
    int brr[4][3];       // rows into columns and columns into rows
    int i,j,temp;

    // Compute the transpose

    // for (i = 0; i < 3; i++) {
    //     for (j = 0; j < 4; j++) {
    //         brr[j][i] = arr[i][j];
    //     }
    // }

    // Transpose in place by swapping elements across the diagonal
    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 3; j++) {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // Print the transposed matrix
    printf("Transpose of the given matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}