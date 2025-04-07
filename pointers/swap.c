#include<stdio.h>
int main(){
    int b,a, temp,*c, *d;

    printf("ENter numbers a and b: ");
    scanf("%d %d", &a, &b);
    c = &a;
    d = &b;

    temp = *c;
    *c = *d;
    *d = temp;

    printf("Value of a and b are: %d %d", *c,*d);
    return 0;
}