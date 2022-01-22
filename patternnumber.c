#include<stdio.h>
int main()
{
    int i,j,a=0;

    for ( i = 1; i <= 4; i++)
    {
       for ( j = 0; j <= 3; j++)
        {
          a=a+1;
          
          printf("%3d",a);
          
        }
        
        

      printf("\n");
    }
    
}