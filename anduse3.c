#include<stdio.h>
int main()
{
    int m,n,b;
    printf("first=");
    scanf("%d",&m);
    printf("second=");
    scanf("%d",&n);
    printf("third=");
    scanf("%d",&b);
    if((m>35)&&(n>35)&&(b>35))
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }
    
}