#include<stdio.h>
void main ()
{
    int n,s;
    printf("Enter a positive number :");
    scanf("%d",&n);

    s=sum(n);
    printf("sum = %d",s);   
}
int sum(int m)
{
    int r;
    if (m==1)
    {
        return (1);
    }
    else
    {
        r=m+sum(m-1);
        return r;
    }
}