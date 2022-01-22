#include<stdio.h>
int main()
{
    int marks[5],i;
    //marks[0]=10,marks[1]=20,marks[2]=30,marks[3]=40,marks[4]=50;

    //printf("%d\n%d\n%d\n%d\n%d\n",marks[0],marks[1],marks[2],marks[3],marks[4]);
    for ( i = 0; i <=4; i++)
    {
       printf("enter marks=");
       scanf("%d",&marks[i]);
    }
    
    for ( i = 0; i <= 4; i++)
    {
        printf("%d\n",marks[i]);
    }
    
}