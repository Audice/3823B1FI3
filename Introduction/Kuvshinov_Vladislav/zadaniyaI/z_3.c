#include <stdio.h>
#include <math.h>

int main(){
    float v, u, t1, t2, s;
    scanf("%f %f %f %f", &v, &u, &t1, &t2);
    if(u >= v){
        printf("takoe\n");
    } else if(u == 0){
        s = v * t1;
        printf("%f\n", s);
        } else{
            s = (v - u) * t2;
            printf("%f\n", s);
        }
}