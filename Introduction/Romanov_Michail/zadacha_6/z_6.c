#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    double x1, x2, x3, y1, y2, y3, s;
    printf("Введите координаты x1,y1");
    scanf("%lf %lf", x1, y1);
     printf("Введите координаты x2,y2");
    scanf("%lf %lf", x2, y2);
     printf("Введите координаты x3,y3");
    scanf("%lf %lf", x3, y3);
    s = 0.5*fabs((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1));
printf("%lf", s);
   

}