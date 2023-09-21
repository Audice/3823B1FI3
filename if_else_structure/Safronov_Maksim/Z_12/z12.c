#include <stdio.h>
#include <math.h>

void main() {
    int a,b,c,d;
    printf("Введите 4 целых числа: "); scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a == b && b == c){
        printf("Порядковый номер числа 4");}
    else if (b == c && c == d){
        printf("Порядковый номер числа 1");}
    else if (a == c && c == d){
        printf("Порядковый номер числа 2");}
    else if (a == b && b == d){
        printf("Порядковый номер числа 3");}
}