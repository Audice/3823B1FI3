/*1 - Определить по результатам сессии, состоящей
из трёх экзаменов, тип учащегося: отличник, хорошист, двоечник. (1 балл)*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float exam_1, exam_2, exam_3, average;
    printf("Print exam scores\n");
    scanf("%f %f %f", &exam_1, &exam_2, &exam_3);
    average = (exam_1 + exam_2 + exam_3)/3;
    if (average >= 4.5)
        printf("Excellent student");
    else{
        if(average >= 3.5)
            printf("Good student");
        else
            printf("Bad student");
    }
    return 0;
}

