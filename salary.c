#include <stdio.h> 

int main(){
     float basic_sal, hra, da, gross_salary ;
     printf("Enter your basic salary: ");
     scanf("%f", &basic_sal);

     if (basic_sal < 1500){
        hra = 0.1* basic_sal;
        da = 0.9* basic_sal;
        gross_salary = basic_sal+ hra + da ;
     }
     else if (basic_sal >= 1500){
        hra = 500;
        da = 0.98 * basic_sal;
        gross_salary = basic_sal+ hra + da ;
     }

     printf("%f", gross_salary);
     return 0;
}