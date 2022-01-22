#include<stdio.h>
int main()
{
    int a,b,c;
    printf("first=");
    scanf("%d",&a);
    printf("second=");
    scanf("%d",&b);
    printf("third=");
    scanf("%d",&c);
    if(a>35)
    {
        if(b>35)
        {
            if(c>35)
            {
                printf("pass");
            }
            else
            {
                printf("fail");
            }
          
        }
        else
        {
          printf("fail");
        }
        
        
    }
    else
    {
        printf("fail");
    }
}