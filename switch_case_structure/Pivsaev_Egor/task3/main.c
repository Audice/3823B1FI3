#include <stdio.h>

int main(){
    int year, year_col, year_an;
    int animal, color;
    scanf("%d", &year);
    year_col = year%10;
    year_an = year%12;
    switch (year_col){
        case 0: printf("Белый, ");break;
        case 1: printf("Белый, ");break;
        case 2: printf("Голубой, ");break;
        case 3: printf("Голубой, ");break;
        case 4: printf("Зеленый, ");break;
        case 5: printf("Зеленый, ");break;
        case 6: printf("Красный, ");break;
        case 7: printf("Красный, ");break;
        case 8: printf("Желтый, ");break;
        case 9: printf("Желтый, ");break;
    }
    switch (year_an){
        case 0: printf("Обезьяна");break;
        case 1: printf("Петух");break;
        case 2: printf("Собака");break;
        case 3: printf("Свинья");break;
        case 4: printf("Крыса");break;
        case 5: printf("Бык");break;
        case 6: printf("Тигр");break;
        case 7: printf("Кролик");break;
        case 8: printf("Дракон");break;
        case 9: printf("Змея");break;
        case 10: printf("Лошадь");break;
        case 11: printf("Овца");break;
    }
}