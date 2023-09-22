#include <stdio.h>
#include <math.h>

int main(){
    float x1, x2;
    float sum, sub, multi, share;
    printf("Put in two numbers\n");
    scanf("%f %f", &x1, &x2);
    sum = x1 + x2;
    sub = x1 - x2;
    multi = x1 * x2;
    share = x1 / x2;
    printf("sum of a and b is %f\n", sum);
    printf("sub of a and b is %f\n", sub);
    printf("multi of a and b is %f\n", multi);
    printf("share of a and b is %f\n", share);
}