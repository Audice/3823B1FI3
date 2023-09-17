#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int x1, x2, x3, y1, y2, y3;
    double a, b, c, p, pp, s;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);
    a = (double)sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    b = (double)sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    c = (double)sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    p = a + b + c;
    pp = p / 2;
    s = sqrt(pp*(pp-a)*(pp-b)*(pp-c));
    printf("P = %lf, S = %lf", p, s);
}