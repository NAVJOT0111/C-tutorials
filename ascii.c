#include <stdio.h> 
int main(){
     int ascii = 0;
    while (ascii <= 255){                                                   // 65 to 90 and 97 to 122
        printf("%d : %c \n", ascii, ascii);
        ascii++ ;
    }

     return 0;
}