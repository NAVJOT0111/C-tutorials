// #include <stdio.h> 
// int main(){
//      int sum = 0 , n;
//      printf("Enter no. ");
//      scanf("%d", &n);

//      while(n){
//         sum += n;
//         n--;
//      }
//      printf("%d", sum);
//      return 0;
// }

#include <stdio.h> 
int sum = 0, i;
int main(){
     for( i = 1; i <= 10; i++){
        sum += i;
     }
     printf("%d", sum);
     return 0;
}