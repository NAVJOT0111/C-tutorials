#include <stdio.h>

int power(int a, int b){
    int x = 1,i;
    for(i = 0; i<b; i++){
        x = x*a;
    }
    return x;
}

int main(){
    int a,b,p;
    printf("Enter base and power: ");
    scanf("%d %d", &a, &b);
    p = power(a,b);
    printf("%d \n" , p);
    return 0;
}