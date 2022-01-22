#include<stdio.h>
int main()
{
    char n;
    printf("enter character=");
    scanf("%c",&n);
    if(n>=65 && n<=90)
    {
        printf("lower case of %c is %c",n,n+32);
    }
    else if(n>=97 && n<=122)
    {
        printf("upper case of %c is %c",n,n-32);
    }
    else
    {
        printf("character is %c",n);
    }
    
}