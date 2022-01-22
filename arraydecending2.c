#include<stdio.h>
int main()
{
    int i,data[5],j,n;
    //a[0]=10,a[1]=5,a[2]=12,a[3]=9,a[4]=15;
    for ( i = 0; i <= 4; i++)
    {
       printf("enter num=");
       scanf("%d",&data[i]);
    }
    
    for ( i = 0; i <= 4; i++)
    {   
       // b[j]=a[i];   //b[0]=10   b[0]=10
        for( j = i+1; j <= 4; j++)
        {
            if (data[i]>data[j])    
            {                  
                n=data[i];            
                data[i]=data[j];     
                data[j]=n;       
            }    
        }      
    }
    for ( i = 0; i <= 4; i++)
    {
        printf("%3d",data[i]);
    }
    
}
