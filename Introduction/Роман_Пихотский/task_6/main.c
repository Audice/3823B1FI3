#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x1, y1, x2 , y2 , x3 , y3 ;
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3 ) ;
    float side_1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) ;
    float side_2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2)) ;
    float side_3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2)) ;
    float p = (side_1 + side_2 + side_3) / 2.0 ;
    float s = sqrt(p*(p - side_1) * (p - side_2) * (p - side_3));
    float per = p * 2 ;
    
    printf("p - %lf, s - %lf", per, s);
}