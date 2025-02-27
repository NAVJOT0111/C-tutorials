#include <stdio.h> 

int main(){
     int a = 9;
     int b = 2;
     float c = a/b;            //division of integer with integer will result an integer, c=4

     printf("The value of c is: %f",c);

     int k = 3.0/9;            // k=0 because k is an integer
     printf("value of k %d", k);

     return 0;
}


// associativity: * / % (left to right)
//                 +-
//                 =