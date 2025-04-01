#include <stdio.h> 

int main(){
     int num, positive = 0, negative = 0, zeroes = 0;
     char choice;

     while(num){                        //  do-while loop is better suited here to ensure the user inputs num before evaluating the condition

        printf("Enter the numbers");
        scanf("%d", &num);
   
        if (num > 0){
            positive++;
        } else if (num < 0){
            negative++;
        } else{
            zeroes++;
        }
     }

     printf("Do you want to enter another number? (y/n): ");
     scanf(" %c", &choice);
     if (choice == "n"){
        break;
     }

     printf("\nCount of positive numbers: %d\n", positive);
    printf("Count of negative numbers: %d\n", negative);
    printf("Count of zeros: %d\n", zeroes);

     return 0;
}