#include<stdio.h>
int main()
{
    int i=0,n,c=0;

    
   
    while(c<5)
    {
         printf("enter number"); 
        
        scanf("%d",&n);
        if(n>0)
        {
        i+=n;
        c++;
        }
        
       
        
    }
    printf("sum=%d",i);
    


   
}