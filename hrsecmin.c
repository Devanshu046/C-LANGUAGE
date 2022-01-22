#include<stdio.h>
int main()
{
    int a,b,c,d,e;


    printf("enter a seconds=");
    scanf("%d",&a);

    b=a/3600;
    e=a%3600;
    c=e/60;
    d=e%60;

   printf("\nhours=%d",b);
   printf("\nminute=%d",c);
   printf("\nseconds=%d",d);

}