#include<stdio.h>

int main()
{
    int n,l,j,k,b;

    printf("enter the number of lines:");
    scanf("%d",&n);

    printf("pyramid ->\n");
    for(l=1;l<=n;l++)
    {
     for(b=l;b<=n-1;b++)
     printf(" ");

     for(j=1;j<=l;j++)
     printf("%d",j);
    
     for(k=l-1;k>0;k--)
     printf("%d",k);
     printf("\n");
    }

}
