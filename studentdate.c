#include<stdio.h>
int main()
{
    int dd[5],mm[5],yy[5],i;
 
    for(i=0;i<5;i++)
    {
    printf("enter day:");
    scanf("%d",&dd[i]);
    printf("enter month:");
    scanf("%d",&mm[i]);
    printf("enter year:");
    scanf("%d",&yy[i]);
    }
    
    for(i=0;i<5;i++)
    {
    printf("date:%d-%d-%d\n",dd[i],mm[i],yy[i]);
    }
}