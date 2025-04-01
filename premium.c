#include <stdio.h> 

int main(){
     int premium, age, amount;
     char lives_in, health, gender;

     printf("ENter heatlh status: e for excellent and p for poor");
     scanf("%c", &health);
     printf("Enter place of living: c for city and v for village");
     scanf("%c", &lives_in);
     printf("eNter age: ");
     scanf("%d", &age);
     printf("ENter gender: m for male and f for female");
     scanf("%c", &gender);

     if ( health == 'e' && age >= 25 && age <= 35 && gender == 'm' && lives_in == 'c'){
        printf(" premium is Rs. 4 per thousand and policy amount cannot exceed Rs. 2 lakhs. ");
     }
     else if ( health == 'e' && age >= 25 && age <= 35 && gender == 'f' && lives_in == 'c'){
        printf(" premium is Rs. 3 per thousand and policy amount cannot exceed Rs. 1 lakhs. ");
     }
     else if ( health == 'p' && age >= 25 && age <= 35 && gender == 'm' && lives_in == 'v'){
        printf("  premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000. . ");
     }
     else{
        printf("NOt insured");
     }
     return 0;
}