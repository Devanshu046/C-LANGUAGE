#include<stdio.h>
float intrest(float,float,float);
int main()
{
    float p,r,n,a;
    printf("principal=");
    scanf("%f",&p);
    printf("rate of intrest:");
    scanf("%f",&r);
    printf("year:");
    scanf("%f",&n);

    a=intrest(p,r,n);
    printf("intrest=%f",a);
}
float intrest(float a,float b,float c)
{
    float n;
    n=((a*b*c)/100);
    return n;
}