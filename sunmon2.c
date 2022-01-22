#include<stdio.h>
int main()
{
    int n;
    printf("enter number=");
    scanf("%d",&n);
    if(n>0 && n<8)
    {
         if(n==1)
        {
            printf("monday");
        }
        if(n==2)
        {
            printf("tuesday");
        }
         if(n==3)
        {
            printf("wendesday");
        }
         if(n==4)
        {
            printf("thuesday");
        }
         if(n==5)
        {
            printf("friday");
        }
         if(n==6)
        {
            printf("saturday");
        }
        if(n==7)
        {
            printf("sunday");
        }
        

    }
    else
    {
        printf("unvalid");
    }
    
}