#include<stdio.h>
int main()
{
    int a,c,b,n;
  printf("enter a number=");
  scanf("%d",&n);
  //546
  b=(n%10);
  c=(b%2);
  printf("last number=%d",b);
  if(c==0)
  {
      printf("\neven");
  }
  else
  {
      printf("\nodd");
  }

}