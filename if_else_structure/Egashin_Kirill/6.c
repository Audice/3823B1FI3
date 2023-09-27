#include <stdio.h>

int main() 
{
    int a, b, c, d;

    printf("Insert: a, b, c, d.\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a != b && a != c)
        printf("1");
    else if (b != c && b != d)
        printf("2");
    else if (c != d && c != a)
        printf("3");
    else
        printf("4");

    return 0;
}