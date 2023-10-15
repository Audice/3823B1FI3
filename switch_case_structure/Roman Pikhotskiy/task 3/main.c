#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int year = 2023;
    int animal = (year - 1924) % 12 ;
    int color = (year - 1924) % 10 / 2;
    
    printf("год ");
    
    switch(animal){
        case 0 :
            printf("крысы ");
            break;
        case 1 :
            printf("быка ");
            break;
        case 2 :
            printf("тигра ");
            break;
        case 3 :
            printf("кролика ");
            break;
        case 4 :
            printf("дракона ");
            break;
        case 5 :
            printf("змеи ");
            break;
        case 6 :
            printf("лошади ");
            break;
        case 7 :
            printf("овцы ");
            break;
        case 8 :
            printf("обезьяны ");
            break;
        case 9 :
            printf("петуха ");
            break;
        case 10 :
            printf("собаки ");
            break;
        case 11 :
            printf("свиньи ");
            break;
    }
    
    switch(color){
        case 0 :
            printf("зеленого ");
            break;
        case 1 :
            printf("красного ");
            break;
        case 2 :
            printf("желтого ");
            break;
        case 3 :
            printf("белого ");
            break;
        case 4 :
            printf("синего ");
            break;
    }
    printf("цвета");
    
}
