#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
    int a,b,c;
    double itog;
    printf("Оценки по 3 экзаменам: "); 
    scanf("%d %d %d", &a, &b, &c);
    itog = (a+b+c)/3;
    if (itog >= 4.5) {
        printf("Отличник");}
    else if (itog >= 3.5) {
        printf("Хорошист");}
    else {
        printf("Двоечник");}}
