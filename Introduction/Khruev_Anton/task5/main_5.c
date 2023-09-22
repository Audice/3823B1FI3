#include<stdio.h>
#include<math.h>
#include<locale.h>
void main(){

    setlocale(LC_ALL,"Rus");


    float l;
    printf("enter the circumference length");
    scanf("%f",&l);
    float pi = 3.14;
    float r = l/2*pi;
    float s = pi*pow(r,2);
    
    
    printf("%f",s);
    


}