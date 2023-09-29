/*4 - Данно вещественное число R (0 <= R <= 100) с 
неболее чем двумя значищами цифрами после запятой. 
Считаем, что R обозначает денежную сумму в рублях. 
Вывести на экране правильно согласованную фразу 
обозначающую R в виде "Х рублей У копеек". Пример: 
22.21 - "22 рубля 21 копейка" (6 балл)*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "");
    float a;
    int rub, kop;
    wprintf(L"Введите число\n");
    scanf("%f", &a);
    rub = trunc(a);
    kop = round((a - rub)*100);
    if (rub>=12 && rub<=19)
    {
        wprintf(L"%d рублей ", rub);
    }
    else
    {
        switch (rub%10)
            {
            case 1: wprintf(L"%d рубль ", rub); break;
            case 2:case 3:case 4: wprintf(L"%d рубля ", rub); break;
            case 0:case 5:case 6:case 7: case 8: case 9:wprintf(L"%d рублей ", rub); break;

            }
    }

    if (kop>=12 && kop<=19)
    {
            wprintf(L"%d копеек", kop);
    }
    else
    {
        switch (kop%10)
            {
            case 1: wprintf(L"%d копейка ", kop); break;
            case 2:case 3:case 4: wprintf(L"%d копейки ", kop); break;
            case 0:case 5:case 6:case 7: case 8: case 9:wprintf(L"%d копеек ", kop); break;

            }
    }
    return 0;
}