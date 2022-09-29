#include<stdio.h>
int main()
{
    int a[10],i,c;
    printf("enter 10 numbers : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=5;i++)
    {
        c=a[i];
        a[i]=a[9-i];
        a[9-i]=c;

    }
    for(i=0;i<=9;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}