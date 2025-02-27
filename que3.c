#include <stdio.h>             //1189*841
                                // 841* 1189/2
int main(){
    int a, b;
    a = 1189;
    b = 841;

     printf("The dimensions of A1 are: %d x %d \n",a,b);
     printf("The dimensions of A2 are: %d x %d \n",b,a/2);
     printf("The dimensions of A3 are: %d x %d \n", a/2, b/2);
     printf("The dimensions of A4 are: %d x %d \n", b/2 , a/4);
     printf("The dimensions of A5 are: %d x %d \n", a/4, b/4);
     printf("The dimensions of A6 are: %d x %d \n", b/4 , a/8);
     printf("The dimensions of A7 are: %d x %d \n", a/8, b/8);
     printf("The dimensions of A8 are: %d x %d \n", b/8, a/16);
 
     return 0;
}