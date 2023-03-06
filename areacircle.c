#include<stdio.h>
void main ()
{
    float a,r;
    printf ("Enter a radius");
    scanf("%f",&r);
    a = 3.14*r*r;
    printf ("Area of circle :%.2f",a);
    getchar();
}