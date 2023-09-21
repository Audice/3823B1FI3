#include <stdio.h>
#include <math.h>

int main(){
    float p = 3.14f, l, s, r;
    scanf("%f", &l);
    if(l < 0){
        printf("takoe\n");
    }else{
    r = l / (2 * p);
    s = p * r * r;
    printf("%f", s);
    }
}