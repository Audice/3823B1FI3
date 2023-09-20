#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main() {
    float x1, y1, x2, y2, r1, r2, maxx, minx, d;
    printf("координаты и радиус 1 окр-ти: "); scanf("%f %f %f", &x1, &y1, &r1);
    printf("координаты и радиус 1 окр-ти: "); scanf("%f %f %f", &x2, &y2, &r2); 
    d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    if (r1>r2) {
        maxx = r1;
        minx = r2;}
    else{
        maxx = r2;
        minx = r1;}
    if (d<(maxx - minx)) {
        printf("Окружность с радиусом  %f ледит в нутри окружности %f", minx, maxx);}
    else if (d>maxx+minx) {
        printf("окрожности не соприкасаются");}
    else if (d = maxx - minx) {
        printf("окружности касаются изнутри");}
    else{
        printf("окружности касаются извне");}
}