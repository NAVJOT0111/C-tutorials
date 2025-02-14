#include <stdio.h>
int main(){
    float radius, height, area_cirle, vol_cylinder;
    radius = 4;
    height = 2;

    area_cirle = 3.14*radius*radius;
    vol_cylinder = area_cirle*height;

    printf("Area of the circle is: %f \n", area_cirle);
    printf("The volume of the cylinder is: %f", vol_cylinder);
    return 0;
}