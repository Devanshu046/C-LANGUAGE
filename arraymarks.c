#include<stdio.h>
int main()
{
    int data[3][4],i,a=0,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("enter number=");
            scanf("%d",&data[i][j]);
        }
    }
   for(i=0;i<3;i++)
   {
       a=0;
       for(j=0;j<4;j++)
       {
           printf("%5d",data[i][j]);
           a=a+data[i][j];
       }
       printf("     total=%d\n",a);
   }
}