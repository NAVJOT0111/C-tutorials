#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// selection sort: take the smallest elemnt fron the array and place it in the front
void Selection(int arr[], int n, int index){
    if(index == n) return;

    int minIndex = index;
    int i ;
    for( i = index + 1; i < n; i++){
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }

    // swapping the current element in the array with the smallest elemnt
    swap(&arr[index] ,&arr[minIndex]);

    Selection(arr,n,index+1);
}

int main(){
    int n = 7;
    int arr[] = {2,4,11,5,9,10,7};

    Selection(arr,n,0);

    printf("Sorted array: ");
    int i;
    for(i = 0;i < n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}