#include<stdio.h>
void main ()
{
    float c,f;
    printf("Enter tempreture in celcius :");
    scanf("%f",&c);
    f = (9*c+160)/5;
    printf("Tempreture in farenhight :%f",f);
    getchar();
}