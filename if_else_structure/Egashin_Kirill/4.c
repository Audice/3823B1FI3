#include <stdio.h>

int main() 
{
    int a, b, c;

    do 
    {
    printf("Insert side lengths.\n");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a + b <= c || a + c <= b || b + c <= a)
        printf("Doesn't exist.\n");
    } while (a + b <= c || a + c <= b || b + c <= a);

    if (a == b && b == c) 
        printf("Equilateral.");
    else if (a == b || b == c || a == c)
        printf("Isosceles.");
    else
        printf("Scalene.");
    
    return 0;
}