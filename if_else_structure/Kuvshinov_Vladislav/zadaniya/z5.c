#include <stdio.h>
#include <math.h>

void main(){
    float x, y, z, x1, y1, z1;
    printf("vvedite po poryadku\n");
    scanf("%f %f %f", &x, &y, &z);
    if(x >= y && x > z && z <= y){
        printf("%f %f %f", z, y, x);
    }else if(x >= z && x > y && y <= z){
        printf("%f %f %f", y, z, x);
    }else if(y >= x && y > z && z <= x){
        printf("%f %f %f", z, x, y);
    }else if(y >= z && y > x && x <= z){
        printf("%f %f %f", x, z, y);
    }else if(z >= x && z > y && y <= x){
        printf("%f %f %f", y, x, z);
    }else if(z >= y && z > x && x <= y){
        printf("%f %f %f", x, y, z);
    }
}