#include<stdio.h>
int main()
{
    int num[5],i,max=-32768,min=32767;

    for ( i = 0; i <=4; i++)
    {
       printf("enter number=");
       scanf("%d",&num[i]);
    }
    
    for ( i = 0; i <= 4; i++)
    {
        printf("%d\n",num[i]);
         if (num[i]<min)
         {
            min=num[i];
         }
         if(num[i]>max)
         {
             max=num[i];
         }
         
    }
    printf("minumum=%d\n",min);
    printf("maximum=%d",max);
}