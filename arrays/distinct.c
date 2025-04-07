#include<stdio.h> 

int main(){
     int n,i,j, Distinct = 1 ;
     printf("Enter the number of elements in array: ");
     scanf("%d", &n);

     int arr[n];
     printf("ENter the values: ");
     for(i = 0; i<n; i++){
        scanf("%d",&arr[i]);
     }
     for(i = 0; i<n; i++){
        for(j = i+1 ; j<n; j++){
            if(arr[i] == arr[j]){
                Distinct = 0;
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