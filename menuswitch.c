#include<stdio.h>
int main()
{
    int n,a,b;

    do
    {
        printf("\nMenu:\n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Exit\n");
        printf("Enter choice:\n");
        scanf("%d",&n);
        

            switch(n)
            {
                
                case 1:
                    printf("enter two number=\n");
                    scanf("%d %d",&a,&b);
                    printf("addition=%d",a+b);
                    break;
                case 2:
                    printf("enter two number=\n");
                    scanf("%d %d",&a,&b);
                    printf("substraction=%d",a-b);
                    break;
                case 3:
                    break;
                default :
                    printf("\n hello invalid\n");
                    break;
               
            }
        } while(n!=3);
        

}