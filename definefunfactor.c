#include<stdio.h>
int factor(int);
int main()
{
    int x,n;
    printf("enter num=");
    scanf("%d",&x);
    n=factor(x);
    printf("factor=%d",n);
}
int factor(int a)
{
    int i,b=0,c;
    for(i=1;i<=a;i++)
    {
        c=a%i;
        if(c==0)
        {
            b++;
        }
    }
    return b;
}