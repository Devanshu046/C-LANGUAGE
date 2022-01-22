#include<stdio.h>
int main()
{
    int i=2,j,a,b=0,c=1;

    while (c<=5)
    {
        for ( j = 1; j <= i; j++)
        {
            a=i%j;                 //a=2%1=0    a=3%1=0    a=5%1=0    a=7%1=0    a=11%1=0
                                  //a=2%2=0     a=3%3=0    a=5%5=0    a=7%7=0    a=11%11=0
            if (a==0)
            {
                b++;              //b=1         b=1         b=1        b=1       b=1
            }                     //b=2         b=2         b=2        b=2       b=2
               
        }
        i++;                      //3            //4         //6        //8      //12
        if (b==2)
        {
            printf("%d\n",i-1);  //2              3            5         7        11
            c++;               //c=1            c=2          c=3       c=4      c=5
        }
        b=0;
    }
    
}