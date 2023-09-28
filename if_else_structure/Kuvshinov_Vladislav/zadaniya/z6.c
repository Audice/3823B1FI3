#include <stdio.h>
#include <math.h>

void main(){
    int a, b, c, d, k;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a / b == 1 || a % b != 0){
        printf("1");
    }else if(b / c == 1 || b % c != 0){
        printf("2");
    }else if(c / a == 1 || c % a != 0){
        printf("3");
    }else if(d / b == 1 || d % b != 0){
        printf("4");
    }

}