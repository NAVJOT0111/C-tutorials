// #include <stdio.h> 

// int number(int x, int n){
//     if(x > n)  return;
//     printf("%d\n", x);
//     number(x+1,n);
//     return;
// }

// int main(){
//      int n;
//      printf("ENter any numebr: ");
//      scanf("%d",&n);
//      number(1,n);
//      return 0;
// }
// // prints from 1 to n in increasing order


#include <stdio.h>

int printn( int num, int n){
    if(num > n) return -1;
    printn(num+1, n);
    printf("%d",num);
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d ", &n);
    printn(1,n);
    return 0;
}