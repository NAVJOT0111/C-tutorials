// to find the minimum and maximum elements in a 2D array along with their indices
#include <stdio.h>

int main() {
    int rows = 3,columns = 3,i,j;
    int arr[3][3] = {
        {3, 7, 1},
        {9, 2, 8},
        {4, 5, 6}
    };

    // Input elements of the array
    printf("Enter elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Initialize min and max with the first element of the array
    int min = arr[0][0], max = arr[0][0];
    int minRow = 0, minCol = 0, maxRow = 0, maxCol = 0;

    // Find min and max along with their indices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
                minRow = i;
                minCol = j;
            }
            if (arr[i][j] > max) {
                max = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    // Print the results
    printf("Minimum element: %d at index [%d][%d]\n", min, minRow, minCol);
    printf("Maximum element: %d at index [%d][%d]\n", max, maxRow, maxCol);

    return 0;
}
