#include <stdio.h> 

int main(){
     int *a;
     printf("ENter the values of a: ");
     scanf("%d", &a);
    a = &(*a);
     
     
     printf("Adress of a is: %d \n", &a);
     printf("Value of a is: %d \n", a);
     return 0;
}