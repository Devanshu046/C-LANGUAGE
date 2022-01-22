#include<stdio.h>
int main()
{
    int a=40,b=10,c=20,d;
    int *p,*q,*r;
    p=&a;
    q=&b;
    r=&c;

    // z=*p+*q;
    // printf("\na+b=%d",z);
    d=(*p>*q && *p>*r)?*p:((*q>*r && *q>*p)?*q:*r);

    printf("max=%d",d);
}