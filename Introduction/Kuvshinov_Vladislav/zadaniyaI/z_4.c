#include <stdio.h>
#include <math.h>

int main(){
    float v1, v2, t, s, s1;
    scanf("%f %f %f %f", &v1, &v2, &t, &s);
    s1 = v1 * t + v2 * t;
    if (v1 < 0 || v2 < 0 || t < 0|| s < 0){
        printf("takoe\n");
    }else{
        s = s + s1;
        printf("%f\n", s);
    }
}