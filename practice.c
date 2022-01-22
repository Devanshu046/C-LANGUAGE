#include<stdio.h>
#include<conio.h>
int main()
{
  float da,hra,ma=300,pf,gross,nt,basic;


  printf("enter the basic salery:\n");
  scanf("%f",&basic);
  da=basic*10/100;
  hra=basic*7.5/100;
  pf=basic*12.5/100;
  printf("value of da:%f\n",da);
  printf("value of hra:%f\n",hra);
  printf("value of pf:%f\n",pf);

  gross=basic+da+hra+ma;
  printf("value of gross:%f\n",gross);

  nt=gross-pf;
  printf("value of nt:%f\n",nt);

}