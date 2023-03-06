// bubble Sort
// #include <stdio.h>
// int main()
// {
//     int a[5]={3,9,1,4,5};
//     int i,j,k,temp=0,flag=0;
//     for ( i = 0; i < 5; i++)
//     {
//         printf("%d\n",a[i]);
//     }

//     for ( i = 0; i < 5; i++)
//     {
//         for ( j = 0; j < 4-i; j++)
//         {
//             if (a[j]>a[j+1])
//             {
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//                 flag=1;
//             }

//         }
//         if (flag==0)
//         {
//             break;
//         }

//     }
//     printf("Sorted Array\n");
//     for ( i = 0; i < 5; i++)
//     {
//         printf("%d\n",a[i]);
//     }

// }

// selection sort
// int main()
// {
//     int i, j, k;
//     int a[5] = {45, 6, 72, 4, 1};
//     printf("Unsorted array:\n");
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d\n", a[i]);
//     }

//     for (i = 0; i < 5; i++)
//     {
//         j = 4;
//         k = 45;
//         while (k <= a[j] && j >= 0)
//         {
//             a[j + 1] = a[j];
//             j--;
//         }
//         a[j + 1] = k;
//     }

//     printf("sorted array:\n");
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d\n", a[i]);
//     }
// }

// Selection Sort
// int main()
// {
//     int a[5] = {2, 90, 5, 34, 6};
//     int i, j, temp=0;
//     int min;
//     printf("Unsorted array:\n");
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d\n", a[i]);
//     }

//     for (i = 0; i < 4; i++)
//     {
//         min = i;
//         for (j = i + 1; j < 5; i++)
//         {
//             if (a[j] < a[min])
//             {
//                 min = j;
//             }
//             if (min != i)
//             {
//                 temp = a[i];
//                 a[i] = a[min];
//                 a[min] = temp;
//             }
//         }
//     }
//     printf("Sorted Array\n");
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d\n", a[i]);
//     }
//     return 0;
// }