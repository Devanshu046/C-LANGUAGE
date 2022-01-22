#include<stdio.h>
int main()
{
    int m,n;
    printf("value of m=");
    scanf("%d",&m);
    printf("value of n=");
    scanf("%d",&n);
    
    if(m%n==0)
    {
        printf("%d is factor of %d",n,m);
    }
    else
    {
        printf("%d is not a factor of %d",n,m);
    }
    
}