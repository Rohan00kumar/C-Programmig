//sparse matrix
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[3][4]={
        {0,0,3,0},
        {0,1,6,4},
        {0,0,0,8},
    };
  
    int size=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; i++)
        {
            if (a[i][j] != 0)
            {
                size++;
            }
        }
    }
    int arr[3][size];
    int k=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] != 0)
            {
                arr[0][k]=i;
                arr[1][k]=j;
                arr[2][k]=a[i][j];
                k++;
            }
            
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n"); 
    }
    return 0;  
}