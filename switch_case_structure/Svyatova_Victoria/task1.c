/*1 - По заданному числу в диапазоне 100-999 выводить строку - словесное описание данного числа. 
Например, 256 - "двести пятьдесят шесть", а 814 - "восемьсот четырнадцать" (2 балл)*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "");
    int a;
    wprintf(L"Введите число\n");
    scanf("%d", &a);
    switch (a/100)
    {
        case 1: wprintf(L"Сто "); break;
        case 2: wprintf(L"Двести "); break;
        case 3: wprintf(L"Триста "); break;
        case 4: wprintf(L"Четыреста "); break;
        case 5: wprintf(L"Пятьсот "); break;
        case 6: wprintf(L"Шестьсот "); break;
        case 7: wprintf(L"Семьсот "); break;
        case 8: wprintf(L"Восемьсот "); break;
        case 9: wprintf(L"Девятьсот "); break;
    }
    if ((a%100)>9 && (a%100)<20)
    {
        switch (a%100)
        {
            case 10: wprintf(L"десять "); break;
            case 11: wprintf(L"одиннадцать "); break;
            case 12: wprintf(L"двенадцать "); break;
            case 13: wprintf(L"тринадцать "); break;
            case 14: wprintf(L"четырнадцать "); break;
            case 15: wprintf(L"пятнадцать "); break;
            case 16: wprintf(L"шестнадцать "); break;
            case 17: wprintf(L"семнадцать "); break;
            case 18: wprintf(L"восемнадцать "); break;
            case 19: wprintf(L"девятнадцать "); break;
        }
    }
    else
    {
        switch (a/10%10)
        {
            case 1: wprintf(L"десять "); break;
            case 2: wprintf(L"двадцать "); break;
            case 3: wprintf(L"тридцать "); break;
            case 4: wprintf(L"сорок "); break;
            case 5: wprintf(L"пятьдесят "); break;
            case 6: wprintf(L"шестьдесят "); break;
            case 7: wprintf(L"семьдесят "); break;
            case 8: wprintf(L"восемьдесят "); break;
            case 9: wprintf(L"девяносто "); break;
        }
        switch (a%10)
        {
            case 1: wprintf(L"один"); break;
            case 2: wprintf(L"два"); break;
            case 3: wprintf(L"три"); break;
            case 4: wprintf(L"четыре"); break;
            case 5: wprintf(L"пять"); break;
            case 6: wprintf(L"шесть"); break;
            case 7: wprintf(L"семь"); break;
            case 8: wprintf(L"восемь"); break;
            case 9: wprintf(L"девять"); break;
        }
    }
    return 0;
}
