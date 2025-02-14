#include <stdio.h> 

int main(){
     int a = 10;

     if (a = 11) //non zero value under if, it's an assignment operator and not comparison
        printf("I'm 11");
    else
        printf("I am not 11");

    return 0;
}