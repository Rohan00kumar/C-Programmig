#include <stdio.h>
void main()
{
    int n, rev = 0;
    printf("Enter the number :");
    scanf("%d", &n);

    while (n != 0)
    {
        /* code */
        rev = rev * 10;
        rev = rev + n % 10;
        n = n / 10;
    }
    printf("Rverse the number :%d", rev);
    getchar();
}