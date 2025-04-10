#include <stdio.h>
int main(){
    int a = 76;
    int* ptr = &a ;
    printf("The value of a is: %d \n", *ptr);
    printf("The address of a is: %u", ptr);
    printf("The address of a is: %x", ptr);

    return 0;
}