#include <stdio.h> 

int main(){
     int n,i,m,j, Distinct = 1 ;

     printf("ENter the number of elements in array A: ");
     scanf("%d", &n);

     int A[n];
     printf("ENter the values of A: ");
     for(i = 0; i<n; i++){
        scanf("%d",&A[i]);
     }

     printf("ENter the number of elements in array B: ");
     scanf("%d", &m);

     int B[m];
     printf("ENter the values of B: ");
     for(i = 0; i<m; i++){
        scanf("%d",&B[i]);
     }

     // adding all the eelments of A
     int C[n + m], k = 0;
     for(i = 0; i<n; i++){
        C[k++] = A[i];
     }

     // elements of B that are not in A
     for(i=0; i<n ; i++){
        int exists = 0;
        for(j=0; j<m ; j++){
            // if()
        }
     }

     return 0;
}

