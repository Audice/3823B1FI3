/*3 - �������� ����� � ������� ���� V ��\�, ��������
������� ���� U ��\� (U < V). ����� �������� ����� �� ����� T1 �,
� �� ���� (������ �������) - T2 �. ���������� ���� S, ���������� ������.
(2 ����)*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float v = 0, u = 0;
    float t_lake=0, t_river=0;
    printf("Print boat speed\n");
    scanf("%f", &v);
    printf("Print water speed\n");
    scanf("%f", &u);
    printf("Time on the lake\n");
    scanf("%f", &t_lake);
    printf("Time on the river\n");
    scanf("%f", &t_river);
    printf("Distance traveled on the lake = %f\n", t_lake*v);
    printf("Distance traveled on the river = %f\n", t_river*(v-u));
    return 0;
}
