#include <stdio.h>
#include <math.h>

void main(){
    int a, sot, dec, edin;
    printf("Введите число: "); scanf("%d", &a);
    sot = a/100;
    dec = a/10%10;
    edin = a%10;
    switch(sot){
        case 1: printf("Сто "); break;
        case 2: printf("Двести "); break;
        case 3: printf("Триста "); break;
        case 4: printf("Четыреста "); break;
        case 5: printf("Пятьсот "); break;
        case 6: printf("Шесьтсот "); break;
        case 7: printf("Семьсот "); break;
        case 8: printf("Восемьсот "); break;
        case 9: printf("Девятьсот "); break;}
    if (dec == 0){
        switch(edin){
            case 1: printf("один"); break;
            case 2: printf("Два"); break;
            case 3: printf("Три"); break;
            case 4: printf("Четыре"); break;
            case 5: printf("Пять"); break;
            case 6: printf("Шесь"); break;
            case 7: printf("Семь"); break;
            case 8: printf("Восемь"); break;
            case 9: printf("Девять"); break;}}
    else if (dec == 1) {
        switch(edin){
            case 0: printf("десять"); break;
            case 1: printf("одиннадцать"); break;
            case 2: printf("двенадцать"); break;
            case 3: printf("Тринадцать"); break;
            case 4: printf("Четырнадцать"); break;
            case 5: printf("Пятнадцать"); break;
            case 6: printf("Шеснадцать"); break;
            case 7: printf("Семнадцать"); break;
            case 8: printf("Восемнадцать"); break;
            case 9: printf("Девятнадцать"); break;}}
    else{
        switch(dec){
            case 2: printf("двадцать "); break;
            case 3: printf("тридцать "); break;
            case 4: printf("сорок "); break;
            case 5: printf("пятьдесят "); break;
            case 6: printf("шестьдесят "); break;
            case 7: printf("семьдесят "); break;
            case 8: printf("восемьдесят "); break;
            case 9: printf("девяноста "); break;}
        switch(edin){
            case 1: printf("один"); break;
            case 2: printf("два"); break;
            case 3: printf("три"); break;
            case 4: printf("четыре"); break;
            case 5: printf("пять"); break;
            case 6: printf("шесть"); break;
            case 7: printf("семь"); break;
            case 8: printf("восемь"); break;
            case 9: printf("девять"); break;}}
}