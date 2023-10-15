#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int num = 32;
    int s = num / 10;
    int t = num % 10;
    
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
        case 0 :
            printf("лет");
            break;
        case 1 :
            printf("один год");
            break;
        case 2 :
            printf("два года");
            break;
        case 3 :
            printf("три года");
            break;
        case 4 :
            printf("четыре года");
            break;
        case 5 :
            printf("пять лет");
            break;
        case 6 :
            printf("шесть лет");
            break;
        case 7 :
            printf("семь лет");
            break;
        case 8 :
            printf("восемь лет");
            break;
        case 9 :
            printf("девять лет");
            break;
    }
    
}