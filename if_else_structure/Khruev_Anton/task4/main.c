#include<stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int a, b, c, max, min;
    printf("Input sides of triangle...\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c){
        max = a;
        if (b > c)
            min = c;
        else
            min = b;   
    }
    if (b > a && b > c){
        max = b;
        if (a > c)
                min = c;
        else
            min = a;
    }
    if (c > a && c > b){
        max = c;
        if (a > b)
            min = b;
        else
            min = a;
    }
    if (pow(max,2) == pow(min,2) + pow(((a + b + c) - max - min),2))
        printf("pryamoug");
    else if (pow(max,2) <= pow(min,2) + pow(((a + b + c) - max - min),2))
        printf("ostriy");
    else
        printf("tupoi");
    
}   