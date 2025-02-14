// values taht are already defined
// #include <stdio.h>
// int main(){
//     int length, breadth, area;
//     length = 10;
//     breadth = 20;

//     area = length*breadth;
//     printf("The area of rectangle is: %d", area);
//     return 0;
// }

// value entered by user 
#include <stdio.h>
int main(){
    int length, breadth, area;

    printf("Enter lenght: ");
    scanf("%d", &length);

    printf("Enter breadth:  ");
    scanf("%d", &breadth);

    area = length*breadth;
    printf("The area of rectangle is: %d", area);
    return 0;
}
