#include <stdio.h>

void main(){
    int a,b;
    scanf("%d %d",&a,&b);
    float c = a/b;
    printf("%d %d %d %f", a+b, a-b, a*b, c);
}