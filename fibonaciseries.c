#include<stdio.h>
int main()
{
    int a=0,b=1,i,c;
   for ( i = 0; i <= 4; i++)
   {
       if (i==0 || i==1)
       {
           printf(" %d",i);
       }
       else
       {
       c=a+b;
       printf(" %d",c);
       a=b;
       b=c;
       }
   }
   
    
    
    
    
}