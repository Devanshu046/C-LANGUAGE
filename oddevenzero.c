#include<stdio.h>
int main()
{
    int n;
    printf("number=");
    scanf("%d",&n);
    if(n%2!=0)
    {
        printf("odd");
    }
    else if(n==0)
    {
        printf("zero");
    }
    else
    {
        printf("even");
    }
    
}