#include <stdio.h> 

int main(){
    //  int count;
    //  int *countptr;
    //  count = 10;
    //  countptr = &count;
    //  printf("%d \n", count);
    //  printf("%d \n", &count);
    //  printf("%d \n", countptr);
    //  printf("%d \n", *countptr);

    int a = 10;
    int *x = &a;
    printf("%d \n",*x++);
    printf("%d \n",*++x);
    printf("%d \n",++*x);
    return 0;
}