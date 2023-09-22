#include <stdio.h>
#include <math.h>


int main() {
    float x1, y1, x2, y2, x3, y3;

    printf("Enter sequentially, separated by spaces: x1, y1, x2, y2, x3, y3.\n");
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);

    printf("Triangle area: %f, triangle perimeter: %f", 
    0.5f * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)), 
    sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) + sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2)) + sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2)));

    return 0;
}