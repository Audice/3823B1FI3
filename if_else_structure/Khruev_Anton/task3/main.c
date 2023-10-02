#include <stdio.h>

void main(){
    int x, y;
    printf("Input x and y:\n");
    scanf("%d %d",&x,&y);
    if (x == 0 || y == 0){
        if (x == y){
            printf("Origin of coordinates");
        }
        else if(x == 0){
            printf("axis - Y");
        }
        else{
            printf("axis - X");
        }
        
    }
    else{  
        if (x > 0 && y > 0){
            printf("axis = I");
        }
        if (x < 0 && y > 0){
            printf("axis = II");
        }
    }   if (x < 0 && y < 0){
            printf("axis = III");
        }
        if (x > 0 && y < 0){
            printf("axis = IV");
        }
}