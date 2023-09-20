#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    double s, l, p=3.14, r;
    // printf("12");
    scanf("%lf", &l);
    r = l / p / 2;
    s = p * r * r;
    
    printf("%lf", s);
}