#include <stdio.h>
#include <math.h>

void main(){
    float x1, y1, r1, x2, y2, r2, d1, d2, d3, ras;
    printf("vvedite centr 1-oy okrusgnosti i radius, zatem 2-oy\n");
    scanf("%f %f %f %f %f %f", &x1, &y1, &r1, &x2, &y2, &r2);
    ras = sqrtf(powf(x2 - x1, 2) + pow(y2 - y1, 2));
    d1 = r1 + r2;
    d2 = r1 - r2;
    d3 = r2 - r1;
    if(ras > d1){
        printf("net obshih tochek\n");
    }else if(ras == d1){
        printf("odna obshaya tochka\n");
    }else if(ras < d1 && ras > d2 && ras > d3){
        printf("2 tochki peresecheniya\n");
    }else if(ras < d2 || ras < d3){
        printf("lezhit odna v drugoi\n");
    }



}