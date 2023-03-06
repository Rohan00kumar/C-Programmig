#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Enter any number :");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {

        for (j = 0; j <= i; j++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
    }
    getchar();
}