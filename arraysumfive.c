#include<stdio.h>
int main()
{
    int total=0,i,num[5]; 
    for ( i = 0; i <= 4; i++)
    {
       printf("enter a number=");
       scanf("%d",&num[i]);
       total+=num[i];
       
    }
    for ( i = 0; i <= 4; i++)
    {
        printf("%d\n",num[i]);
        
    }
   printf("total=%d",total);
    
    
}