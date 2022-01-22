#include<stdio.h>
int main()
{
    int arr[3][3],i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("matrix 1:");
            scanf("%d",&arr[i][j]); 
        }
    }
    if(arr[0][0]== arr[1][1]==arr[2][2])
    {
       printf("scalar ");
    }
    else
    {
        printf("not scalar");
    }
}
