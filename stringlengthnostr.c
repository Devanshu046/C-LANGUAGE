#include<stdio.h>
int main()
{
    char name[50],i=0;
    

    printf("enter your name:");
    scanf("%s",&name);
  
    while(name[i]!='\0')
    {
        i++;
        
    }  
        printf("\n%d",i);
}