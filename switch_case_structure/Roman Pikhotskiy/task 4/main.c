#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    float m = 22.21;
    int r = (int)m;
    int k = (int)(m * 100) % 100;
    printf("%d ", r);
    switch(r % 10){
        case 0 :
            printf("рублей ");
            break;
        case 1 :
            printf("рубль ");
            break;
        case 2 :
            printf("рубля ");
            break;
        case 3 :
            printf("рубля ");
            break;
        case 4 :
            printf("рубля ");
            break;
        case 5 :
            printf("рублей ");
            break;
        case 6 :
            printf("рублей ");
            break;
        case 7 :
            printf("рублей ");
            break;
        case 8 :
            printf("рублей ");
            break;
        case 9 :
            printf("рублей ");
            break;
    }
    
    printf("%d ", k);
    
    switch(k % 10){
        case 0 :
            printf("копеек ");
            break;
        case 1 :
            printf("копейка ");
            break;
        case 2 :
            printf("копейки ");
            break;
        case 3 :
            printf("копейки ");
            break;
        case 4 :
            printf("копейки ");
            break;
        case 5 :
            printf("копеек ");
            break;
        case 6 :
            printf("копеек ");
            break;
        case 7 :
            printf("копеек ");
            break;
        case 8 :
            printf("копеек ");
            break;
        case 9 :
            printf("копеек ");
            break;
    }
}