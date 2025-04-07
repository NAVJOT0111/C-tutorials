#include<stdio.h>
#include<limits.h>

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int max = INT_MIN ;
    int smax = INT_MIN , i;

    for (i=0;i<=6;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }   
    // max = 7

    for (i=0;i<=6;i++){
        if(arr[i] != max && smax < arr[i]){
            smax = arr[i];
        }
    } 

    printf("%d", smax);
    return 0;
    
}