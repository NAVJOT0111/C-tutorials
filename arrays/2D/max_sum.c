// wap to print row number having max sum in given array

#include <stdio.h> 

int main(){
     int row_max = 0, max_sum =0, i, j;
     int arr[3][4] = {{1,2,3,1},{4,5,6,1},{7,8,9,1}};

     for(i=0; i<3; i++){
        int sum_row = 0;
        for(j=0; j<4; j++){
            sum_row += arr[i][j];
        }
        if(sum_row > max_sum){
            max_sum = sum_row;
            row_max = i;
        }
     }
     printf("Row %d has the maximum sum of %d.\n", row_max+1, max_sum);
     return 0;
}