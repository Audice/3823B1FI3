#include <stdio.h>
#include <math.h>
int main()
{
    float a, b;
    float average, module;
    printf("Enter 2 num:");
    scanf("%f %f", &a, &b);
    average = (a*a+b*b)/2;
    module = (fabs(a) + fabs(b))/2;
    printf("Arifmetic mean of squares = %f\n", average);
    printf("Arifmetic mean = %f\n", module);         
}