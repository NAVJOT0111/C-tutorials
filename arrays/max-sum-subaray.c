#include <stdio.h>

int main() {
    int array[] = {-2, 3, -1, 5, -6, 1};
    int size = sizeof(array) / sizeof(array[0]);

    int maxSum = array[0];
    int currentSum = 0;

    for (int i = 0; i < size; i++) {
        currentSum += array[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    printf("Maximum sum of any subarray: %d\n", maxSum);

    return 0;
}
