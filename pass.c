#include <stdio.h>

int main() {
    int mark_A, mark_B;
    printf("Enter marks of subject A and B: ");
    scanf("%d %d", &mark_A, &mark_B);

    if (mark_A >= 55 && mark_B >= 45) {
        printf("Qualified");
    } else if (mark_A < 55 && mark_A > 45 && mark_B >= 55) {
        printf("Qualified");
    } else if (mark_B < 45 && mark_A >= 65) {
        printf("Reappear in an examination in B to qualify");
    } else {
        printf("Failed");
    }
    
    return 0;
}
