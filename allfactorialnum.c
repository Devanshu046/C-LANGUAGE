#include<stdio.h>
int main()
{
    int fact=1,i,n;

    printf("enter num=");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        fact*=i;
        printf("factorial of %d = %d\n",i,fact);
    }
    
}