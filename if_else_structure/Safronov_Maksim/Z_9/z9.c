#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main(){
    int x, y;
    printf("Введите x и y: "); scanf("%d %d", &x, &y);
    if (x!=0 && y!=0){
        if (x>0 && y>0)
            printf("точка с координатами %d и %d находится в 1 четверти", x, y);
        else if (x>0 && y<0)
            printf("точка с координатами %d и %d находится в 4 четверти", x, y);
        else if (x<0 && y>0)
            printf("точка с координатами %d и %d находится во 2 четверти", x, y);
        else if (x<0 && y<0)
            printf("точка с координатами %d и %d находится в 3 четверти", x, y);}
    else if (x == 0 & y == 0){
        printf("точка с координатами %d и %d находится в начале координат", x, y);}
    else{
        if (x == 0)
            printf("точка с координатами %d и %d находится на оси Y", x, y);
        else if (y == 0)
            printf("точка с координатами %d и %d находится на оси X", x, y);}
}