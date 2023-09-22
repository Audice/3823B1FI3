#include <stdio.h>
#include <locale.h>

void main(){
    int x, a, b, c;
    setlocale(LC_ALL, "Rus");
    scanf("%d", &x);
    a = x / 100;
    b = x / 10 % 10;
    c = x % 10;
    switch (a)
    {
    case 1:
        printf("сто ");
        break;
    case 2:
        printf("двести ");
        break;
    case 3:
        printf("триста ");
        break;
    case 4:
        printf("четыреста ");
        break;
    case 5:
        printf("пятьсот ");
        break;
    case 6:
        printf("шестьсот ");
        break;
    case 7:
        printf("семьсот ");
        break;
    case 8:
        printf("восемьсот ");
        break;
    case 9:
        printf("девятьсот ");
        break;
}
switch (b)
    {
    case 1:
        switch (c){
    case 1:
        printf("одиннадцать ");
        break;
    case 2:
        printf("двенадцать ");
        break;
    case 3:
        printf("тринадцать ");
        break;
    case 4:
        printf("четырнадцать ");
        break;
    case 5:
        printf("пятнадцать ");
        break;
    case 6:
        printf("шестнадцать ");
        break;
    case 7:
        printf("семнадцать ");
        break;
    case 8:
        printf("восемнадцать ");
        break;
    case 9:
        printf("девятнадцать ");
        break;
}
break;
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
if (b!= 1){
    switch (c)
    {
    case 1:
        printf("один ");
        break;
    case 2:
        printf("два ");
        break;
    case 3:
        printf("три ");
        break;
    case 4:
        printf("четы ");
        break;
    case 5:
        printf("пять ");
        break;
    case 6:
        printf("шесть ");
        break;
    case 7:
        printf("семь ");
        break;
    case 8:
        printf("восемь ");
        break;
    case 9:
        printf("девять ");
        break;
}
}
}
