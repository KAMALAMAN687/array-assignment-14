#include<stdio.h>
int main()
{
    int i,a[10],se=0,so=0;;
    printf("enter 10 numbers : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
   {
     if(a[i]%2==0)
    {
        se+=a[i];
    }
    else
    so+=a[i];
   }
    printf("sum of even number is %d and sum of odd number is %d",se,so);
   
}