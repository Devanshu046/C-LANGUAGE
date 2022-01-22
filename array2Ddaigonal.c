#include<stdio.h>
int main()
{
    int arr[3][3],i,j,a=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("matrix 1:");
            scanf("%d",&arr[i][j]); 
        }
    }
    if((arr[0][1] || arr[0][2] || arr[1][0] || arr[1][2] || arr[2][0] || arr[2][1])!=0)
    {
        printf("not daigonal");
    }
    else
    {
        printf("daigonal");
    }
}