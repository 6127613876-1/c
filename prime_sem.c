#include<stdio.h>
void main()
{
    int n,i,flag=0;
    for (i = 0; i < n; i++)
    {
        if(n%i!=0)
        {
            continue;
        }
        else
        {
            flag=1;
            printf("\nnot prime");
            break;
        }
    }
if(flag==0)
{
    printf("%d is a prime",n);
}
}


