#include<stdio.h>
int factorial(int);
int main()
{
    int n,a=0,i;
    // printf("enter num:");
    // scanf("%d",&a);
    for(i=1;i<=5;i++)
    {
        a=i;
        n=factorial(a);
        printf("factorial of %d=%d\n",i,n);
    }
    
}
int factorial(int a)
{
    int i,f=1;
    for(i=1;i<=a;i++)
    {
        f*=i;
    }
    return f;
}