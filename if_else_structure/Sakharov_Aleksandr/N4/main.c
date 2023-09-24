#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main() {
    setlocale(LC_ALL, "Rus");
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if (pow(x, 2) == pow(y, 2) + pow(z, 2)) printf("Прямоугольный");
    if (pow(x, 2) > pow(y, 2) + pow(z, 2)) printf("Тупоугольный");
    if (pow(x, 2) < pow(y, 2) + pow(z, 2)) printf("Остроугольный");
}