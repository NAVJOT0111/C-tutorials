#include <stdio.h>

int main() {
    int num[100]; // Array to store numbers from 1 to 100
    int i,j;

    // Step 1: Fill the array with numbers from 1 to 100
    for ( i = 0; i < 100; i++) {
        num[i] = i + 1;
    }

    // Step 2 to Step 5: Implement the Sieve of Eratosthenes
    for ( i = 1; i < 100; i++) {         // Start from the second entry (index 1)
        if (num[i] != 0) {          // If the current number is not zero
            for ( j = (i + 1); j < 100; j++) {           // Set all multiples of num[i] to zero
                if (num[j] % num[i] == 0) {
                    num[j] = 0;
                }
            }
        }
    }

    // Step 6: Print all non-zero elements (prime numbers)
    printf("Prime numbers from 1 to 100 are:\n");
    for ( i = 1; i < 100; i++) { // Skip the first entry (1 is not a prime number)
        if (num[i] != 0) {
            printf("%d ", num[i]);
        }
    }

    return 0;
}
