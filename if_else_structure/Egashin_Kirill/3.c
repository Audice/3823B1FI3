#include <stdio.h>

int main() 
{
    int x, y;

    printf("Insert x, y coordinates.\n");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0) 
    {
        printf("At the origin.");
        return 0;
    }
    if (x == 0) 
    {
        printf("At the y-axis.");
        return 0;
    }
    if (y == 0) 
    {
        printf("At the x-axis.");
        return 0;
    }
    if (x > 0) 
    {
        if (y < 0) 
        {
            printf("IV Quadrant.");
            return 0;
        }
        else 
        {
            printf("I Quadrant.");
            return 0;  
        }
    }
    else 
    {
        if (y < 0) 
        {
            printf("III Quadrant.");
            return 0;
        }
        else 
        {
            printf("II Quadrant.");
            return 0;  
        }
    }
}