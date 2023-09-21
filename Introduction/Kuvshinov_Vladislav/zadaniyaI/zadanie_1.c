#include <stdio.h>
#include <math.h>

int main(){
    float a, b, s, v, d, y;
    scanf("%f %f", &a, &b);
    s = a + b;
    v = a - b;
    d = a / b;
    y = a * b;
    printf("%f %f %f %f\n", s, v, d, y);

}