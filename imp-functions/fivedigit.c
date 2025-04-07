#include <stdio.h> 

int main(){
     int num, digit, num2 = 0, place=1 ;
     printf("Enter a five digit number: ");
     scanf("%d", &num);

     while(num){
        digit = num%10;
        digit = (digit + 1) % 10;           // Add 1 and handle wrapping (9 + 1 = 0) 
        num2 += digit * place;
        place *= 10;
        num /= 10;
     }
     printf("%d",num2);
     return 0;
}