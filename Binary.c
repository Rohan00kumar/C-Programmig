#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int i, k, n,flag=0;
    int left, right, mid = (left+right)/2;

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("Enter  Element :");
    scanf("%d", &k);
    while (left <= right)
    {
        if (a[mid] == k)
        {
            printf("%d\n", k);
        }
        else
        {
            if (k >= a[mid])
            {
                left = mid + 1;
                printf("%d", left);
                flag=1;
            }
            else
            {
                right = mid + 1;
                printf("%d", right);
            }
        }
        break;
    }
}