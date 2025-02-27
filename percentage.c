#include <stdio.h> 

int main(){
     float per_men=52, per_literate=48, per_lmen=35, population=80000, men, women, literate, lit_men, lit_women, ill_men, ill_women;

    men = (per_men/100)*population;
    women = population-men;
    literate= (per_literate/100)*population;
    lit_men = (per_lmen/100)* population;
    lit_women = population - lit_men;

    ill_men = men - lit_men;
    ill_women = women - lit_women;

    printf("Illiterate Men: %d\n", ill_men);
    printf("Illiterate Women: %d\n", ill_women);
     return 0;
}