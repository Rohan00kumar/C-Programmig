#include<stdio.h>
void main ()
{
    int p,t,r,s,g;
    printf("Enter the principle :");
    scanf("%d",&p);

    printf("Enter the time :");
    scanf("%d",&t);
    
    printf("Enter the time :");
    scanf("%d",&r);
    
    s=(p*t*r)/100;
    
    printf("The total amount :%d\n",s);
    g=s+p;
    
    printf("The total amount :%d",g);
    scanf("%d",&g);
    
    getchar();
}