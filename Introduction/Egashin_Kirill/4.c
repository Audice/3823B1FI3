#include <stdio.h>


int main() {
    int v1, v2, s, t;

    printf("Enter sequentially, separated by spaces: v1, v2, s, t.\n");
    scanf("%d %d %d %d", &v1, &v2, &s, &t);

    printf("Distance in T hours: %d", (v1 + v2) * t + s);
    
    return 0;
}