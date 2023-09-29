#include <stdio.h>

int main(){
    int numb;
    int numb_h, numb_ty, numb_last; 
    scanf("%d", &numb);
    numb_h = numb/100;
    numb_ty = (numb/10)%10;
    numb_last = numb%10;
    switch (numb_h){
        case 1: printf("Сто ");break;
        case 2: printf("Двести ");break;
        case 3: printf("Триста ");break;
        case 4: printf("Четыреста ");break;
        case 5: printf("Пятьсот ");break;
        case 6: printf("Шестьсот ");break;
        case 7: printf("Семьсот ");break;
        case 8: printf("Восемьсот ");break;
        case 9: printf("Девятьсот ");break;
    }
    switch (numb_ty){
        case 0: printf("");break;
        case 1: printf("десять ");break;
        case 2: printf("двадцать ");break;
        case 3: printf("тридцать ");break;
        case 4: printf("сорок ");break;
        case 5: printf("пятьдесят ");break;
        case 6: printf("шестьдесят ");break;
        case 7: printf("семьдесят ");break;
        case 8: printf("восемьдесят ");break;
        case 9: printf("девяноста ");break;
    }
    switch (numb_last){
        case 0: printf("");break;
        case 1: printf("один ");break;
        case 2: printf("два ");break;
        case 3: printf("три ");break;
        case 4: printf("четыре ");break;
        case 5: printf("пять ");break;
        case 6: printf("шесть ");break;
        case 7: printf("семь ");break;
        case 8: printf("восесь ");break;
        case 9: printf("девять ");break;
    }
}