#include <stdio.h>
int main(){
    int i,j;
    // printf("ENter rows: ");
    // scanf("%d", &i);
    // printf("Enter columns: ");
    // scanf("%d", &j);
    // int arr[i][j];

    // printf("Enter values:");

    int arr1[2][2] = {1,2,3,4};
    int arr2[2][2] = {1,2,3,4};
    int brr[2][2];

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            // using third array
            // brr[i][j] = arr1[i][j] + arr2[i][j]; 

            // if not using third array
            arr1[i][j] += arr2[i][j];
            
        }
        printf("\n");
    }

    for(i = 0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    return 0 ;
}