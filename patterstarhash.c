#include<stdio.h>
int main()
{
    int l,j,n;

    printf("enter a number of lines=");
    scanf("%d",&n);

    for ( l = 1; l <= n; l++)
    
      
        for (j = 1; j<= l; j++)
        

        if(l%2==1)
        
        printf("*");
        
        else
        
          printf("#");
        
       printf("\n");

          
        
        
        
    
    
    
}