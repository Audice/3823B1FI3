#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int a, dec, ed;
    printf("Введите возраст от 20 до 69 ");
    scanf("%d", &a);
    dec = a / 10 % 10;
    ed = a % 10;
    if(a<20 || a>69){
        printf("Возраст не соответсвует условию");
        
    }else{
        switch (dec)
        {
        case 2:printf("Двадцать ");
            break;
         case 3:printf("Тридцать ");
            break;
         case 4:printf("Сорок ");
            break;
         case 5:printf("Пятьдесят ");
            break;
         case 6:printf("Шестьдесят ");
            break;
        default:
            break;
        }
           switch (ed)
        {
        case 0: printf("лет");
            break;
        case 1: printf("один год");
            break;
        case 2:printf("два года");
            break;
         case 3:printf("три года");
            break;
         case 4:printf("четыре года");
            break;
         case 5:printf("пять лет");
            break;
         case 6:printf("шесть лет");
            break;
        case 7: printf("семь лет");
            break;
        case 8: printf("восемь лет");
            break;
        case 9: printf("девять лет");
            break;
        default:
            break;
        }
    }
 }