#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main() {
    setlocale(LC_ALL, "Rus");
    int x, y, z, w;
    int p1, p2;
    scanf("%d %d %d %d", &x, &y, &z, &w);
    if (x != y && x != z) printf("1");
    if (y != x && y != z) printf("2");
    if (z != y && z != x) printf("3");
    if (w != y && w != z) printf("4");
}