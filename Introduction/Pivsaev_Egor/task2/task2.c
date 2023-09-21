#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    double a, b;
    double med_kv, med_mod;
    scanf("%lf %lf", &a, &b);
    med_kv = ((pow(a, 2)+pow(b, 2))/2);
    med_mod = ((double)(abs(a)+abs(b))/2);
    printf("Среднее арифметическое их квадратов: %lf", med_kv);
    printf("Среднее арифметическое их модулей: %lf", med_mod);
}