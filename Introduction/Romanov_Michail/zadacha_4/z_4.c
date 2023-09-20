#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    double v1, v2, s1, s2;
    int t;
    printf("Введите скорость первого и второго автомобиля, расстояние между ними и время ");
    scanf("%lf %lf", &v1, &v2);
    scanf("%lf %d", &s1, &t);
    if(t > 1){
       s2=s1+(v1+v2)*t;
       printf("Через %d часов расстояние между автомобилями будет:%lf", t, s2);
    }else{
       s2=s1+(v1+v2)*t;
       printf("Через %d час расстояние между автомобилями будет:%lf", t, s2);
    }
}