#include<stdio.h>
int main()
{
  float p,r,n,Amount,Intrest;

 printf("\nvalue of principal=");
 scanf("%f",&p);

 printf("\nvalue of rate=");
 scanf("%f",&r);

 printf("\nvalue of year=");
 scanf("%f",&n);

 Intrest=(p*r*n)/100;
 Amount=Intrest+p;

 printf("\nIntrest=%f",Intrest);
 printf("\nAmount=%f",Amount);


}