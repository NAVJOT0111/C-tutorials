// If a five-digit number is input through the keyboard, write a 
// program to reverse the number. 
#include <stdio.h> 

int main(){
     int number, rev_number, a1, a2, a3, a4, a5;
     printf("Enter 5 digit no.: ");
     scanf("%d",&number);

     a1 = number % 10;
     a2 = (number/10) % 10;
     a3 = (number/100) % 10;
     a4 = (number/1000) % 10;
     a5 = (number/10000) % 10;

     rev_number = a1*10000 + a2*1000 + a3*100 + a4*10 + a5;
     printf("%d",rev_number);
 
     return 0;
}