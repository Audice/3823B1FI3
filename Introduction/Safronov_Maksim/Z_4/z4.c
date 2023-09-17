#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main() {
    int v1, v2, s, t;
    printf("Введите скорость 1 авто, 2 авто и расстояние между ними:");
    scanf("%d %d %d", &v1, &v2, &s);
    printf("Введите время их удаления друг от друга: ");
    scanf("%d", &t);
    printf("Через %d часов автомобили удалятся друг от друга на %d км", t, s+(v1+v2)*t);
}