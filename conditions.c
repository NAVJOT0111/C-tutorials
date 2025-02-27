#include <stdio.h>

int main(){
    int age = 15;
    if (age>10){
        printf("You are inside if \n");
        printf("Your age is greater than 10");
    }

    if(age%5==0){
        printf("Iinside if");
    }
    else{
        printf("Your age is not greater than 10");
    }

    return 0;
}