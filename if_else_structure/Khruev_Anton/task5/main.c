#include <stdio.h>

void main(){
    int x,y,z;
    printf("Input 3 numb...\n");
    scanf("%d %d %d", &x, &y, &z);
    int array[3] = {x, y, z};

    if (x >= y && x >=z){
        array[0] = x;
        if (y >= z){
            array[1] = y;
            array[2] = z;
        }
        else{
            array[1] = z;
            array[2] = y;  
        }
    }
        
    else if (y >= x && y >= z){
        array[0] = y;
        if (x >= z){
            array[1] = x;
            array[2] = z;
        }
        else{
            array[1] = z;
            array[2] = x;  
        }
    }
    else {
        array[0] = z;
        if (x >= y){
            array[1] = x;
            array[2] = y;
        }
        else{
            array[1] = y;
            array[2] = x;  
        }
    }

    printf("%d <= %d <= %d",array[2],array[1],array[0]);
}