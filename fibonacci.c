#include <stdio.h> 

int main(){
     int t1 = 0, t2 = 1, i, nextTerm, n;
     printf("Enter the number of terms: ");
     scanf("%d", &n);
 
     for (i = 1; i <= n; i++) {
         printf("%d ", t1);
         nextTerm = t1 + t2;
         t1 = t2;
         t2 = nextTerm;
     }
     printf("\n");
     return 0;
}