/*2 - ќпределить взаимное расположение двух окружностей.
ƒаны координаты центров и радиусы окружностей (всего 4 варианта расположени€). (1 балл)*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2, r1, r2, d;
    printf("Print the coordinates of the first point\n");
    scanf("%f %f", &x1, &y1);
    printf("Print the radius of the first circle\n");
    scanf("%f", &r1);
    printf("Print the coordinates of the second point\n");
    scanf("%f %f", &x2, &y2);
    printf("Print the radius of the second circle\n");
    scanf("%f", &r2);
    d = sqrt(pow(x2 - x1, 2)+pow(y2 - y1, 2));
    if (d > r1 + r2)
        printf("Circles separated");
    else
    {
        if ((abs(r1 - r2) < d) || (d < r1 + r2))
            printf("Circles intersect");
        else
        {
            if ((d == r1 - r2) || (d == r1 + r2))
                printf("Circles touch");
            else
                printf("One circle lies within another");
        }
    }
    return 0;
}
