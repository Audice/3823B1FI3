#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c;
    printf("Введите 3 стороны треугольника: "); 
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c){
        printf("Треугольник правильный");}
    else if ((a == b) || (b == c) || (a == c)) {
        printf("Треугольник равнобедренный ");}
    else {
        printf("Треугольник разносторонний " );}
    if (c>a && c>b){
        if (pow(c, 2)>pow(a,2)+pow(b,2))
            printf("тупоугольный");
        else if(pow(c, 2) == pow(a,2)+pow(b,2))
            printf("прямоугольный");
        else
            printf("остроугольный");}
    if (a>b && a>c){
        if (pow(a, 2)>pow(b,2)+pow(c,2))
            printf("тупоугольный");
        else if(pow(a, 2) == pow(b,2)+pow(c,2))
            printf("прямоугольный");
        else
            printf("остроугольный");}
    else {
        if (pow(b, 2)>pow(c,2)+pow(a,2))
            printf("тупоугольный");
        else if(pow(b, 2) == pow(c,2)+pow(a,2))
            printf("прямоугольный");
        else
            printf("остроугольный");}
}
