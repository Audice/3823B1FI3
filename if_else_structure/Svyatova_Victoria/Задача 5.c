/*5 - �������� ���������� x, y, z �������� ������� ���,
����� ��� ��������� �������������� �� �����������: x <= y <= z. (3 ����)*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, z;
    printf("Print numbers\n");
    scanf("%f %f %f", &x, &y, &z);
    if (x > y)
    {
        y = x + y;
        x = y - x;
        y = y - x;
    }
    if (y > z)
    {
        y = z + y;
        z = y - z;
        y = y - z;
    }
    if (x > y)
    {
        y = x + y;
        x = y - x;
        y = y - x;
    }
    printf("x = %f, y = %f, z = %f", x, y, z);
    return 0;
}
