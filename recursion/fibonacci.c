#include <stdio.h> 

int fibo(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;

    int ans = fibo(n-1) + fibo(n-2);
    return ans;
}

int main(){
     int n;
     printf("Enter a number: ");
     scanf("%d",&n);
    //  int x = fibo(n);
     printf("%d",fibo(n));
     return 0;
}