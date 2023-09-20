#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main() {
    double x1, x2, x3, y1, y2, y3, a, b, c, plper;
    printf("Введите значение x1, x2, x3: "); scanf("%lf %lf %lf", &x1, &x2, &x3);
    printf("Введите значение y1, y2, y3: "); scanf("%lf %lf %lf", &y1, &y2, &y3);
    a = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
    b = sqrt(pow(x2-x3, 2) + pow(y2-y3, 2));
    c = sqrt(pow(x3-x1, 2) + pow(y3-y1, 2));
    plper = (a+b+c)/2;
    printf("Периметр равен: %lf\n", a+b+c);
    printf("Площадь равна: %lf", sqrt(plper*(plper-a)*(plper-b)*(plper-c)));
}