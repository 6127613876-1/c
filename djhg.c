#include<stdio.h>
int main()

{
    char line[100]="jalal";
    char n;
    int i,count;
    printf("enter an string:");
    scanf("%c",&n);
    count=0;
    for(i=0;line[i]!='\0';i++)
    {
        if(n==line[i])
        {
            count+=1;
        }
    }
    printf("The total number of the letters are %d",count);
}