/*6 - ���� ������ ����� �����, ���� �� �������
������� �� ��� ������, ������ ����� �����. ����� ����������
����� ����� �����. (3 ����)*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1, x2, x3, x4;
    printf("Print numbers\n");
    scanf("%f %f %f %f", &x1, &x2, &x3, &x4);
    if (x2 == x3 && x3 == x4)
        printf("Position 1");
    else
    {
        if (x1 == x3 && x3 == x4)
            printf("Position 2");
        else
        {
            if (x1 == x2 && x2 == x4)
                printf("Position 3");
            else
                printf("Position 4");
        }
    }
    return 0;
}
