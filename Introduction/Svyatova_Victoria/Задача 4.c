/*4 - �������� ������� ���������� V1 ��\�, ������� - V2 ��\�,
���������� ����� ���� S ��. ���������� ���������� ����� ����
����� T �����, ���� ���������� ��������� ���� �� �����. (2 ����)*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1 = 0, v2 = 0, t = 0, s = 0;
    printf("Print car_1 speed\n");
    scanf("%f", &v1);
    printf("Print car_2 speed\n");
    scanf("%f", &v2);
    printf("Print distance\n");
    scanf("%f", &s);
    printf("Print time\n");
    scanf("%f", &t);
    printf("Distance = %f\n", (v1+v2)*t + s);
    return 0;
}
