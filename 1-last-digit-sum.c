#include <stdio.h> 
#include <math.h>

int main(){
     int num, last_dig, first_dig, sum;
     printf("Enter any number: ");
     scanf("%d", &num);

     last_dig = num % 10;

     while(num > 10){
        num /= 10;
     }
     first_dig =  (int)num;
    //  first_digit = num / (int)pow(10, (int)log10(num));

     sum = first_dig + last_dig;
     printf("%d",sum);

     return 0;
}