/*6 - Даны координаты трёх вершин треугольника
(X1, Y1), (X2, Y2), (X3, Y3). Найти его периметр и площадь. (3 балл)*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2, x3, y3;
    float perimetr, s, p;
    float a = 0, b = 0, c = 0;
    printf("Print the coordinates of the first point\n");
    scanf("%f %f", &x1, &y1);
    printf("Print the coordinates of the second point\n");
    scanf("%f %f", &x2, &y2);
    printf("Print the coordinates of the third point\n");
    scanf("%f %f", &x3, &y3);
    a = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    b = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    c = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    p = (a + b + c) / 2;
    perimetr = a + b + c;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("Square = %f\n", s);
    printf("Perimetr = %f\n", perimetr);
    return 0;
}
