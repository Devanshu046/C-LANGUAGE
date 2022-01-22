#include<stdio.h>
int main()
{
    int n,t,a,b,c,e,f,g,h,i,j,reminder;
    printf("enter a number=");
    scanf("%d",&n);

    t=n/2000;
    reminder=n%2000;
    a=reminder/500;
    reminder=reminder%500;
    b=reminder/200;
    reminder%=200;
    c=reminder/100;
    reminder%=100;
    e=reminder/50;
    reminder%=50;
    f=reminder/20;
    reminder%=20;
    g=reminder/10;
    reminder%=10;
    h=reminder/5;
    reminder%=5;
    i=reminder/2;
    reminder%=2;
    j=reminder;
   

    printf("\n2000=%d",t);
    printf("\n500=%d",a);
    printf("\n200=%d",b);
    printf("\n100=%d",c);
    printf("\n50=%d",e);
    printf("\n20=%d",f);
    printf("\n10=%d",g);
    printf("\n5=%d",h);
    printf("\n2=%d",i);
    printf("\n1=%d",j);
}