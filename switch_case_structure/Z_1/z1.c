#include <stdio.h>
#include <math.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Rus");
    int a, sot, dec, edin;
    printf("������� �����: "); scanf("%d", &a);
    sot = a/100;
    dec = a/10%10;
    edin = a%10;
    switch(sot){
        case 1: printf("��� "); break;
        case 2: printf("������ "); break;
        case 3: printf("������ "); break;
        case 4: printf("��������� "); break;
        case 5: printf("������� "); break;
        case 6: printf("�������� "); break;
        case 7: printf("������� "); break;
        case 8: printf("��������� "); break;
        case 9: printf("��������� "); break;}
    if (dec == 0){
        switch(edin){
            case 1: printf("����"); break;
            case 2: printf("���"); break;
            case 3: printf("���"); break;
            case 4: printf("������"); break;
            case 5: printf("����"); break;
            case 6: printf("����"); break;
            case 7: printf("����"); break;
            case 8: printf("������"); break;
            case 9: printf("������"); break;}}
    else if (dec == 1) {
        switch(edin){
            case 0: printf("������"); break;
            case 1: printf("�����������"); break;
            case 2: printf("����������"); break;
            case 3: printf("����������"); break;
            case 4: printf("������������"); break;
            case 5: printf("����������"); break;
            case 6: printf("����������"); break;
            case 7: printf("����������"); break;
            case 8: printf("������������"); break;
            case 9: printf("������������"); break;}}
    else{
        switch(dec){
            case 2: printf("�������� "); break;
            case 3: printf("�������� "); break;
            case 4: printf("����� "); break;
            case 5: printf("��������� "); break;
            case 6: printf("���������� "); break;
            case 7: printf("��������� "); break;
            case 8: printf("����������� "); break;
            case 9: printf("��������� "); break;}
        switch(edin){
            case 1: printf("����"); break;
            case 2: printf("���"); break;
            case 3: printf("���"); break;
            case 4: printf("������"); break;
            case 5: printf("����"); break;
            case 6: printf("�����"); break;
            case 7: printf("����"); break;
            case 8: printf("������"); break;
            case 9: printf("������"); break;}}
}