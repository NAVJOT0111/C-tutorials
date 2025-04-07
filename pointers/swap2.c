#include<stdio.h>
int main(){
    int a, b, *c, *d;
    printf("ENter number a and b: ");
    scanf("%d %d", &a, &b);
    c = &a;
    d = &b;

    *c = *c ^ *d;
    *d = *c ^ *d;
    *c = *c ^ *d;

    printf("Value of a and b are: %d %d", *c,*d);
    return 0;
}