#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int a,b;
    scanf("%d %d",&a,&b);
    float c = (pow(a,2)+pow(b,2))/2, d = (double)(abs(a)+abs(b))/2;
    printf("%f %f", c, d);
}