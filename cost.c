#include <stdio.h> 

int main(){
     int items = 15, profit, cost;
     printf("Enter the profit earned: ");
     scanf("%d", &profit);

     cost = profit/items;
     printf("%d",cost);

     return 0;
}