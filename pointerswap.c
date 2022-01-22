#include<stdio.h>
int swape(int *x,int *y);
int main()
{
    int a=10,b=20;
    swape(&a,&b);
    printf("A is=%d\nb is=%d\n",a,b);
}
int swape(int *x,int *y)
{
    int c=*x;
    *y=*x;
    *x=c;
}