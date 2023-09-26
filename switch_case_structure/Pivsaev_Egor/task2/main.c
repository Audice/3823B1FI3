#include <stdio.h>

int main(){
    int numb, numb_ty, numb_f;
    scanf("%d", &numb);
    numb_ty = numb/10;
    numb_f = numb%10;
    switch (numb_ty){
        case 2: printf("Двадцать "); break;
        case 3: printf("Тридцать "); break;
        case 4: printf("Сорок "); break;
        case 5: printf("Пятьдесят "); break;
        case 6: printf("Шестьдесят"); break;
    }
    switch (numb_f){
        case 0: printf("лет"); break;
        case 1: printf("один год"); break;
        case 2: printf("два года"); break;
        case 3: printf("три года"); break;
        case 4: printf("четыре года"); break;
        case 5: printf("пять лет"); break;
        case 6: printf("шесть лет"); break;
        case 7: printf("семть лет"); break;
        case 8: printf("восемь лет"); break;
        case 9: printf("девЯть лет"); break;
    }
}
