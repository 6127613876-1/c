#include<stdio.h>
void main()
{
    int n,i,arr[10],x,j;
    scanf("%d",&n);
    printf("n= %d\n",n);
    for (i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (arr[i] > arr[j] )
            {
             x = arr[i];
            arr[i] = arr[j];
            arr[j] = x;
            }
        }
    }
    printf("The ascending order of the array is  ");
    for (i = 0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nthe 2nd largest number is %d",arr[n-2]);
}