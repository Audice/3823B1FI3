#include <stdio.h>

#define Pi 3.14f


int main() {
    float l;
    
    printf("Insert: l.\n");
    scanf("%f", &l);

    printf("Circle area: %f.", l * l / (4 * Pi));

    return 0;
}