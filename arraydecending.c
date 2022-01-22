#include<stdio.h>
int main()
{
    int a[5],i,j=0,n,b[5];
    a[0]=10,a[1]=5,a[2]=12,a[3]=9,a[4]=15;
    for ( i = 0; i <= 4; i++)
    {   
        b[j]=a[i];   //b[0]=10   b[0]=10
        for( i = i; i < 4; i++)
        {
            if (b[j]>a[i+1])    //b[0]>a[1]=t   b[0]>a[2]=f     b[0]>a[3]=f   b[0]>a[4]=f
            {                   //10>5=t          5>12=f        5>12=f        5>15=f
                n=b[j];            //n=10
                b[j]=a[i+1];       //b[0]=5
                a[i+1]=n; 
                // printf("%d\n",b[j]);   //a[1]=10 
                  b[j]=a[i+1];        
            }   
           
        }      
    }
}
