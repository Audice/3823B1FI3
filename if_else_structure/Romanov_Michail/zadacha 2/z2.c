#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int r,r1, d;
    printf("Расстояние между окружностями и их радиусы");
    scanf("%d %d %d", &d, &r, &r1);
    if (d > r+r1)
    {
        printf("окружности не касаются");
    }else{
        if(d == r+r1)
        printf("Окружности касаются в одной точке");
        if(d>r-r1 && d<r+r1 && d!=0)
        printf("окружности касаются в двух точках");
        if(d == r-r1 || d == r1-r && d!=0)
        printf("окружности касаются внутренним образом");
        if(d < r-r1 && d!=0 || d<r1-r && d!=0)
        printf("окружости расположены внутренним образом, не пересекаются");
        if(d==0)
        printf("Окружности расположены внутренним образом и их центры совпадают");
    }
    







}