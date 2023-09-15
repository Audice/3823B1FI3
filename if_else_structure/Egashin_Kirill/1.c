#include <stdio.h>


int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("Sum - %lf, difference - %lf, product - %lf, quotient - %lf", a + b, a - b, a * b, a / b);
}