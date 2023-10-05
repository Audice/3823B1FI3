#include<stdio.h>
#include<math.h>
int main(){
int a , b ,c;
double d;
printf("Введите оценки учащегося за 3 предмета ");
scanf("%d %d %d", &a, &b , &c);
d=(a+b+c)/3;
if(d>4.5 && d<=5){
    printf("Ученик отличник ");
}else{
    if(d>3.5 && d<4.5)
    printf("Ученик хорошист ");
    else
    printf("Ученик троечик ");
}


}