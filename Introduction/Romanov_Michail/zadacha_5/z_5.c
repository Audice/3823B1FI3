#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    double L, Pi, s;
    Pi=3.14;
    printf("Введите длину окружности ");
    scanf("%lf", &L);
    s= (L*L)/(4*Pi);
    printf("Площадь круга равна %lf", s);

}