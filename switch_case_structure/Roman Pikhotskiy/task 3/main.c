#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int year = 2023;
    int animal = (year - 1924) % 12 ;
    int color = (year - 1924) % 10 / 2;
    
    printf("��� ");
    
    switch(animal){
        case 0 :
            printf("����� ");
            break;
        case 1 :
            printf("���� ");
            break;
        case 2 :
            printf("����� ");
            break;
        case 3 :
            printf("������� ");
            break;
        case 4 :
            printf("������� ");
            break;
        case 5 :
            printf("���� ");
            break;
        case 6 :
            printf("������ ");
            break;
        case 7 :
            printf("���� ");
            break;
        case 8 :
            printf("�������� ");
            break;
        case 9 :
            printf("������ ");
            break;
        case 10 :
            printf("������ ");
            break;
        case 11 :
            printf("������ ");
            break;
    }
    
    switch(color){
        case 0 :
            printf("�������� ");
            break;
        case 1 :
            printf("�������� ");
            break;
        case 2 :
            printf("������� ");
            break;
        case 3 :
            printf("������ ");
            break;
        case 4 :
            printf("������ ");
            break;
    }
    printf("�����");
    
}
