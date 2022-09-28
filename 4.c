#include<stdio.h>
int main()
{
    int a[10],i,j;
    printf("enter 10 numbers : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(a[i]>=a[j])
            {
                
            }
            else
            break;
        }    
        if(j==10)
        {
            printf("greatest number is %d",a[i]);
            break;
        }

    }
    return 0;
}