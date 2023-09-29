/*2 - По заданному возрасту в диапазоне 20-69 выводит строку - 
словесное описание указанного возраста, правильно согласуя число 
со словом "год". Пример: 20 - "двадцать лет", 32 - "тридцать два года". 
(2 балл)*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "");
    int a;
    wprintf(L"Введите возраст\n");
    scanf("%d", &a);
    switch (a/10)
    {
        case 2: wprintf(L"Двадцать "); break;
        case 3: wprintf(L"Тридцать "); break;
        case 4: wprintf(L"Сорок "); break;
        case 5: wprintf(L"Пятьдесят "); break;
        case 6: wprintf(L"Шестьдесят "); break;
    }
    switch (a%10)
        {   case 0: wprintf(L"лет"); break;
            case 1: wprintf(L"один год"); break;
            case 2: wprintf(L"два года"); break;
            case 3: wprintf(L"три года"); break;
            case 4: wprintf(L"четыре года"); break;
            case 5: wprintf(L"пять лет"); break;
            case 6: wprintf(L"шесть лет"); break;
            case 7: wprintf(L"семь лет"); break;
            case 8: wprintf(L"восемь лет"); break;
            case 9: wprintf(L"девять лет"); break;

        }
    return 0;
}