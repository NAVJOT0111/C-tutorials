#include <stdio.h> 

int main(){
     int C, D, X;

     printf("Enter the value of C: ");
     scanf("%d",&C);
      printf("Enter the value of D: ");
     scanf("%d",&D);

     X = C;
     C = D;
     D = X;
     printf("The value of C: %d \n",C);
     printf("The value of D: %d \n",D);
     
     return 0;
}