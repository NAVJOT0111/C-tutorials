#include <stdio.h>

int stairs(int n){
    if(n == 1) return 1;
    if(n==2) return 2;
    int totalWays = stairs(n-1) + stairs(n-2);
    return totalWays;
}

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    int ways = stairs(n);
    printf("%d",ways);
    return 0;
}

