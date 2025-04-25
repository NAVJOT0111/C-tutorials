#include <stdio.h>

void sort(int arr[], int size){
    int i, j;
    for( i = 0; i < size-1; i++){
        for( j = 0; j < size-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    int i;
   for( i = 0; i < size; i++)
   {
      printf("%d ", array[i]);
   }
}

int main(){
    int arr[] = {1,5,7,3,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);  // to get the number of elements in array

    sort(arr,size);
    printArray(arr,size);

    return 0;
}