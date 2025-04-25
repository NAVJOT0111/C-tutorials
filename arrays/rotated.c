#include <stdio.h>

int main() {
    int size, n;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number of rotations
    printf("Enter the number of rotations: ");
    scanf("%d", &n);

    // Normalize the number of rotations
    n = n % size;

    // Perform rotations
    for (int i = 0; i < n; i++) {
        // Store the last element
        int last = arr[size - 1];

        // Shift all elements one position to the right
        for (int j = size - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }

        // Place the last element at the beginning
        arr[0] = last;
    }

    // Output the rotated array
    printf("Rotated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
