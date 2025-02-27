#include <stdio.h> 

int main(){
    int sum=0, a1,a2,a3,a4,a5, number;
     printf("Enter a 5 digit no.: ");
     scanf("%d",&number);

     a1 = number % 10;
     a2 = (number/10)%10;
     a3 = (number/100)%10;
     a4 = (number/1000)%10;
     a5 = (number/10000)%10;
     sum = a1 + a2 + a3+ a4+ a5;

     printf("Sum of all digits is: %d",sum);
     return 0;
}