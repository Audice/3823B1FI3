#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float per = 62.8, pi = 3.14 ;
    float s = pow(per / (2 * pi), 2) * pi ;
    printf("s - %lf", s);

}