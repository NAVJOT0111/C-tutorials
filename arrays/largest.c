#include <stdio.h> 

int main(){
     int n,i;
     printf("ENter the number of elements in array: ");
     scanf("%d", &n);

     int arr[n];
     printf("ENter the values: ");
     for(i = 0; i<n; i++){
        scanf("%d",&arr[i]);
     }
     int max = arr[0];
     for(i = 0; i<n; i++){
        if(arr[i] > max){
            max  = arr[i];
        } 
     }
     printf("The largest number is: %d ", max);
     return 0;
}