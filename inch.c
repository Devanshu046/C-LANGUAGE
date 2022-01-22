#include<stdio.h>
int main()
{
  int foot,i;
  float inch;
  printf("inch value=");
  scanf("%f",&inch);

  foot=(inch/12);
  printf("foot=%d",foot);

  i=(inch-(foot*12));
  printf("\ninch=%d",i);



}