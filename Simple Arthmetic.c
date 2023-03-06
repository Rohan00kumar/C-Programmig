//Simple airthmetic program
#include<stdio.h>
int main()
{
    int f;
    int a,b,c,d,e,g;
    printf("Enter two Numbers :");
    scanf("%d\n%d",&a,&b);
    c=a+b;
    e=a-b;
    d=a*b;
    f=a/b;
    g=a%b;
    printf("Addition:%d\n",c);
    printf("Substraction:%d\n",e);
    printf("Multiplication:%d\n",d);
    printf("Division:%d\n",f);
    printf("Moduler:%d\n",g);
    return 0;
}