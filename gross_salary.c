#include <stdio.h>
int main(){
    float basic_sal , rent, gross_sal;

    printf("Enter the basic salary: ");
    scanf("%f",&basic_sal);
    gross_sal = basic_sal + (0.4*basic_sal) + (0.2*basic_sal);

    printf("Gross salary is:  %f", gross_sal);
    return 0;

}