#include<stdio.h>
#include<conio.h>
void main()
{
  int c,b,a,count=1;
  
  printf("enter the number  of line:");
  scanf("%d",&a);

  for(b=1;b<=a;b++)
  
     for(c=1;c<=b;c++)
      
      printf("%d",count++);
      
  
       printf("\n");
  
}