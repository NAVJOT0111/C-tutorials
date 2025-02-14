#include <stdio.h> 

int main(){
     float yos, sal = 0;
     char gender, qualification;

     printf("Enter yos, gender(m/f) and qualification(p/g)");
     scanf("%f %c %c", &yos, &gender, &qualification);

     if ((yos >= 10) && gender == 'm' && qualification == 'p'){
        sal = 15000;
     }
     else if((yos >= 10) && gender == 'm' && qualification == 'g'){
        sal = 10000;
     }
     else if ((yos < 10) && gender == 'm' && qualification == 'p'){
        sal = 10000;
     }
     else if ((yos < 10) && gender == 'm' && qualification == 'g'){
        sal = 7000;
     }
     else if ((yos >= 10) && gender == 'f' && qualification == 'p'){
        sal = 12000;
     }
     else if ((yos >= 10) && gender == 'f' && qualification == 'g'){
        sal = 9000;
     }
     else if ((yos < 10) && gender == 'f' && qualification == 'g'){
        sal = 10000;
     }
     else if ((yos < 10) && gender == 'f' && qualification =='p'){
        sal = 6000;
     }
     else{
        printf("ENter valid values");
        return 1;
     }
     printf("%f" , sal);

     return 0;
}