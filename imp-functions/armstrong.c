// // all armstrong numbers from 1 to 500
// #include <stdio.h> 
// int main(){
//      int num, temp, sum = 0, digit;

//      for (num = 1; num <=500; num++){
//         temp = num;
//         sum = 0;                // resetting value of sum to 0 in every iteration

//         while(temp){
//             digit = temp % 10;
//             sum += digit * digit * digit;
//             temp /= 10;
//         }
//         if (sum == num){
//             printf("%d \n", num);
//         }
//      }
//      return 0;
// }

#include <stdio.h> 
#include <math.h>
int main(){
     int digits, sum , temp, i, num;

     for (num = 1; num <= 500; num++){
        temp = num;
        sum = 0;
        digits = (int)log10(num) + 1;
         
        while(temp){
            i = temp % 10;
            sum += pow(i, digits);
            temp /= 10;
        }

        if (sum == num){
            printf("%d \n", num);
        }
     }
     return 0;
}