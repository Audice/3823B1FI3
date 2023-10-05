#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    printf("Введите число  ");
    int a,b,c,d;
    scanf("%d", &a);
    b=a/100;
    c=a/10%10;
    d=a%10;
    switch (b)
    {
    case 1: printf("сто ");
        break;
    case 2: printf("двести ");
        break;
     case 3:printf("триста ");
        break;
     case 4:printf("четыреста ");
        break;
     case 5:printf("пятьсот ");
        break;
      case 6:printf("шестьсот ");
        break;
      case 7:printf("семьсот ");
        break;
     case 8:printf("восемьсот ");
        break;
     case 9:printf("девятьсот ");
        break;      
    default:
        break;
    }
    if(c == 1 && d > 0){
    switch (d)
    {
    case 1: printf("Одиннадцать");
      break;
      case 2: printf("Двенадцать");
      break;
      case 3: printf("Тринадцать");
      break;
      case 4: printf("Четырнадцать");
      break;
      case 5: printf("Пятнадцать");
      break;
      case 6: printf("Шестнадцать");
      break;
      case 7: printf("Семнадцать");
      break;
      case 8: printf("Восемнадцать");
      break;
      case 9: printf("Девятнадцать");
      break;
    
    default:
      break;
    }
    }else{
    switch (c)
    {
    case 1: printf("десять ");
        break;
    case 2: printf("двадцать ");
        break;
     case 3:printf("тридцать ");
        break;
     case 4:printf("сорок ");
        break;
     case 5:printf("пятьдесят ");
        break;
      case 6:printf("шестьдесят ");
        break;
      case 7:printf("семьдесят ");
        break;
     case 8:printf("восемьдесят ");
        break;
     case 9:printf("девяносто ");
        break;      
    default:
        break;
    }
     switch (d)
    {
    case 1: printf("один");
        break;
    case 2: printf("два");
        break;
     case 3:printf("три");
        break;
     case 4:printf("четыре");
        break;
     case 5:printf("пять");
        break;
      case 6:printf("шесть");
        break;
      case 7:printf("семь");
        break;
     case 8:printf("восемь");
        break;
     case 9:printf("девять");
        break;      
    default:
        break;
    }}
}