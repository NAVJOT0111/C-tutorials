#include <stdio.h> 

int main(){
     int a = 1; int b = 0;
     printf("The value of a and b is %d \n", a&&b);
     printf("The value of a or b is %d \n", a||b);
     printf("The value of not(a) is %d \n", !a);

     if(a &&  b){
        printf("Both are true");
     }
     
    //  is same as writing

    if(a){
        if (b){
            printf("Both are true");
        }
        
    }
     return 0;
}