#include <stdio.h> 

int main(){
     int amount, tens, hundred, fifties;
     printf("Enter amount: ");
     scanf("%d", &amount);

     hundred = amount/100;
     amount %= 100;

     fifties = amount/50;
     amount %= 50;

     tens = amount/10;

     printf("Number of 100s notes: %d\n", hundred);
     printf("Number of 50s notes: %d\n", fifties);
     printf("Number of 10s notes: %d\n", tens);
     return 0;
}