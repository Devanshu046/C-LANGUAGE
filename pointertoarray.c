#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50};
    int *p;
    printf("%d",a[0]);
    p=&a;
    printf("\n%d",*p);
    p=&a[0];
    printf("\n%d",*p);
    printf("\n%u",p);
    p++;
    printf("\n%d",*p);
    printf("\n%u",p);
    p++;
    printf("\n%d",*p);
    printf("\n%u",p);

}