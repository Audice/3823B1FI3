#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Rus");
    float x1, y1, r1;
    float x2, y2, r2;
    float distance;
    
    printf("Введите координаты центра первой окружности (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Введите радиус первой окружности: ");
    scanf("%f", &r1);
    printf("Введите координаты центра первой окружности (x2, y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Введите радиус второй окружности: ");
    scanf("%f", &r2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (distance > r1 + r2) {
        printf("Окружности не пересекаются\n");
    }
    else if (distance == r1 + r2) {
        printf("Окружности касаются внешним образом\n");
    }
    else if (distance < r1 + r2 && distance > fabs(r1 - r2)) {
        printf("Окружности пересекаются\n");
    }
    else if (distance == fabs(r1 - r2)) {
        printf("Окружности касаются внутренним образом\n");
    }
    else if (distance < fabs(r1 - r2)) {
        printf("Одна окружность вложена в другую\n");
    }
    return 0;
}
