#include <stdio.h> 

// without recursion
// int factorial(int n){
//     int fact = 1,i;
//     for( i=2; i<=n; i++){
//         fact = fact*i;
//     }
//     return fact;
// }

// with recursion
int factorial(int n){
    if(n == 1 || n==0) return 1;
    int reAns =  n*factorial(n-1);
    return reAns;
}

int main(){
     int n;
     printf("Enter any number: ");
     scanf("%d",&n);
     int fact = factorial(n);
     printf("%d",fact);
     return 0;
}