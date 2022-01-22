#include<stdio.h>
int main()
{
    int n,a,b;
    do
    {
        printf("Menu:\n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Exit\n");
        printf("Enter choice:\n");
        scanf("%d",&n);

        if(n==1)
        {
            printf("enter two number=\n");
            scanf("%d %d",&a,&b);

            printf("addition of %d + %d = %d\n",a,b,a+b);
        }
        else if(n==2)
        {
            printf("enter two number=\n");
            scanf("%d %d",&a,&b);

            printf("subtraction of %d - %d = %d\n",a,b,a-b);

        }
        else if(n==3)
        {
            break;
        }
        
        else
        {
            printf("unvalid\n");
        }
       
       

    } while(n!=3);
    
}