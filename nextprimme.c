#include<stdio.h>
int main()
{
    int i,j,a,b=0,c=0;
    printf("enter number="); //15
    scanf("%d",&i);
    do
    {
        i++;
        b=0;    //16    //17
        for ( j = 1; j <=i; j++)
        {
            a=i%j;       //16%1=0  //16%4=0                           //17%1=0
            if (a==0)    //16%2=0  //16%8=0  //16%16=0                 //17%17=0
            {
              b++;     //5                                              //2
            }
        } 
        if (b==2)  //true
        {
            printf("%d",i);   //17
            c++;   //1
        }  
    } while (c==0);    
    
}