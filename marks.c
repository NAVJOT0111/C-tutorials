<<<<<<< HEAD
#include <stdio.h> 

int main(){
     int marks1,marks2,marks3;
     printf("Enter marks1: ");
     scanf("%d" , &marks1);

     printf("Enter marks2: ");
     scanf("%d" , &marks2);

     printf("Enter marks3: ");
     scanf("%d" , &marks3);
     printf("The marks are %d %d and %d \n", marks1, marks2, marks3);

     if(marks1<33 || marks2<33 || marks3<33){
          printf("You are failed due to less marks in individual subject");
     }
     else if((marks1 + marks2 + marks3)/3 < 40){
          printf("You are failed due to less percentage");
     }
     else{
          printf("You are passed");
     }

     return 0;
=======
#include <stdio.h> 

int main(){
     int marks1,marks2,marks3;
     printf("Enter marks1: ");
     scanf("%d" , &marks1);

     printf("Enter marks2: ");
     scanf("%d" , &marks2);

     printf("Enter marks3: ");
     scanf("%d" , &marks3);
     printf("The marks are %d %d and %d \n", marks1, marks2, marks3);

     if(marks1<33 || marks2<33 || marks3<33){
          printf("You are failed due to less marks in individual subject");
     }
     else if((marks1 + marks2 + marks3)/3 < 40){
          printf("You are failed due to less percentage");
     }
     else{
          printf("You are passed");
     }

     return 0;
>>>>>>> 4c06d67883e27f286ba12eb73a35f69d9d1108fa
}