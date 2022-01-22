#include<stdio.h>
#include<math.h>

int main()
{
    float c,b,a,h,r;

    printf("enter a height=");
    scanf("%f",&h);
    printf("enter a rediues=");
    scanf("%f",&r);

    a=pow(r,2)+pow(h,2);

    b=r+sqrt(a);

    c=3.14*r*b;

    printf("area=%f",c);
}