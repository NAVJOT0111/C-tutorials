// #include <stdio.h> 

// int main(){
//      int num, rev = 0, r;
//      scanf("%d", &num);

//      while(num != 0){
//         r = num % 10;
//         rev = rev*10 + r;
//         num /= 10;
//      }
//      printf("Reversed number: %d\n", rev);
//      return 0;
// }


// Print Natural Numbers in Reverse Order

#include <stdio.h>
int main() {
    int n,i; 
    printf("Enter the number : ");
    scanf("%d", &n);

    printf("Natural numbers in reverse order:\n");
    for (i = n; i >= 1; i--) {
        printf("%d\n", i);
    }

    return 0;
}

