#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    
    double a,b,c,d;
    scanf("%lf %lf", &a, &b);
    c=(a*a + b*b)/2;
    d=(double)(abs(a)+abs(b))/2;
    printf("Среднее арифметическое квадратов равно:%lf Среднее арифметическое модулей равно:%lf", c, d);
}