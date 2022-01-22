#include<stdio.h>
int max(int,int,int);
int main()
{
    int a,b,c,n;
    printf("enter num:");
    scanf("%d",&a);
    printf("enter num:");
    scanf("%d",&b);
    printf("enter num:");
    scanf("%d",&c);
    n=max(a,b,c);
    printf("max=%d",n);
    
}
int max(int a,int b,int c)
{
   int n;
   n=(a>b && a>c)?a:(b>a && b>c)?b:c;
   return n;
}
