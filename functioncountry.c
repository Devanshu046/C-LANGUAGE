#include<stdio.h>
int main()
{
    char a[5][50];
    int i,j;
    for(i=0;i<5;i++)
    {
       
          printf("enter country name=");
          scanf("%s",&a[i]);
        
       
    }
    for(i=0;i<5;i++)
    {
        printf("\nname=%s",a[i]);
    }
}