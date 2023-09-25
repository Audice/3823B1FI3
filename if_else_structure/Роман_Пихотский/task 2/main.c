#include <stdio.h>
#include <math.h>

int main()
{
    float x1 = 0, y1 = 0, x2 = 1, y2 = 0 ;
    int r1 = 3, r2 = 1 ;
    float summ = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) - (r1 + r2) ;
    
    if (x1 == x2 && y1 == y2){
        if (r1 == r2){
        printf("The circles coincide");
        }
        else {
            printf("One circle lies within another");
        }
        return 0;
    }
    if (summ == 0){
        printf("Circles touch");
        return 0;
    }
    if (summ > 0){
        printf("Circles don't touch");
        return 0;
    }
    printf("Circles intersect");
}