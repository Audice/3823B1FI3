#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int num = 814;
    int f = num / 100;
    int s = num % 100 / 10;
    int t = num % 10;
    int st = num % 100;
    
    switch (f){
        case 1:
            printf("Сто ");
            break;
        case 2:
            printf("Двести ");
            break ;
        case 3:
            printf("Триста ");
            break;
        case 4:
            printf("Четыреста ");
            break;
        case 5:
            printf("Пятьсот ");
            break;
        case 6:
            printf("Шестьсот ");
            break;
        case 7:
            printf("Семьсот ");
            break;
        case 8:
            printf("Восемьсот ");
            break;
        case 9:
            printf("Девятьсот ");
            break;
    }
    
    switch(st){
        case 10:
            printf("десять");
            return 0;
        case 11 :
            printf("одиннадцать");
            return 0;
        case 12 :
            printf("двенадцать");
            return 0;
        case 13 :
            printf("тринадцать");
            return 0;
        case 14 :
            printf("четырнадцать");
            return 0;
        case 15 :
            printf("пятнадцать");
            return 0;
        case 16 :
            printf("шестнадцать");
            return 0;
        case 17 :
            printf("семнадцать");
            return 0;
        case 18 :
            printf("восемнадцать");
            return 0;
        case 19 :
            printf("девятнадцать");
            return 0;
    }
    
    switch(s){
        case 2:
            printf("двадцать ");
            break;
        case 3:
            printf("тридцать ");
            break;
        case 4:
            printf("сорок ");
            break;
        case 5:
            printf("пятьдесят ");
            break;
        case 6:
            printf("шестьдесят ");
            break;
        case 7:
            printf("семьдесят ");
            break;
        case 8:
            printf("восемьдесят ");
            break;
        case 9:
            printf("девяносто ");
            break;
    }
    
    switch(t){
        case 1 :
            printf("один");
            break;
        case 2 :
            printf("два");
            break;
        case 3 :
            printf("три");
            break;
        case 4 :
            printf("четыре");
            break;
        case 5 :
            printf("пять");
            break;
        case 6 :
            printf("шесть");
            break;
        case 7 :
            printf("семь");
            break;
        case 8 :
            printf("восемь");
            break;
        case 9 :
            printf("девять");
            break;
    }
}