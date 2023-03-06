#include<stdio.h>
int seris(int,int);
int main ()
{
    int n,m;
    printf("Enter your first limits :");
    scanf("%d",&n);

    printf("Enter your second limits :");
    scanf("%d",&m);

    printf("All Natural number : ");
    seris(n,m);
    return 0;
}

int seris(int a,int b)
{
if (a==(b+1))
{
    return 0;
}
if (a<b)
{
    printf("%d");
}
a++;
seris(a,b);
}