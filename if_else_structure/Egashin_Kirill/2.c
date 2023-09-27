#include <stdio.h>
#include <math.h>


int main() {
    float x1, y1, x2, y2, r1, r2, dist;

    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    if ((r1 > r2 + dist) || (r2 > r1 + dist))
    {
        printf("One in the other.");
    }
    else if (r1 + r2 == dist) 
    {
        printf("They have one touch point.");
    } 
    else if (r1 + r2 > dist)
    {
        printf("They have two touch points.");
    }
    else 
    {
        printf("Not touching");
    }
    
    return 0;
}