#include <stdio.h>
int main(){
    int a, b;
    int summa, raznost, proizv, chastnoe;
    scanf("%d %d", &a, &b);
    summa = a+b;
    raznost = a-b;
    proizv = a*b;
    chastnoe = a/b;
printf("Сумма чисел:%d", summa);
printf("Разность чисел:%d", raznost);
printf("Произведение чисел:%d", proizv);
printf("Частное чисел:%d", chastnoe);
}