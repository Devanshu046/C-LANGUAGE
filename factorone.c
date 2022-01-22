#include<stdio.h>
int main()
{
    int n,i,b,c=0,d;
    printf("enter a number=");
    scanf("%d",&n);

    for ( i = 1; i <=n; i++)
    {
        
        b=n%i;
        if(b==0)
        {
        printf("factor=%d\n",i); 
      
        c+=1;
     
        }
      
        
    }
    printf("total factor=%d",c);
    
}