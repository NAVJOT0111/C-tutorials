// 1!+2!+3!+…+n!
// 1!−2!+3!−4!+…±n!

#include <stdio.h>
int main() {
    int sum = 0, n,i,j;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        int fact = 1;

        for (j = 1; j <= i; j++ ){
            fact *= j;
        }
        
        if (i % 2 == 0) {        // this code is used for alternate +-
            sum -= fact; // Subtract for even indices
        } else {
            sum += fact; // Add for odd indices
        }
    }
    printf("The sum of factorials from 1! to %d! is: %d\n", n, sum);
    return 0;
}
