#include<stdio.h>
int main()
{
    int a[5],b[5],c[10],i;
   // a[0]=10,a[1]=20,a[2]=30,a[3]=40,a[4]=50;
   // b[0]=60,b[1]=70,b[2]=80,b[3]=90,b[4]=95;
    
    for ( i = 0; i <= 4; i++)
    {
      printf("enter number");
      scanf("%d",&a[i]);
    }
     for ( i = 0; i <= 4; i++)
    {
      printf("enter number");
      scanf("%d",&b[i]);
    }
    for ( i = 0; i <= 4; i++)
    {
        c[i]=a[i];
        c[i+5]=b[i];
    }
    for ( i = 0; i <=9; i++)
    {
        printf("%3d",c[i]);
    }
}