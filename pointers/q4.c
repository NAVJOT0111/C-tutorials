#include<stdio.h>
int main(){
    int a, b, *c,*d;
    printf("ENter the values of a and b: ");
    scanf("%d %d", &a, &b);
    c = &a;
    d = &b;
    if(c>d) printf("Adress of a is greater than b");
    else printf("Adress of b is greater than a");

    return 0;
}