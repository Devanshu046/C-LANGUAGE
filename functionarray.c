#include<stdio.h>
int sum(int a[],int size);
int main()
{
    int i,a[5],size=5,n;
    for(i=0;i<size;i++)
    {
        printf("enter number=");
        scanf("%d",&a[i]);
    }
    n=sum(a,5);
    printf("sum=%d",n); 
}
int sum(int a[],int size)
{
    int i,total=0;
    for(i=0;i<size;i++)
    {
    total+=a[i];
    }
    return total;
}