#include <stdio.h> 

int main(){
     int max_1 = 0, i,j, row=0;
     int arr[3][3] = {{1,2,9},{4,5,6},{1,1,1}};

     for(i=0; i<3; i++){
        int  ones = 0;
        for(j=0; j<4; j++){
            if(arr[i][j] == 1){
                ones += 1;
            }
        }
        if(max_1 < ones){
            max_1 = ones;
            row = i;
        }
     }
     printf("%d row has %d ones", row+1, max_1);
     return 0;
}