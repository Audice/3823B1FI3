#include <stdio.h>

int main(){
    int year, year_l;
    scanf("%d", &year);
    year_l = year%12;
    printf("%d", year_l);
}