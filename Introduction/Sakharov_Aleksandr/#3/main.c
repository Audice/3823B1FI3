#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int v,u,t1,t2;
    scanf("%d %d %d %d",&v,&u,&t1,&t2);
    int s = v*t1+(v-u)*t2;
    printf("%d",s);
}