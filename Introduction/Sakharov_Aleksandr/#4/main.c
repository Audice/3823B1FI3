#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int v1,v2,s,t;
    scanf("%d %d %d %d",&v1,&v2,&s,&t);
    int s2 = s+v1*t+v2*t;
    printf("%d",s2);
}