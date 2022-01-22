#include<stdio.h>
int main()
{
    int a,b,c,d,g;
    printf("enter a year=");
    scanf("%d",&a);

    b=a%100; 
    c=a%400;
    d=c%4;

    if(c==0) //when it is divisible by 400
    {
        printf("leap year");
    }
    else if( b!=0 && d==0)
    {
        printf("leap year");
    }
    else
    {
        printf(" not a leap year");
    }
   
   // g=(b!=0 && c!=0 && d==0)?printf("leap year"):((b%2==0) && c!=0 && d==0)?printf("leap year"):printf("not a leap year");


}