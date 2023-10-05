#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    double v, u, s;
    int t1, t2;
    scanf("%lf %lf", &v, &u);
    scanf("%d %d", &t1, &t2);
    if(v > u){
       s=((v+u)*t1+(v-u)*t2);
       printf("%lf", s);
    }else{
        printf("Несоответствует условию задачи");
    }
}