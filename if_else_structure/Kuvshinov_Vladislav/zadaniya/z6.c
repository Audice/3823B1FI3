#include <stdio.h>
#include <math.h>

void main(){
    int a, b, c, d, k;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a != b && a != c && a != d){
        printf("1");
    }else if(b != c && b != a && b != d){
        printf("2");
    }else if(c != a && c != b && c != d){
        printf("3");
    }else if(d != a && d != b && d != c){
        printf("4");
    }

}