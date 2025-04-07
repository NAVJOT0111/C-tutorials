// #include <stdio.h> 
// int main(){
//      int p = 1, n;
     
//      printf("ENter a no. : ");
//      scanf("%d", &n);

//     //  for(n; n; n--){
//     //     p *= n;
//     //  }

//     while(n){
//         p *= n;
//         n--;
//     }
//     printf("%d",p);
//      return 0;
// }

#include <stdio.h> 
int main(){
     int i, exp, base;
     long long result = 1;

     printf("ENter the base and exponent: ");
     scanf("%d %d", &base, &exp);

     for (i = 1; i <= exp; i++){
        result *= base;
     }
     printf("%d" ,result);
     return 0;
}