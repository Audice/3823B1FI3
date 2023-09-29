#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, t, s;
    scanf("%f %f %f", &c, &a, &b);
    t = a * a + b * b;
    s = a + b;
    if(c >= a && c >= b && s > c && c * c < t){
        printf("ostroygolnyi\n");
        }else if(c > a && c > b && s > c && c * c == t){
            printf("pryamougolnyi\n");
        }else if(c > a && c > b && s > c && c * c > t){
            printf("tupougolniy\n");
            }else{
                printf("stupai\n");
            }



}