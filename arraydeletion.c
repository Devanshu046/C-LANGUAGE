#include<stdio.h>
int main()
{
    int n,a[30],pos,new,i;

    printf("enter size=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter value=\n");
        scanf("%d",&a[i]);
    }
    printf("position of an element to delete=");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    printf("size of an array=%d\n",n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}