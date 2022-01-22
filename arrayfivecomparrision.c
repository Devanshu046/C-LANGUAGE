#include<stdio.h>
int main()
{
    int i,num[5],n,a=0;
    for ( i = 0; i <= 4; i++)
    {
        printf("enter number=");
        scanf("%d",&num[i]);
    }
    printf("enter value to search=");
    scanf("%d",&n);
    for ( i = 0; i <= 4; i++)
    {
        printf("%d\n",num[i]);
        if (num[i]==n)
        {
            a++;
        }
    }
    printf("no of occurence of %d is->%d",n,a);    
}