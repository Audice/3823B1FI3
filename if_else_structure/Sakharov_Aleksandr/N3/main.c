#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main() {
    setlocale(LC_ALL, "Rus");
    int x, y;
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0){
        printf("1 четверть");
    }
    if (x < 0 && y > 0){
        printf("2 четверть");
    }
    if (x < 0 && y < 0){
        printf("3 четверть");
    }
    if (x > 0 && y > 0){
        printf("4 четверть");
    }
    if (x == 0 && y != 0){
        printf("OY");
    }
    if (x != 0 && y == 0){
        printf("OX");
    }
    if (x == 0 && y == 0){
        printf("Начало координат");
    }
}