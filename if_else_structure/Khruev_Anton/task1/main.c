#include <stdio.h>

void main(){
    float estimation_1, estimation_2, estimation_3, average_score;
    printf("Input 3 estimation...\n",estimation_1,estimation_2,estimation_3);
    scanf("%f %f %f",&estimation_1, &estimation_2, &estimation_3);
    average_score = (estimation_1 + estimation_2 + estimation_3) / 3;
    printf("%f",average_score);
    if (average_score <= 5 && average_score >=4.5){
        printf("U exellent student");
    }
    else if (average_score < 4.5 && average_score >=4){
        printf("U good student");
    }
    else if (average_score < 4){
        printf("U troechnik");
    }
    else{
        printf("values entered incorrectly");
    }
}   