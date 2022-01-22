#include<stdio.h>
int main()
{
    int n,reminder,a=0,b;

    printf("enter number=");
    scanf("%d",&n);
    b=n;

    while(b!=0)
    {
        reminder=b%10; 
        a=a*10+reminder;
        b=b/10;    
    }
    if(n==a)
    {
        printf("it is palindrome");
    }
    else
    {
        printf("it is not palindrome");
    }
    
}