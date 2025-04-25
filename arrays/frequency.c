#include <stdio.h>

int main() {
    int arr[100], freq[100], n;
    int *ptr, *ptr2;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(ptr = arr; ptr < arr + n; ptr++) {
        scanf("%d", ptr);
    }

    // Initialize frequency array to -1 (unprocessed)
    for(ptr = freq; ptr < freq + n; ptr++) {
        *ptr = -1;
    }

    // Calculate frequencies using pointers
    for(ptr = arr; ptr < arr + n; ptr++) {
        int count = 1;
        // Check if element is already processed
        if(*(freq + (ptr - arr)) != -1) continue;
        
        // Count occurrences of current element
        for(ptr2 = ptr + 1; ptr2 < arr + n; ptr2++) {
            if(*ptr == *ptr2) {
                count++;
                // Mark duplicate positions as processed
                *(freq + (ptr2 - arr)) = 0;
            }
        }
        
        // Store frequency for current element
        *(freq + (ptr - arr)) = count;
    }

    // Print results
    printf("\nElement Frequency:\n");
    for(ptr = arr; ptr < arr + n; ptr++) {
        if(*(freq + (ptr - arr)) > 0) {
            printf("%d\t%d\n", *ptr, *(freq + (ptr - arr)));
        }
    }

    return 0;
}
