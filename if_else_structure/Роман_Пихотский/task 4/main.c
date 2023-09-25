#include <stdio.h>
#include <math.h>

int main()
{
    float f_s = 5 , s_s = 6, t_s = 4 ;
    float maxim = f_s, dif1 = s_s;
    if (s_s > maxim){
        maxim = s_s;
        dif1 = t_s;
    }
    if (t_s > maxim){
        maxim = t_s;
        dif1 = f_s;
    }
    
    float dif2 = f_s + s_s + t_s - dif1 - maxim;
    float summ = pow(dif1, 2) + pow(dif2, 2) - pow(maxim, 2);
    
    if (summ == 0)
        printf("right triangle");
    if (summ < 0)
        printf("obtuse triangle");
    if (summ > 0)
        printf("acute triangle");
    
    
    
}