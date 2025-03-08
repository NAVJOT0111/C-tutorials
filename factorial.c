#include <stdio.h> 

int main(){
     int p = 1, n;
     
     printf("ENter a no. : ");
     scanf("%d", &n);

     for(n; n; n--){
        p *= n;
     }
     printf("%d",p);
     return 0;
}