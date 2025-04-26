#include <stdio.h>
int main(){
    int sum = 0,i,n;
    // int n, arr[n];    // this is wrong

    printf("Enter the number of elemnts in an array: ");
    scanf("%d", &n);
    int arr[n]; // Declare array after reading the size
    
    printf("Enter the elemnts in an array: ");
    for( i=0; i <n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }
    float mean = sum/n;
    printf("%.2f", mean);
    return 0;
}