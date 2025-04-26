#include <stdio.h>
int main(){
    int n, i, j, temp;
    printf("Enter the number of elemnts in an array: ");
    scanf("%d", &n);
    int arr[n]; 
    
    printf("Enter the elemnts in an array: ");
    for( i=0; i <n; i++){
        scanf("%d", &arr[i]);
    }

    // sorting the array
    for(i = 0; i <n-1 ; i++){
        for(j=0; j< n-i-1;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    float median;
    if(n % 2 == 0){
        median = (arr[n/2 - 1] + arr[n/2])/2 ;
    } else{
        median = arr[n/2];
    }
    printf("%f", median);
    return 0;
}