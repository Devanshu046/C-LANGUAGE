#include<stdio.h>
int main()
{
    int n,a,b;

    printf("1-addition\n2-substraction\n3-exit\n");

    printf("enter a choice:");
    scanf("%d",&n);
    
    if(n==1)
    {
        printf("enter a two number=");
        scanf("%d %d",&a,&b);
        printf("%d + %d = %d ",a,b,a+b);
    }
    else if(n==2)
    {
        printf("enter a two number=");
        scanf("%d %d",&a,&b);
        printf("%d - %d = %d",a,b,a-b);
    }
    else if(n==3)
    {
        printf("bye and have a nice day");
    }
    else
    {
        printf("unvalid entry");
    }
    


    
}