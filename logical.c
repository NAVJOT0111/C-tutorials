<<<<<<< HEAD
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
=======
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
>>>>>>> 4c06d67883e27f286ba12eb73a35f69d9d1108fa
}