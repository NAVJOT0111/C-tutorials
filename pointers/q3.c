#include<stdio.h>
int main(){
    int a, b, *c,*d;
    printf("ENter the values of a and b: ");
    scanf("%d %d", &a, &b);
    c = &a;
    d = &b;
    printf("Value of a and b is : %d %d", *c,*d);
}