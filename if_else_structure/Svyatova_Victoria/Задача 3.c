/*3 - ���� ������������� ���������� ����� ��������� (x, y).
���������� �������, ������� ����������� ��� �����: ����� ��������,
��� ��� ���, ��� ������ ���������. (2 ����)*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y;
    printf("Print the coordinates:\n");
    scanf("%d %d", &x, &y);
    if (x == 0 && y == 0)
        printf("Origin of coordinates");
    else
    {
        if (x != 0 && y == 0)
            printf("A point on the x-axis");
        else
        {
            if (x == 0 && y != 0)
                printf("A point on the y-axis");
            else
            {
                if (x > 0 && y > 0)
                    printf("A point in 1 quarter");
                else
                {
                    if (x < 0 && y > 0)
                        printf("A point in 2 quarter");
                    else
                    {
                        if (x < 0 && y < 0)
                            printf("A point in 3 quarter");
                        else
                        {
                            printf("A point in 4 quarter");
                        }
                    }
                }
            }
        }
    }
    return 0;
}
