#include<stdio.h>
#include<conio.h>
int main()
{
  int l,sum=0,i;

  for ( i = 0; i <=10; i++)
  {
    printf("enter the numbers:");
    scanf("%d",&l);

    if((l %2) == 0)
    continue;

    sum= sum+l;
  }
  printf("total of odd numbers ->%d\n",sum);
}