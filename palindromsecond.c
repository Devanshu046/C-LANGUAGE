#include<stdio.h>
int main()
{
    int i,b,a=0,reminder;
    
    for ( i = 101; i <=200; i++)
    {
       b=i;  
       a=0;                  
       while(b!=0) 
       {
           reminder=b%10;                    
           a=a*10+reminder;
           b=b/10;             
       }
       if(i==a)      
       {
           printf("%d\n",i);    
       } 
       if(i!=a)
       {
           
       }
       
     
    }//while(i<=200);
}