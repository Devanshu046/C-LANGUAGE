#include<stdio.h>
int main()
{
    int num[5],i,a=0,b=0;

    for ( i = 0; i <= 4; i++)
    {
        printf("enter number=");
        scanf("%d",&num[i]);
    }
    for ( i = 0; i <= 4; i++)
    {
        printf("%d\n",num[i]);
        if (num[i]%2==0)
        {
            a++;
        }
        else
        {
            b++;
        }
        
    }
    printf("odd=%d\neven=%d",b,a);
    
    
}

