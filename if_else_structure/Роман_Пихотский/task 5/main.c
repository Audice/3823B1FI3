#include <stdio.h>
#include <math.h>

int main()
{
    float x = 1, y = 5, z = 3;
    float maxim = x, minim = x ;
    
    if (y > maxim)
        maxim = y;
    if (z > maxim)
        maxim = z;
    if (y < minim)
        minim = y;
    if (z < minim)
        minim = z;
    printf("%lf - %lf - %lf", minim, x + y + z - maxim - minim, maxim);
}