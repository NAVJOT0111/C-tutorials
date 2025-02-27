<<<<<<< HEAD
#include <stdio.h> 

int main(){
     int income, tax=0 ;
     printf("Enter income: \n");
     scanf("%d", &income);

     if (income<250000){
        tax = 0;
     }
     else if(income>250000 && income<=500000){
        tax = 0.05* (income-250000);
     }
     else if(income>500000 && income<1000000){
        tax = 0.2* (50000) + 0.05* (income-50000);
     }
     return 0;
=======
#include <stdio.h> 

int main(){
     int income, tax=0 ;
     printf("Enter income: \n");
     scanf("%d", &income);

     if (income<250000){
        tax = 0;
     }
     else if(income>250000 && income<=500000){
        tax = 0.05* (income-250000);
     }
     else if(income>500000 && income<1000000){
        tax = 0.2* (50000) + 0.05* (income-50000);
     }
     return 0;
>>>>>>> 4c06d67883e27f286ba12eb73a35f69d9d1108fa
}