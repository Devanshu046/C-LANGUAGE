#include<stdio.h>
int main()
{
    int data[2][4],i,j;

    // data[0][0]=10;
    // data[0][1]=20;
    // data[0][2]=30;
    // data[0][3]=40;

    // data[1][0]=210;
    // data[1][1]=220;
    // data[1][2]=230;
    // data[1][3]=240;
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("enter number=");
            scanf("%d",&data[i][j]);
        }
    }

   // printf("\n%d    %d  %d  %d",data[0][0],data[0][1],data[0][2],data[0][3]);
   // printf("\n%d   %d %d %d",data[1][0],data[1][1],data[1][2],data[1][3]);
   for(i=0;i<2;i++)
   {
       for(j=0;j<4;j++)
       {
           printf("%5d",data[i][j]);
       }
       printf("\n");
   }
}