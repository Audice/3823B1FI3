#include <stdio.h>
#include <math.h>

void main(){
    float e1, e2, e3, sr;
    printf("vvedite ocenki\n");
    scanf("%f %f %f", &e1, &e2, &e3);
    sr = (e1 + e2 + e3)/3;
    if(sr < 3){
        printf("dvoechnik poluchaetsya\n");
    } else if(sr >= 4 && sr < 5){
        printf("хoroshist, нeploho\n");
    }else if(sr == 5){
        printf("otlichniк, мoloдec\n");
    }else if(sr >= 3 && sr < 4){
        printf("troechnik\n");
    }else{
        printf("incorrect tip\n");
    }


}