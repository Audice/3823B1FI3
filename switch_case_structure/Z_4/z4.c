#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main(){
    double a, c, b;
    int x, y, kc, kd, lc, ld;
    printf("Введте сумму денег: "); scanf("%lf", &a);
    c = modf(a, &b); 
    x = (int) b; kc = x/10; kd = x%10;
    y = c*100; lc = y/10; ld = y%10;
    switch(kd){
        case 0: printf("%d рублей", x); break;
        case 1: printf("%d рубль", x); break;
        case 2: printf("%d рубля", x); break;
        case 3: printf("%d рубля", x); break;
        case 4: printf("%d рубля", x); break;
        case 5: printf("%d рублей", x); break;
        case 6: printf("%d рублей", x); break;
        case 7: printf("%d рублей", x); break;
        case 8: printf("%d рублей", x); break;
        case 9: printf("%d рублей", x); break;}
    switch(ld){
        case 0: printf(" %d копеек", y); break;
        case 1: printf(" %d копейка", y); break;
        case 2: printf(" %d копейки", y); break;
        case 3: printf(" %d копейки", y); break;
        case 4: printf(" %d копейки", y); break;
        case 5: printf(" %d копеек", y); break;
        case 6: printf(" %d копеек", y); break;
        case 7: printf(" %d копеек", y); break;
        case 8: printf(" %d копеек", y); break;
        case 9: printf(" %d копеек", y); break;}
}