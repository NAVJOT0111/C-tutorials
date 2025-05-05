#include <stdio.h> 

int linearSearch(int arr[], int size, int element){
    for(int i = 0; i < size; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}


int binarySearch(int arr[],int size, int element){
    int low, mid, high;

    // start searching

    while(low<= high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if ( arr[mid] < element){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    // searching ends
    return -1;
}

int main(){
    // unsorted array for linear search
    //  int arr[] = {1,3,5,56,4,3,23,5,4,546,34};

    // sorted array for binary search
    int arr[] = {1,3,4,5,6,7,8,9,10};

     int size = sizeof(arr)/sizeof(arr[0]);
     int element = 4;

     int searchIndex = linearSearch(arr,size,element);
     
     printf("Element %d found at index %d\n", element, searchIndex);
     return 0;
}