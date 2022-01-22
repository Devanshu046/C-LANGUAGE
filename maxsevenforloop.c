#include<stdio.h>
int main()
{
    int a,i,greater=-32768,less=32767;
    printf("enter number=");

    for ( i = 0; i < 7; i++)
    {
        scanf("%d",&a);
        if(a>greater)
        {
            greater=a;
        }
        if(a < less)
        {
            less=a;
        }
    }
    printf("maximum=%d\n",greater);
    printf("minimum=%d",less);
}