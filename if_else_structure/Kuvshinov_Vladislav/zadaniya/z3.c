#include <stdio.h>
#include <math.h>

void main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if(x > 0 && y > 0){
        printf("1-ya chetvert`\n");
    }else if(x < 0 && y > 0){
        printf("2-ya chetvert`\n");
    }else if(x < 0 && y < 0){
        printf("3-ya chetvert`\n");
    }else if(x > 0 && y < 0){
        printf("4-ya chetvert`\n");
    }else if(x == 0 && y == 0){
        printf("nachalo\n");
    }else if(x == 0 && y != 0){
        printf("os` y");
    }else if(x != 0 && y == 0){
        printf("os` x");
    }


    
}