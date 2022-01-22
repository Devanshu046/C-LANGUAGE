#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("angle a=");
    scanf("%f",&a);
    printf("angle b=");
    scanf("%f",&b);
    printf("angle c=");
    scanf("%f",&c);

    d=a+b+c;
    if(d==180)
    {
        printf("it is valid triangle");
    }
    else
    {
        printf("it is unvalid triangle");
    }
    
}