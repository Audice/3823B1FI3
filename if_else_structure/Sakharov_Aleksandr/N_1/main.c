#include <stdio.h>

void main(){
    double L1, L2,L3;
    scanf("%lf %lf %lf", &L1, &L2,&L3);
    if (((L1 + L2 + L3)/3) == 5) printf("Отличник");
    else if (((L1 + L2 + L3)/3) >= 4) printf("Хорошист");
    else printf("Двоечник");
}