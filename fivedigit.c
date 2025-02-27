#include <stdio.h> 

int main(){
     int num, digit, num2 = 0 ;
     printf("Enter a five digit number: ");
     scanf("%d", &num);

     while(num){
        digit = num%10;
        digit += 1;
        num2 = digit*10;
        num /= 10;
     }
     return 0;
}