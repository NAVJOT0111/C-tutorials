#include <stdio.h>
int main(){
    int n, i, j, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //sorting the array
    for(i=0; i< n-1; i++){
        for(j= 0; j< n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int mode = arr[0], max_count = 0, count = 0;
    for(i=0; i<n; i++){
        if(arr[i] == arr[i+1]) count++;
        else {
            if (count > max_count) {
                max_count = count;
                mode = arr[i - 1];
            }
            count = 1;
        }
    }
    // Final check for the last element
    if (count > max_count) {
        max_count = count;
        mode = arr[n - 1];
    }

    if (max_count > 1) {
        printf("Mode: %d (Frequency: %d)\n", mode, max_count);
    } else {
        printf("No mode (all elements occur only once).\n");
    }

    return 0;
}