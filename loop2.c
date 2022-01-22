#include<stdio.h>
#include<conio.h>
void main()
{
  int j,l,n;

  printf("enter the number  of line:");
  scanf("%d",&n);

  for(l=1;l<=n;l++)
  {
     for(j=1;j<=l;j++)

      printf("%d ",l);

       printf("\n");
  }
}