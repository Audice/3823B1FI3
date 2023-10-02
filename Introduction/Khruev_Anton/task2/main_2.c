#include <stdio.h>
#include <math.h>

void main(){
    double a, b;
    scanf("%lf %lf", &a, &b);
    double sr_ar = pow(a,2)/2 + pow(b,2)/2;
    double sr_abs = (abs(a) + abs(b))/2;
    printf("sr_ar=%lf,sr_abs=%lf",sr_ar,sr_abs);
    
    

}