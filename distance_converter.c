#include <stdio.h> 

int main(){
     float dist, dist_m, dist_ft, dist_inch, dist_cm ;

     printf("Enter the distance between two cities: ");
     scanf("%f",&dist);

     dist_m = 1000*dist;
     dist_cm = 100000*dist;
     dist_inch = 39370.1*dist;
     dist_ft = 3280.84*dist;

     printf("The distance in meters is: %f \n",dist_m);
     printf("The distance in centimeters is:  %f \n",dist_cm);
     printf("The distance in inches is:  %f \n",dist_inch);
     printf("The distance in feets is:  %f \n",dist_ft);

     return 0;
}