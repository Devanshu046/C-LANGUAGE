#include<stdio.h>
int main()
{
  char n,a;
  printf("enter a character=");
  scanf("%c",&n);
  a=n+32;

  printf("lowercase character %c=%c",n,a);
}