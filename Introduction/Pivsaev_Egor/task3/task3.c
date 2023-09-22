#include <stdio.h>
#include <math.h>
int main(){
    double V, U, T1, T2, S;
    double s_lake, s_sea;
    scanf("%lf %lf %lf %lf", &V, &U, &T1, &T2);
    s_lake = V * T1;
    s_sea = (V - U) * T2;
    S = s_lake + s_sea;
    printf("Путь пройденный лодкой: %lf", S);
}