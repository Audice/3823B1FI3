#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int v = 10, u = 5, t1 = 3, t2 = 5 ;
    int s = v * t1 + (v - u) * t2 ;
    printf("S - %d", s);
}