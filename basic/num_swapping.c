
#include <stdio.h> 
int main(){
     int a = 5, b = 8;
     printf("Numbers before swapping a = %d, b = %d \n", a, b);
     a = a+b;
     b = a-b;
     a = a-b;
     printf("Numbers after swpaping a = %d, b = %d \n", a , b);
     return 0;

}