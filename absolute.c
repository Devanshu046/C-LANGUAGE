#include<stdio.h>
int main()
{
    int a,b;
    printf("enter value=");
    scanf("%d",&a);
    if(a>0)
    {
        printf("absolute value of %d is %d",a,a);
    }
    else
    {
        printf("absolute value of %d is %d",a,a*-1);
    }
    
}