#include <stdio.h>
#include <math.h>

int main()
{
    float a = 2, b = 3, c = 3, d = 3 ;
    if ((a + b + c) / 3 == a)
        printf("4");
    if ((a + b + d) / 3 == a)
        printf("3");
    if ((a + c + d) / 3 == a)
        printf("2");
    if ((b + c + d) / 3 == b)
        printf("1");
}