#include <stdio.h>
int main(){
    int sum = 0, x1, y1, x2, y2,i,j;
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    printf("Enter coordinates of first pooint: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter coordinates of second pooint: ");
    scanf("%d %d", &x2, &y2);

    for(i=x1; i<x2; i++){
        for(j=y1; j < y2; j++){
            sum += arr[i][j];
        }
    }
    printf("%d",sum);

    return 0;
}