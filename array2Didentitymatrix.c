#include<stdio.h>
int main()
{
    int arr[3][3],i,j,a=0,b=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("matrix 1:");
            scanf("%d",&arr[i][j]); 
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j && arr[i][j]!=1)
            {
                a++;
               
            }
            if(i!=j && arr[i][j]!=0)
            {
                a++;
            } 
        }
    }
    if(a>0)
    {
        printf("  not identity matrix");
    }
    else
    {
        printf(" identity matrix");
    }
}