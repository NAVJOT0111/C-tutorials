#include <stdio.h> 

int main(){
     int num, rem, digit, sum=0;                    // you have to initialise sum first
     printf("Enter any number: ");
     scanf("%d", &num);

     while (num)
     {
        rem = num%10;
        sum += rem;
        num /= 10;

     }
     printf("%d",sum);
     
     return 0;
}