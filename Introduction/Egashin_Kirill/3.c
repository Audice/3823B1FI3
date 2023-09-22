#include <stdio.h>


int main() {
    int v, u, t1, t2;
    
    do {
        printf("Enter sequentially, separated by spaces: v, u, t1, t2 (U < V).\n");
        scanf("%d %d %d %d", &v, &u, &t1, &t2);
        
        if (u >= v) {
            printf("U shoud be lower than V\n");
        } 
    } while (u >= v);

    printf("Distance traveled by boat: %d", v * t1 + (v - u) * t2);

    return 0;
}