/*5 - ƒана длина окружности. Ќайти площадь круга,
ограниченного окружностью. PI = 3.14. (3 балл)*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lenght = 0, PI = 3.14;
    float r;
    printf("Print lenght\n");
    scanf("%f", &lenght);
    r = lenght/(2*PI);
    printf( "Square of a circle = %f", PI*r*r);
    return 0;
}
