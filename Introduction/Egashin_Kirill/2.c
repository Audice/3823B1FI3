#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);

    printf("Squares average - %lf, absolute values average - %lf", 
           (pow(a, 2) + pow(b, 2)) / 2, (fabs(a) + fabs(b)) / 2);

    return 0;
}