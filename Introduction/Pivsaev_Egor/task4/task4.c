#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    double V1, V2, S, T, result;
    scanf("%lf %lf %lf %lf", &V1, &V2, &S, &T);
    result = abs(S-(V1*T+V2*T));
    printf("%lf", result);
}