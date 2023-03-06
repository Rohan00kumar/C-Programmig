#include <stdio.h>
void main()
{
    int a, b, c, i, n;
    printf("Enter any number :");
    scanf("%d", &n);

    a = 0;
    b = 1;
    c = 0;
    printf("Fibonacci sereis :");
    for (i = 0; i <= n; i++)
    {
        /* code */
        printf("%d ", c);
        if (i < n)
        {
            /* code */
            printf(",");
        }
        else
        {
            printf(" ");
        }
        a = b;
        b = c;
        c = a + b;
    }
    getchar();
}