#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("enter cost=");
    scanf("%f",&a);
    printf("enter sales=");
    scanf("%f",&b);
    
    if(a>b)
    {
        c=a-b;
        d=(c*100)/a;
        
        printf("lose= %f  \nIn percentage= %f",c,d);
    }
    else if(b>a)
    {
        c=b-a;
        d=(c*100)/a;
        printf("profit= %f \nIn percentage= %f",c,d);
    }
    else
    {
        printf("no profit no lose");
    }
    
    
    
}