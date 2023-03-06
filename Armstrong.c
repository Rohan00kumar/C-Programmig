#include <stdio.h>
void main()
{
    int n, p, r, sum = 0;
    printf("Enter any number :");
    scanf("%d", &n);
    p = n;
    while (p != 0)
    {
        /* code */
        r = p % 10;
        sum += r * r * r;
        p = 10;
    }
    if (sum == n)
    {
        /* code */
        printf("%d is armstrong number\n ", n);
    }
    else
    {
        printf("%d is not a armstrong number", n);
    }
    getchar();
}