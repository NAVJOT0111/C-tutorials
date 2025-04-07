#include <stdio.h> 

int main(){
     int n,i,m,j, Distinct = 1 ;

     printf("ENter the number of elements in array A: ");
     scanf("%d", &n);

     int arr[n];
     printf("ENter the values of A: ");
     for(i = 0; i<n; i++){
        scanf("%d",&arr[i]);
     }

     printf("ENter the number of elements in array B: ");
     scanf("%d", &m);

     int arr[m];
     printf("ENter the values of B: ");
     for(i = 0; i<m; i++){
        scanf("%d",&arr[i]);
     }

     int C[n + m], k = 0;

     

     for(i = 0; i<n; i++){
        for(j = 0 ; j<m; j++){
            if(arr[i] == arr[j]){
                Distinct = 0;
                printf("%d", arr[i]);
            }
        }
     }

     if(Distinct == 1){
        printf("All the elements are distinct");
     } else{
        printf("All the elements are not distinct");
     }


     return 0;
}