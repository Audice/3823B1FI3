#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main() {
    int vozrast, a, b;
    printf("Введите возраст: "); scanf("%d", &vozrast);
    a = vozrast/10;
    b = vozrast%10;
    switch (a){
        case 2: printf("двацать "); break;
        case 3: printf("тридцать "); break;
        case 4: printf("сорок "); break;
        case 5: printf("пятьдесят "); break;
        case 6: printf("шестьдесят "); break;}
    if (b!=0 && b<5){
        switch (b){
            case 1: printf("один год"); break;
            case 2: printf("два года"); break;
            case 3: printf("три года"); break;
            case 4: printf("четыре года"); break;}}
    else if (b>=5){
        switch (b){
            case 5: printf("пять лет"); break;
            case 6: printf("шесть лет"); break;
            case 7: printf("семь лет"); break;
            case 8: printf("восемь лет"); break;
            case 9: printf("девять лет"); break;}}
    else{
        printf("лет");}
}