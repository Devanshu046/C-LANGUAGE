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
    printf("enter position=");
    scanf("%d",&pos);
    printf("enter new value=\n");
    scanf("%d",&new);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    n++;
    a[pos-1]=new;
    printf("new array\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}