#include<stdio.h>
#include<math.h>

int main(){
    double a,b;
    double c,r,p,d;
    scanf("%lf %lf",&a, &b);
    c=a+b;
    r=a-b;
    p=a*b;
    d=a/b;
    printf("Сумма равна:%lf , разность равна:%lf , произведение равно:%lf , деление равно:%lf ", c , r, p, d);
}