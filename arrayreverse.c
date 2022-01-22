#include<stdio.h>
int main()
{
    int i=4,a[5],n;
    a[0]=10,a[1]=20,a[2]=30,a[3]=40,a[4]=50;
    // for ( i = 0; i <= 4; i++)
    // {
    //     printf("enter number=");
    //     scanf("%d",&a[i]);
    // }
    for ( i = 0; i <= 1; i++) 
    {
       n=a[i]; //n[0]=10
       a[i]=a[4-i];  //a[0]=50
       a[4-i]=n;    //a[4]=10
    }  
    for ( i = 0; i <= 4; i++)
    {
        printf("%3d",a[i]);
    }
    
}