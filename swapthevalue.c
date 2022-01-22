#include<stdio.h>
int main()
{
 int a,b;

  printf("enter first value=");
  scanf("%d",&a);

  printf("enter first value=");
  scanf("%d",&b);
  
   a=a+b;
   b=a-b;
   a=a-b;

   printf("\nnew value of a=%d",a);
   printf("\nnew value of b=%d",b);
  

}