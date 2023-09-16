#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a = 10, b = -5 ;
    float s = (pow(a, 2) + pow(b, 2)) / 2.0;
    float m = (abs(a) + abs(b)) / 2.0 ;
    printf("first - %lf, second - %lf", s, m );
}