#include<stdio.h>
int main()
{
    int n,a,i,c=0;
    printf("enter number=");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        a=n%i;
        if(a==0)
        {
            c+=1; 
        }
    }
        if(c==2)
        {
        printf("prime number");
        }
        else
        {
        printf("non prime number");
        }
    
}