#include<stdio.h>
void main()
{
    int k=0,n1,c=0,fact,n,rem,i;
    scanf("%d",&n);
    n1=n;
    while(n)
    {
        
        rem=n%10;
        fact=1;
        for(i=1;i<=3;i++)
        {
            fact=fact*rem;
        }
        c=c+fact;
        n=n/10;
    }
    printf("%d",c);
}