/*4 - Определить вид треугольника по заданным длинам сторон. (2 балл)*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    printf("Print the lenghts of the sides\n");
    printf("Enter the sides in ascending order\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b <= c || a + c <= b || b + c <= a)
        printf("The triangle does not exist\n");
    else{
            if (a == b && b == c)
            printf("Equilateral triangle \n");
        else{
            if (a == b || b == c || c == a)
                printf("Isosceles triangle \n");
            else
                printf("Versatile triangle \n");
        }
        if (c * c == a * a + b * b)
            printf("Rectangular triangle \n");
        else {
            if (c * c > a * a + b * b)
                printf("Obtuse - angle triangle \n");
            else
                printf("Sharp - angled triangle \n");
        }
    }

    return 0;
}
