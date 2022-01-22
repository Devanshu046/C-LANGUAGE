#include<stdio.h>
int main()
{
    int x,y,z;
    int *p,*q;

    printf("enter x and y:");
    scanf("%d %d",&x,&y);

    p=&x;
    q=&y;

    printf("x=%d y=%d\n",*p,*q);
    z=*p+*q;
    printf("x+y=%d\n",z);

    while(*p != *q)
    {
        printf("x=%d y=%d\n",*p,*q);
        *p+=1;
    }
    printf("x=%d y=%d\n",*p,*q);

    *p=z-*q;
    printf("x=%d\n",x);

    p=q;
    q=&z;
    printf("y=%d z=%d\n",*p,*q);
}