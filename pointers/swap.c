// #include<stdio.h>
// int main(){
//     int b,a, temp,*c, *d;

//     printf("ENter numbers a and b: ");
//     scanf("%d %d", &a, &b);
//     c = &a;
//     d = &b;

//     temp = *c;
//     *c = *d;
//     *d = temp;

//     printf("Value of a and b are: %d %d", *c,*d);
//     return 0;
// }


// #include <stdio.h>
// void swap(char *a, char *b) {
//     *a = *a + *b; // Step 1: Add the values
//     *b = *a - *b; // Step 2: Subtract the new *b from *a to get the original *a
//     *a = *a - *b; // Step 3: Subtract the new *b (original *a) from *a to get the original *b
// }
// int main() {
//     char str[] = "hello";
//     swap(&str[0], &str[4]); // Swap the first and last characters
//     printf("Swapped string: %s\n", str);
//     return 0;
// }


#include <stdio.h>
void swap(char *a, char *b) {
    *a = *a ^ *b;   // Step 1: XOR the values
    *b = *a ^ *b;   // Step 2: XOR the result with *b to get the original *a
    *a = *a ^ *b;   // Step 3: XOR the result with the new *b to get the original *b
}
int main() {
    char str[] = "hello";
    swap(&str[0], &str[4]);     // Swap the first and last characters
    printf("Swapped string: %s\n", str);
    return 0;
}
