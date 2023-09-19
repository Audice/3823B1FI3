#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main() {
    float a, b, c;
    printf("Введите длины 3 сторон треугольника: "); scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c){
        printf("Треугольник правильный\n");}
    else if ((a == b) || (b == c) || (a == c)) {
        printf("Треугольник равнобедренный\n");}
    else {
        printf("Треугольник разносторонний\n");}
    if (c>a && c>b){
        if (pow(c, 2)>pow(a,2)+pow(b,2))
            printf("Треугольник тупоугольный\n");
        else if(pow(c, 2) == pow(a,2)+pow(b,2))
            printf("Треугольник прямоугольный\n");
        else
            printf("Треугольник остроугольный\n");}
    if (a>b && a>c){
        if (pow(a, 2)>pow(b,2)+pow(c,2))
            printf("Треугольник тупоугольный\n");
        else if(pow(a, 2) == pow(b,2)+pow(c,2))
            printf("Треугольник прямоугольный\n");
        else
            printf("Треугольник остроугольный\n");}
    else {
        if (pow(b, 2)>pow(c,2)+pow(a,2))
            printf("Треугольник тупоугольный\n");
        else if(pow(b, 2) == pow(c,2)+pow(a,2))
            printf("Треугольник прямоугольный\n");
        else
            printf("Треугольник остроугольный\n");}
}