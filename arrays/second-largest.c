// #include<stdio.h>
// #include<limits.h>

// int main(){
//     int arr[7] = {1,2,3,4,5,6,7};
//     int max = INT_MIN ;
//     int smax = INT_MIN , i;

//     for (i=0;i<=6;i++){
//         if(max < arr[i]){
//             max = arr[i];
//         }
//     }   
//     // max = 7

//     for (i=0;i<=6;i++){
//         if(arr[i] != max && smax < arr[i]){
//             smax = arr[i];
//         }
//     } 

//     printf("%d", smax);
//     return 0;
    
// }

#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {1, 5, 10, 3, 8, 4, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int first_max = INT_MIN, second_max = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first_max) {
            second_max = first_max;
            first_max = arr[i];
        } else if (arr[i] > second_max && arr[i] < first_max) {
            second_max = arr[i];
        }
    }

    if (second_max == INT_MIN) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is %d\n", second_max);
    }

    return 0;
}
