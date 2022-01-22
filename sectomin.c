#include<stdio.h>
int main()
{ 
 int a,b,c,d,e;
 printf("enter second=");
 scanf("%d",&a);
 e=a/3600;
 b=a%60;
 c=a/60;
 
 printf("\nHours=%d",e);
 printf("\nminute=%d",c);
 printf("\nsecond=%d",b);


}