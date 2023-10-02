#include <stdio.h>

void main(){
    int num1, num2, num3, num4, flag = 0;
    printf("Input 4 integers, one of which is different from the other 3...\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    printf("i from 0 to 3\n");
    if (num1 == num2 && num1 == num3 && num1 != num4){
        printf("i = 3");
        flag = 1;
    }
    if (num1 == num2 && num1 != num3 && num1 == num4){
        printf("i = 2");
        flag = 1;
    }
    if (num1 != num2 && num1 == num3 && num1 == num4){
        printf("i = 1");
        flag = 1;
    }
    if (num2 == num3 && num2 == num4 && num1 != num2){
        printf("i = 0");
        flag = 1;
    }
    if (flag == 0)
        printf("the data entered incorrect");
}
