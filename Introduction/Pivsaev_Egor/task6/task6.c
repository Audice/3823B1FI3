#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    float x1, y1, x2, y2, x3, y3;
    float a, b, c;
    float S, p;
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
    a = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
    b = sqrt(pow(x2-x3, 2) + pow(y2-y3, 2));
    c = sqrt(pow(x3-x1, 2) + pow(y3-y1, 2));
    p = (a+b+c)/2;
    S = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%f", S);
}