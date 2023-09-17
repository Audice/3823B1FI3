#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main(){
    double a, b, c, d;
    scanf("%lf %lf", &a, &b);
    c = (pow(a, 2) + pow(b, 2)) / 2;
    d = (double)(abs(a) + abs(b)) / 2;
    printf("Среднее арифметическое квадратов %lf, Среднее арифметическое модулей %lf", c, d);
}