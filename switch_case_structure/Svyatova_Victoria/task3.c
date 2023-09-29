/*3 - По номеру года выводить его название в восточном 
календаре. Пример: 1984 - год зелёной крысы (4 балл)*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "");
    int year, year12;
    wprintf(L"Введите год\n");
    scanf("%d", &year);
    wprintf(L"%d - год ", year);
    year12 = year%12;
    if (year12 == 4 || year12 == 9 || year12 == 10 || year12 == 11 || year12 == 0 || year12 == 2 || year12 == 3)
    {
        switch (year%10)
        {
            case 0: case 1: wprintf(L"белой "); break;
            case 2: case 3: wprintf(L"синей "); break;
            case 4: case 5: wprintf(L"зеленой "); break;
            case 6: case 7: wprintf(L"красной "); break;
            case 8: case 9: wprintf(L"желтой "); break;
        }
    }
    else
    {
        switch (year%10)
        {
            case 0: case 1: wprintf(L"белого "); break;
            case 2: case 3: wprintf(L"синего "); break;
            case 4: case 5: wprintf(L"зеленого "); break;
            case 6: case 7: wprintf(L"красного "); break;
            case 8: case 9: wprintf(L"желтого "); break;
        }
    }
    switch (year12)
    {
        case 4 : wprintf(L"крысы"); break;
        case 5 : wprintf(L"быка"); break;
        case 6 : wprintf(L"тигра"); break;
        case 7 : wprintf(L"кролика"); break;
        case 8 : wprintf(L"дракона"); break;
        case 9 : wprintf(L"змеи"); break;
        case 10 : wprintf(L"лошади"); break;
        case 11 : wprintf(L"козы"); break;
        case 0 : wprintf(L"обезьяны"); break;
        case 1 : wprintf(L"петуха"); break;
        case 2 : wprintf(L"собаки"); break;
        case 3 : wprintf(L"свиньи"); break;
    }
    return 0;
}