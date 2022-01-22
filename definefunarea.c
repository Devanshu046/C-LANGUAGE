#include<stdio.h>
int area(int,int);
int main()
{
    int a,length,breadth;
    printf("enter length:");
    scanf("%d",&length);
    printf("enter breadth:");
    scanf("%d",&breadth);
    a=area(length,breadth);
    printf("area=%d",a);
}
int area(int a,int b)
{
    int n;

    n=a*b;
    return n;
}