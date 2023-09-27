#include<stdio.h>
#include<math.h>

void main(){
    float x1,x2,x3,y1,y2,y3;
    float a,b,c,S,p;
    printf("Input x1 and y1: \n");
    scanf("%f %f",&x1,&y1);
    printf("Input x2 and y2: \n");
    scanf("%f %f",&x2,&y2);
    printf("Input x3 and y3: \n");
    scanf("%f %f",&x3,&y3);
    
    a = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    b = sqrt(pow(x3-x2,2) + pow(y3-y2,2));
    c = sqrt(pow(x3-x1,2) + pow(y3-y1,2));

    p = (a + b + c) / 2;
    
    S = sqrt(p*(p-a)*(p-b)*(p-c));
    
    printf("Half - meter = %f \nSquare = %f", p, S);


}