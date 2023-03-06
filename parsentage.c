#include<stdio.h>
void main()
{
    int a,b,c,d,e,s;
    float f;
    printf("Enter The five subject marks :\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    s = a+b+c+d+e;
    printf ("the total marks are : %d/500",s);
    f = (s*100)/500;
    printf("The parsentage is : %.2f%%",f);
    getchar();
}