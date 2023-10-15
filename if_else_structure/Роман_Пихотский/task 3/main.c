#include <stdio.h>
#include <math.h>

int main()
{
    float x = 3, y = 9 ;
    if (x > 0) {
        if (y > 0)
            printf("1 area");
        if (y < 0)
            printf("4 area");
    }
    if (x < 0){
        if (y > 0)
            printf("2 area");
        if (y < 0)
            printf("3 area");
    }
    
    if (x == 0)
        printf("os y");
    if (y == 0)
        printf("os x");
    
}
