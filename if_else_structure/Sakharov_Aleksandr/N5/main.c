#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main() {
    setlocale(LC_ALL, "Rus");
    int x, y, z;
    int p1, p2;
    scanf("%d %d %d", &x, &y, &z);
    
    
    if (y >= z){
        p1 = z;
        p2 = y;
        z = p2;
        y = p1;
    } 
    if (x >= z){
        p1 = x;
        p2 = z;
        x = p2;
        z = p1;
        if (x >= y){
        p1 = x;
        p2 = y;
        x = p2;
        y = p1;
    }
    }
    if (x >= y){
        p1 = x;
        p2 = y;
        x = p2;
        y = p1;
    }
    printf("%d %d %d", x, y, z);
    
}