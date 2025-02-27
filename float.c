#include <stdio.h> 

// int main(){
//     //  float x=0.7;                 //By default, floating-point literals like 0.7 are considered double in C.
//      float x = 0.7f;                // 'f' makes it a float
//      if (x == 0.7)
//         printf("n");                //However, in the comparison x == 0.7, the literal 0.7 is still treated as a double
//     else
//         printf("B");
//      return 0;
// }


void main( )
{
    int a, b;
    a = -3 - -3;
    b = -3 - -(-3);
    printf("a = %d b = %d", a, b);
}
