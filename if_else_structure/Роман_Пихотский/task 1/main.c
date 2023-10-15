#include <stdio.h>

int main()
{
    int f_m = 5, s_m = 3, t_m = 5;
    float mark = (f_m + s_m + t_m) / 3.0;
    while(1){
        if (mark > 4){
            mark = 5 ;
            break;
        }
        if (mark > 3){
            mark = 4;
            break;
        }
        if (mark > 2){
            mark = 3;
            break;
        }
        mark = 2;
    }
    printf("Mark - %lf", mark);

    return 0;
}