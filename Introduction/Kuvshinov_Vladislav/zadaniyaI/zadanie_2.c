#include <stdio.h>
#include <math.h>

int main(){
    float a, b, sr, mod;
    scanf("%f %f", &a, &b);
    sr = (float)(a * a + b * b) / 2;
    mod = (float)((fabs(a) + fabs(b)) / 2);
    printf("%f %f\n", sr, mod);
}