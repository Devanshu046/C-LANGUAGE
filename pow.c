#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("enter a base=");
    scanf("%d",&a);
    printf("enter a exponened=");
    scanf("%d",&b); 
    c=pow(a,b);
    printf("answer=%d",c);
}