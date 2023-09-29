#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main() {
    int god, s, k;
    printf("Введите год: "); scanf("%d", &god);
    s = (god%60)%12;
    k = god%10;
    printf("Год ");
    if (s == 1 || s == 5 || s == 6 || s == 7 || s == 8){
        switch (k){
            case 0: printf("Белого"); break;
            case 1: printf("Белого"); break;
            case 2: printf("Черного"); break;
            case 3: printf("Черного"); break;
            case 4: printf("Синего"); break;
            case 5: printf("Синего"); break;
            case 6: printf("Красного"); break;
            case 7: printf("Красного"); break;
            case 8: printf("Желтого"); break;
            case 9: printf("Желтого"); break;}}
    else{
        switch (k){
            case 0: printf("Белой"); break;
            case 1: printf("Белой"); break;
            case 2: printf("Черной"); break;
            case 3: printf("Черной"); break;
            case 4: printf("Синий"); break;
            case 5: printf("Синий"); break;
            case 6: printf("Красной"); break;
            case 7: printf("Красной"); break;
            case 8: printf("Желтой"); break;
            case 9: printf("Желтой"); break;}}
    switch ((s)%12){
        case 0: printf(" Обезьяны"); break;
        case 1: printf(" Петуха"); break;
        case 2: printf(" Собаки"); break;
        case 3: printf(" Свиньи"); break;
        case 4: printf(" Крысы"); break;
        case 5: printf(" Быка"); break;
        case 6: printf(" Тигра"); break;
        case 7: printf(" Кролика"); break;
        case 8: printf(" Дракона"); break;
        case 9: printf(" Змеии"); break;
        case 10: printf(" Лошади"); break;
        case 11: printf(" Овцы"); break;}
}
