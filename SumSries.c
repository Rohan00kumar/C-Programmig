#include <stdio.h>
void main()
{
    int n;
    float sum = 0, num1, num2;
    printf("Enter your  number :");
    scanf("%d", &n);
    for (num2 = 1; num2 <= n; num2++)
    {
        /* code */
        num1 = 1 / num2;
        sum = sum + num1;
    }
    printf("Sum of the seris is :%f", sum);
    getchar();
}