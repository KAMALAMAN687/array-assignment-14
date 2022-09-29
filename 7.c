#include<stdio.h>
int main()
{
    int a[10],c,i=0,j;
    printf("enter 10 numbers : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(j=0;a[10]>=a[1];)
    {
        c=0;
        if(a[j]<=a[j+1])
        {
            j++;
        }
        else
        {
            c=a[j];
            a[j]=a[j+1];
            a[j+1]=c;
            j=0;
            
            
            
            

        }
    }
    
   
        printf("second largest number is %d ",a[8]);
    
    return 0;
}