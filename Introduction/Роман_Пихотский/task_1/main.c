#include<stdio.h>

int main()
{
    int a = 10, b = 5 ;
    int summ = a + b, difference = a - b, product_of_num = a * b ;
    float quotient = a / b ;

    printf("sum - %d, dif - %d, product of num - %d, quot - %lf", summ, difference, product_of_num, quotient);
    printf("\n");
}