#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("enter 10 numbers : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];

    }
    printf("%f",sum/10.0);
    return 0;


}