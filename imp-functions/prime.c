#include <stdio.h> 

int main(){
     int prime = 1, num, i;
     printf("ENter number: ");
     scanf("%d", &num);

     for (i = 2; i < num/2; i++){
        if (num % i == 0){
            prime = 0;
            break;
        }
     }
     if(prime){
        printf("Prime number");
     } else {
        printf("Not prime");
     }
     return 0;
}