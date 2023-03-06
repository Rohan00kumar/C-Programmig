#include<stdio.h>
int power(int,int);
int main()
{
    int n,m,k;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("Enter power :");
    scanf("%d",&m);
    k=power(n,m);
    printf("Answer :%d",k);
}
int power(int x,int y)
{
    if (y==0)
    {
        return 1;
    }
    else
    {
        return (x*power(x,y-1));
    }
}