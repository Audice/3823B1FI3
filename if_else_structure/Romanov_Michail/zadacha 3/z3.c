#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
int x,y;
printf("Введите координаты точки x,y ");
scanf("%d %d", &x, &y);
if(x>0 && y>0){
    printf("Первая четверть");
}else{
    if(x>0 && y<0)
    printf("Четвёртая четверть");
    if(x<0 && y>0)
    printf("Вторая четверть");
    if(x<0 && y<0)
    printf("Третья четверть");
    if(x == 0 && y == 0)
    printf("Начало координат");
    if(x == 0 && y >0)
    printf("Ось y");
    if (x > 0 && y == 0)
    printf("Ось x");   
}
}