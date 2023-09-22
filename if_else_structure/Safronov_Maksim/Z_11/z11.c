#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main() {
    float x, y, z;
    printf("Введите значение переменыых x, y, z: "); scanf("%f %f %f", &x, &y, &z);
    if (x>=y && z<=y){
        printf("%f %f %f", z, y, x);}
    else if (x>=y && z>=x){
        printf("%f %f %f", y, x, z);}
    else if (x>=y && z>=y){
        printf("%f %f %f", y, z, x);}
    else if (y>=x && x<=z && y>=z){
        printf("%f %f %f", x, z, y);}
    else if (y>=x && x>=z){
        printf("%f %f %f", z, x, y);}
    else if (z>=y && y>=x){
        printf("%f %f %f", x, y, z);}
}