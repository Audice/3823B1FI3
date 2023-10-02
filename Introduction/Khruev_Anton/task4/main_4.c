#include<stdio.h>

void main(){
    float v1,v2,s,t;
    printf("vvedite v1 v2 s t\n");
    scanf("%f %f %f %f",&v1,&v2,&s,&t);
    float rast = s + v1*t + v2*t;
    printf("S cherez t hours = %f",rast);
}