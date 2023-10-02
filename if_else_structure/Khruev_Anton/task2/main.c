#include <stdio.h>
#include <math.h>

void main(){
    float r1,r2;
    float x1,y1,x2,y2;
    float d;
    printf("Input r1, r2, x1, x2, y1, y2\n");
    scanf("%f %f %f %f %f %f", &r1, &r2, &x1, &x2, &y1, &y2);
    d = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    printf("%f %f",d, r1 + r2);
    if (d == r1 + r2)
        printf("the cirles toch");
    else if(d < r1 + r2)
        printf("the circles intersect");
    else if(d > r1 + r2)
        printf("the cirles dont tuch");
    else if (d < abs(r1 - r2))
        printf("the circles in circles");
}