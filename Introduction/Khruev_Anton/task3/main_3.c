#include <stdio.h>

void main(){
    float v,u,t1,t2;
    scanf("%f %f %f %f",&v,&u,&t1,&t2);
    if (v > u){
        printf("baikal=%f, poreke=%f vmeste=%f",v*t1, (v-u)*t2,v*t1 + (v-u)*t2);
    }else{
    printf("U < V");
    }


}   


