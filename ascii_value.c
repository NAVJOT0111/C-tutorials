#include <stdio.h> 

int main(){
     char ch = 'a';
     printf("The character is: %c \n", ch);
     printf("The value of character is: %d \n", ch);
     if (ch >= 97 && ch <= 122){
        printf("This character is lowercase");
     }
     else{
        printf("This character is not lowercase");
     }
     return 0;
}