#include<stdio.h>
int opposite(int);
int main()
{
    int a,n;
    printf("Enter number:");
    scanf("%d",&n);
    a=opposite(n);
    printf("opposite num is:%d",a);
}
int opposite(int n)
{
    int b;
    b=n*-1;
    return b;
}