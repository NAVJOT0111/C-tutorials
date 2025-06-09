#include <stdio.h> 

// void sum(int n){
//     int s =0,i;
//     for(i=0; i<=n; i++){
//         s = s + i;
//     }
//     printf("%d",s);
//     return;
// }

void sum(int n, int s){
    if (n == 0) return;
    sum(n-1,s+n);
    return;
}

int main(){
    int n;
    printf("ENter any numebr: ");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}