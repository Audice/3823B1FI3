#include <stdio.h>

int main() 
{
    int x, y, z, t;

    printf("Insert: x, y, z.\n");
    scanf("%d %d %d", &x, &y, &z);

    if (x > y) 
    {
        t = x;
        x = y;
        y = t;
    }
    if (y > z)
    {
        t = y;
        y = z;
        z = t;
    }
    if (x > y) 
    {
        t = x;
        x = y;
        y = t;
    }

    printf("%d <= %d <= %d", x, y, z);

    return 0;
}