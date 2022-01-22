#include<stdio.h>
int main()
{
    int data[3][3],i,j,data2[3][3],a[3][3];

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("matrix 1:");
            scanf("%d",&data[i][j]); 
        }
    }
    for(i=0;i<3;i++)
    {   
        for(j=0;j<3;j++)
        {
            printf("matrix 2:");
            scanf("%d",&data2[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<=3;j++)
        {
            a[i][j]=data[i][j]+data2[i][j];
            printf("%-5d+%5d =%3d\t",data[i][j],data2[i][j],a[i][j]);
        }
        printf("\n");
    }

}
