#include <stdio.h>


int main() {
    float s1, s2, s3, average;

    printf("Insert sessions results: ");
    scanf("%f %f %f", &s1, &s2, &s3);
    
    average = (s1 + s2 + s3) / 3;

    if (average  >= 4.5f) 
        printf("A-student.");
    else if (average >= 3.5f) 
        printf("B-student.");
    else
        printf("D-student.");
    
    return 0;
}