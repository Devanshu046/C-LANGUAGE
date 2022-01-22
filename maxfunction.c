#include<stdio.h>
int max(int,int);

void main()
{
    int a,b,z;
    printf("enter a two value=");
    scanf("%d %d",&a,&b);
    z=max(a,b);
    printf("maximum=%d",max);
}
int max(int a,int b)
{
    return(a > b ? a : b);
}
