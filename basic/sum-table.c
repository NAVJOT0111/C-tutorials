#include <stdio.h> 

int main(){
     int sum = 0, i , n = 8, x;

    //  for(i = 1; i <= 10; i++){
    //     x = i*n;
    //     sum += x;
    //  }

    do{
        x = n*i;
        sum += x;
        i++;
    } while(i <=10);

     printf("%d", sum);
     return 0;
}