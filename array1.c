// #include <stdio.h>
// int main(){
//     int arr[5] = {2,4,7,11,9};      // creating and assigning an array
//     arr[4] = 100;                       // manipulating the values of ana array
//     printf("%d", arr[2]);         // assecing the element at index 2 of array
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int marks[10] = {34,97,98,90,88,70,78,96,99,89};
//     for(int i=0 ; i<10 ; i++){
//         if(marks[i] < 35){
//             printf("%d : %d", i, marks[i]);
//         }

//     }
//     return 0;
// }


// sum of array
#include <stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int sum = 0, i;
    for( i = 0; i <= 5; i++){
        sum = sum + arr[i];
    }
    printf("%d", sum);
    return 0;
}
