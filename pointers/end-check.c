// How can you detect end of string without explicitly checking for '\0' (null terminator) ?
// by leveraging the properties of the null terminator, which is equivalent to the integer value 0. Here’s how:


#include <stdio.h>

int main() {
    char *str = "hello";

    while (*str) { // This works because '\0' is equivalent to 0, which is "false" in C.
        printf("%c", *str); // Print each character
        str++;              // Move to the next character
    }

    return 0;
}
