#include <stdio.h>
#include <math.h>

void main(){
    float x1, y1, x2, y2, x3, y3, p, ras1, ras2, ras3, s;
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
    ras1 = sqrtf(powf(x2 - x1, 2) + powf(y2 - y1, 2));
    ras2 = sqrtf(powf(x3 - x2, 2) + powf(y3 - y2, 2));
    ras3 = sqrtf(powf(x3 - x1, 2) + powf(y3 - y1, 2));
    if(ras1 > ras2 + ras3 || ras2 > ras1 + ras3 || ras3 > ras1){
        printf("takoe\n");
    }else{
        p = (ras1 + ras2 + ras3) / 2;
        s = sqrtf(p * (p - ras1) * (p - ras2) * (p - ras3));
        printf("%f %f\n", s, p * 2);}
    }