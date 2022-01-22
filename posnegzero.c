#include<stdio.h>
int main()
{
    int n;
    printf("enter number=");
    scanf("%d",&n);
    if(n<0)
    {
         /*if(n>0)
        {
        printf("positive");
        }
         else
        {
            printf("negative");
        }*/
        printf("negative");
        
    }
    else if(n>0)
    {
        printf("positive");
    }
    
    else
    {
        printf("zero");
    }
    
}