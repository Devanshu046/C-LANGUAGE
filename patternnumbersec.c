#include<stdio.h>
int main()
{
    int i;

    for ( i = 1; i<=16; i++)
    {
        if(i%4==0)
        {
            printf("%3d\n",i);
        }
        else
        {
            printf("%3d",i);
        }
        

    }
    
}