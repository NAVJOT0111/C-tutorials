#include <stdio.h>   // Required for input/output functions like printf

// Function to merge two halves of an array
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1; // Size of the left subarray
    int n2 = right - mid;    // Size of the right subarray

    int L[n1], R[n2]; // Temporary arrays to hold the subarrays

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left; // Initial indices for L[], R[], and arr[]

    // Merge the temporary arrays back into arr[]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {   // Compare elements of L[] and R[]hhgh
            arr[k] = L[i];    // If L[i] is smaller, put it in arr[k]
            i++;
        } else {
            arr[k] = R[j];    // Otherwise, put R[j] in arr[k]
            j++;
        }
        k++; // Move to the next position in arr[]
    }

    // Copy any remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy any remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Function to implement merge sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) { // Check if the array can be split further
        int mid = left + (right - left) / 2; // Find the middle point

        // Recursively sort the first and second halves
        mergeSort(arr, left, mid);       // Sort the left half
        mergeSort(arr, mid + 1, right); // Sort the right half

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Main function to test the program
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    printf("Given array is: \n");
    printArray(arr, size); // Print the original array

    mergeSort(arr, 0, size - 1); // Sort the array using merge sort

    printf("Sorted array is: \n");
    printArray(arr, size); // Print the sorted array

    return 0; // Indicate successful execution
}
