#include<stdio.h>
int main()
{
    int m,n,i,a=1;

    printf("enter base=");
    scanf("%d",&m);
    printf("enter exponent=");
    scanf("%d",&n);

    for ( i = 1; i <= n ; i++)
    {
        
        a=a*m;
        
    }
    
    printf("value=%d",a);
    

}